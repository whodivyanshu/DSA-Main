#include<iostream>
using namespace std;
int main(){
    int n = 8;
    int bit = 5;
    int mask = 1;
    mask = mask<<(bit-1);
    int ans = mask|n;
    cout<<ans<<endl;


    return 0;
}