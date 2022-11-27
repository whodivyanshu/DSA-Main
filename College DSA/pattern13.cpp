#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count = 1;
    int count2 = n-1;
    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            cout<<" "<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<count<<" ";
            count--;
        }
        for(int k=i+1;k>1;k--){
            cout<<count+2<<" ";
            count++;
        }
        count= i+2;
        
        
        cout<<endl;
    }



    return 0;
}