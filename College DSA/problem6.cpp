#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count = 1;
    int count2 = 2;
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=i;j--){
            if(count >9){
                count = 0;
            }
            cout<<count<<" ";
            count++;

        }
        
        count =count2;
        count2++;
        if(count2>9){
            count2= 0;
        }

        cout<<endl;
    }


    return 0;
}