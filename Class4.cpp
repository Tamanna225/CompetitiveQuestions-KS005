#include <bits/stdc++.h>
using namespace std;

int minsubarray(int arr[], int n, int x){
    int sum = 0; 
    int min_len = n+1;
    int start = 0, end = 0;
    while(end < n){
        while(sum <= x && end<n){
            sum+=arr[end++];
        }
        while(sum>x && start < n){
            if(end - start <min_len){
                min_len = end- start;
            }
            sum -= arr[start++];
        }
    }
    return min_len;
}


int main(){
    //Smallest sub array with sum greater than x
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
    cout<<"Minimum Subarray length: "<<minsubarray(arr, n-1, x);
    return 0;
}