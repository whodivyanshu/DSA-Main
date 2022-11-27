#include<iostream>
using namespace std;
void factorial(int n){
    int sum = 1;
    for(int i=1;i<=n;i++){
        sum*=i;
    }
    cout<<sum<<endl;


}
int main(){
    int n;
    cin>>n;
    factorial(n);


    return 0;
}