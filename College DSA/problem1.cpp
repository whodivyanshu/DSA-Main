#include<iostream>
using namespace std;
int main(){ 
    int a,b,c;
    cin>>a>>b>>c;
    if(a>=b && a>=c){
        if(a*a == b*b + c*c){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO";
        }
    }
    else if(b>=a && b>=c){
        if(b*b == a*a + c*c){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO";
        }
        
    }
    else{
        if(c*c == b*b + a*a){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO";
        }
    }



    return 0;
}