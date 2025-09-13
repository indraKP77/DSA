#include <iostream>
#include <vector>
#include <list>
#include <queue>
using namespace std;

class Graph {
    int V;
    list<int> *l;

public:
    Graph(int V) {
        this->V = V;
        l = new list<int>[V];
    }

    void addEdge(int u, int v) {
        l[u].push_back(v);
        l[v].push_back(u); // undirected
    }

    bool isCycleUndirDFS(int src, int par, vector<bool> &vis) {
        vis[src] = true;
        for (int v : l[src]) {
            if (!vis[v]) {
                if (isCycleUndirDFS(v, src, vis)) {
                    return true;
                }
            } else if (v != par) {
                return true;
            }
        }
        return false;
    }

    bool isCycleUndirBFS(int src, vector<bool> &vis) {
        queue<pair<int, int>> q;
        q.push({src, -1});
        vis[src] = true;

        while (!q.empty()) {
            int u = q.front().first;
            int par = q.front().second;
            q.pop();   // ✅ FIX: remove processed node

            for (int v : l[u]) {
                if (!vis[v]) {
                    q.push({v, u});
                    vis[v] = true;
                } else if (v != par) {
                    return true; // cycle found
                }
            }
        }
        return false;
    }

    bool isCycle() {
        vector<bool> vis(V, false);
        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                if (isCycleUndirBFS(i, vis)) {
                    return true;
                }
            }
        }
        return false;
    }
};

int main() {
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(0, 3);
    g.addEdge(1, 2);
    g.addEdge(3, 4);

    cout << g.isCycle() << endl; // Output: 1 (true, cycle exists)
    return 0;
}
