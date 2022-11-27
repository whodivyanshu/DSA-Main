#include<iostream>
using namespace std;

int firstOcc(int n, int arr[], int x){
    int s = 0;
    int e = n-1;
    int mid = (s+e)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid]==x){
            ans = mid+1;
            e = mid-1;
        }
        else if(arr[mid]>x){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    cout<<firstOcc(n, arr, x)<<endl;;


    return 0;
}