#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    int flag = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n-1;i++){
        for(int j=1;j<n;j++){
            if(arr[i][j]==1){
                flag = 1;
            }
        }


    }

    



    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }




    return 0;
}