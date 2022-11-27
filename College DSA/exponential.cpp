#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int power;
    cin>>power;
    int n1 = 1;
    for(int i=0;i<power;i++){
        n1*=n;
    }
    cout<<n1<<endl;
    return 0;
}