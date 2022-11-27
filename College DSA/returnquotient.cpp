#include<iostream>
using namespace std;

int checkque(int a,int b){
    if(a%b==0){
        return a/b;
    }
    else{
        return -1;
    }
    
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<checkque(a,b)<<endl;
    
    return 0;
}