#include <bits/stdc++.h>
using namespace std;
int heapify(int i,int arr[],int n)
{
    
    if (i >= n / 2)
        return 0;

    
    int smallest;

    
    int left = 2 * i + 1;

    
    int right = 2 * i + 2;

    
    smallest = arr[left] < arr[i] ? left : i;

    
    if (right < n)
        smallest = arr[right] < arr[smallest]
                             ? right : smallest;

    
    if (smallest != i) {
        swap(arr[i], arr[smallest]);
        heapify(smallest,arr,n);
    }
    return 0;
}


void build(int arr[],int n)
{
    
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(i,arr,n);
    }
}

void largest(int arr[],int n,int k){
    
    

    
    for (int i = k; i < n; i++) {

       
        if (arr[0] > arr[i])
            continue;

        
        else {
            arr[0] = arr[i];
            heapify(0,arr,n);
        }
    }
  
    for (int i = 0; i < k; i++) {
        cout << arr[i] << " ";
    }
}
int main()
{

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    build(arr,n);
    largest(arr,n,k);
    return 0;
}