#include<iostream>
using namespace std;

int firstOcc(int n, int arr[], int x){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid]==x){
            ans = mid;
            e = mid-1;
        }
        else if(arr[mid]>x){
            e = mid-1;
        }
        else if(arr[mid]<x){
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int arr[5] = {1,2,3,3,5};
    int x;
    cin>>x;
    cout<<firstOcc(n, arr, x)<<endl;;


    return 0;
}