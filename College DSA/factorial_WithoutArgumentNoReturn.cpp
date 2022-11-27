#include<iostream>
using namespace std;

void factorial(){
    int n;
    cin>>n;
    int sum = 1;
    for(int i=1;i<=n;i++){
        sum*=i;
    }

    cout<<sum<<endl;


}
int main(){
    factorial();



    return 0;
}