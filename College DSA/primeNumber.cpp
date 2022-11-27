#include<iostream>
#include<cmath>
using namespace std;
int main(){
    // int n;
    int ll,ul;
    cin>>ll>>ul;
    int count = 1;
    int sum = 0;
    int sum2=  0;
    // cin>>n;
    for(int j=ll;j<=ul;j++){
        count = 1;

    for(int i=2;i<=sqrt(j);i++){
        if(j%i==0){
            count = 0;
            break;
        }
        
    }
    if(count==1){
        // cout<<j<<endl;
        sum2+=j;
        sum++;
    }
    
    
    }
    cout<<sum<<endl;
    cout<<sum2<<endl;

    return 0;
}