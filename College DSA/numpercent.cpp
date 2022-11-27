#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int n2 = n;
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

    }

    float percent = 0;

    if(oddsum>15){
        percent = (n2*15)/100.0;
    }
    else{
        percent = (n2*oddsum)/100.0;
    }
    cout<<"percent="<<oddsum<<endl;
    cout<<"discounted amount="<< n2-percent<<endl;
    cout<<"total amount="<<n2<<endl;




    return 0;
}