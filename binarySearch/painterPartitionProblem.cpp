#include<iostream>
using namespace std;
void fun(int arr[]){
    arr[0]=5;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];


    }
    fun(arr);


    return 0;
}