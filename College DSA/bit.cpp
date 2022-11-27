#include<iostream>
using namespace std;
int main(){ 

    int n=15;
    int mask = 1;
    int check = 3;
    mask = mask<<(check-1);
    
    if(mask & n){
        cout<<"SET"<<endl;
    }
    else{
        cout<<"RESET"<<endl;
    }
    return 0;
}