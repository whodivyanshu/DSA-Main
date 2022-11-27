#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int flag =0;
    int c = 0;
    c = min(a,b);

    for(int i=c;i>1;i--){
        if(a%i==0 && b%i==0){
            cout<<c<<endl;
            flag = 1;
            break;
        }
        else{
            i--;

        }
    }
    
    if(flag==0){
        cout<<1<<endl;
    }
    
    


    return 0;
}