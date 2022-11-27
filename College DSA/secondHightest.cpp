#include<iostream>
#include<climits>
using namespace std;
int main(){
    int hightest = INT_MIN;
    int secondHightest = INT_MIN;
    int n;
    while(n!=-1){
        cin>>n;
        if(n>hightest){
            secondHightest = hightest;
            hightest = n;
        }
        else if(n>secondHightest){
            secondHightest = n;
        }

    }
    cout<<secondHightest<<endl;
    return 0;
}