def heapify(arr,n,i):
    largest=i #intialize largest at root
    l=2*i+1 #left=2*i+1
    r=2*i+2 #right=2*i+2
    
    #see if left child and right of root exists and if it is greater than largest
    
    if l<n and arr[i]<arr[l]:
        largest=l
        
    if r<n and arr[largest]<arr[r]:
        largest=r
        
    #change root if needed
    if largest!=i:
        (arr[i],arr[largest])=(arr[largest],arr[i])
        heapify(arr,n,largest)
    #heapify the root
    
    
def heapsort(arr):
    n=len(arr)
    
    for i in range(n//2,-1,-1):
        heapify(arr,n,i)
        
    for i in range(n-1,0,-1):
        (arr[i],arr[0]) = (arr[0],arr[i])
        heapify(arr,i,0)
        
arr=[15,5,20,1,17,10,30]
print(arr)
heapsort(arr)
n=len(arr)
print('sorted array is ')
for i in range(n):
    print(arr[i],end=" ")