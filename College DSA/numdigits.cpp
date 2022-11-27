#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int oddsum = 0;
    int evensum = 0;
    int sum = 0;
    
    int count = 0;
    while(n>0){
        sum=n%10;
        if(sum%2==0){
            evensum+=sum;
        }
        else{
            oddsum+=sum;
        }
        n=n/10;
        // count++;
    }
    cout<<oddsum<<endl;
    cout<<evensum<<endl;


    return 0;
}