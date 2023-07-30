#include<iostream>
using namespace std;

int sumTillN(int n){
    if(n==0){
        return 0;
    }
    return n + sumTillN(n-1);

}

int main(){
    int n;
    cin>>n;

    int sum = sumTillN(n);
    cout<<sum<<endl;


    return 0;
}