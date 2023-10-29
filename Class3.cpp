#include <bits/stdc++.h>
using namespace std;

void rearrange(int arr[],int n){
    int i = -1;
    int j = n;
    while(i<j){
        while(i<=n-1 and arr[i]>0){
            i+=1;
        }
        while(j>=0 and arr[j]<0){
            j-=1;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    if(i == 0 || i == n)  //  Condition for edge case
    {
        return;
    }
    int k = 0;
    while(k<n && i<n){
        swap(arr[k],arr[i]);
        i++;
        k = k+2;
    
    }
}

int main(){
    //rearrange te array in alternatie positive and negative items
    //TC = O(n);
    //SC = O(1);
    //using 2 pointer approach
    //order of elements do not matter
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        int data;
        cin>>data;
        arr[i] = data;
    }
    rearrange(arr,n-1);
     for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}