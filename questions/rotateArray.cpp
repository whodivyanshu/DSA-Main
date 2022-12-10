#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];


    }
    int k;
    cin>>k;
    int arr2[n];
    while(k--){
        for(int i=1;i<n;i++){
            arr2[i]=arr[i-1];
    
        }
        arr2[0]=arr[n-1];
        for(int i=0;i<n;i++){
        arr[i]=arr2[i];
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    


    



    return 0;
}