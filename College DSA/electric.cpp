#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    float sum  = 0;
    if(n>=0 && n<=200){
        sum=  n * 0.5;

    }
    else if(n>200 && n<=400){
        sum = 100 + (n*0.65);
    }
    else if(n>400 && n<=600){
        sum = 230 + (n*0.80);
    }
    else{
        sum = 390 + n;
    }
    cout<<sum<<endl;
    return 0;
}