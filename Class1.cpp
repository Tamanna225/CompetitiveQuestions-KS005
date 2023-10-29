#include <bits/stdc++.h>
using namespace std;
int main(){
    //Sort STL uses quick sort
    //TC = O(n)
    //SC = O(n) if we use 3 variables and create another array
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        int data;
        cin>>data;
        arr[i] = data;
    }
    int l = 0;
    int m = 0;
    int h = n-1;
    while(m<=h){
        if(arr[m] == 0){
            swap(arr[m],arr[l]);
            l++;
            m++;
        }
        else if(arr[m] == 1){
            m++;
        }
        else if(arr[m] == 2){
            swap(arr[m],arr[h]);
            h--;
        }
    }
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}