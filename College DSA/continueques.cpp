#include<iostream>
using namespace std;
int main(){ 
    int n;
    cin>>n;
    int weight,height;
    int count  =0;

    for(int i=0;i<n;i++){
       cin>>weight>>height;
       if(weight<50 && height>170){
        count++;
       }
    }
    cout<<count<<endl;


    return 0;
}