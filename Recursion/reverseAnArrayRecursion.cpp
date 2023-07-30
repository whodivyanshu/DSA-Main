#include<iostream>
using namespace std;

void reverseArray(int arr[], int l, int r){
    if(l>r){
        return;
    }
    swap(arr[l],arr[r]);
    reverseArray(arr,l+1,r-1);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverseArray(arr,0,n-1);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}