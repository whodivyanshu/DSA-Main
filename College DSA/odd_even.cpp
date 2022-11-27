#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int mask =1;
    int ans = mask & n;
    if(ans==0){
        cout<<"even"<<endl;
    }
    else{
        cout<<"ODD"<<endl;
    }
    return 0;
}