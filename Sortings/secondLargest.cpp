#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int first = arr[0];
    int second = -1;

    for(int i=1;i<n;i++){
        if(arr[i]>first){
            second = first;
            first = arr[i];
        }
    }

    cout<<second<<endl;


    return 0;
}