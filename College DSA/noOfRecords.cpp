#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxi = arr[0];
    int mini =arr[0] ;
    int count1 = 0;
    int count2 = 0;
    for(int i=1;i<n;i++){
        if(arr[i]>maxi){
            maxi = arr[i];
            count1++;
        }
        else if(arr[i]<mini){
            mini = arr[i];
            count2++;
        }
        
    }
    cout<<count1<<" "<<count2<<endl;


    return 0;
}