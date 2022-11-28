#include<iostream>
#include<cmath>
#include<bits/stdc++.h>

int mountainPeak(int n, int arr[]){
    int s = 0;
    int e = n-1;
    int mid = s+ (e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;

}

using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<mountainPeak(n,arr)<<endl;
    


    return 0;
}