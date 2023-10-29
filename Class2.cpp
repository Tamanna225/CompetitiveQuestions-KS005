#include <bits/stdc++.h>
using namespace std;

bool FindNumbers(int arr[],int n, int k){
    sort(arr,arr+n);
    for(int i = 0;i<n;i++){
        int y = k -arr[i];
        int low = i+1;
        int high = n-1;
        while(low<high){
            if(arr[low]+arr[high] == y){
                return 1;
            }
            else if(arr[low]+arr[high]>y){
                high--;
            }
            else if(arr[low]+arr[high] < y){
                low++;
            }
        }
    }
    return 0;
}

int main(){
    //Finding if there are any triplets that sum upto k in an array of n elements
    //expected TC = O(n^2)
    //expected SC = O(n)
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        int data;
        cin>>data;
        arr[i] = data;
    }
    int x;
    cin>>x;
    cout<<"TRIPLETS FOUND: "<<FindNumbers(arr, n, x);

    return 0;
}