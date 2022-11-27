#include<iostream>
using namespace std;
int main(){
    int n,r,x;
    cin>>n>>r;
    x=n-r;
    int sumn=1,sumr=1,sumx=1;
    for(int i=1;i<=n;i++){
        sumn = sumn*i;
        if(i<=r){
            sumr=sumr*i;
        }
        if(i<=x){
            sumx=sumx*i;
        }
    }
    
    cout<<sumn/(sumr*sumx)<<endl;


    return 0;
}