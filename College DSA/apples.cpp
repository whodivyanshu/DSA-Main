#include<iostream>
using namespace std;
int main(){
    int s,t,a,b,m,n;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    int arr[m];
    int arr1[n];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        arr[i]=arr[i]+a;
    }
    for(int i=0;i<n;i++){
        arr1[i]+=b;
    }
    int count1 = 0;
    int count2 = 0;
    for(int i=0;i<m;i++){
        if(arr[i]>=s && arr[i]<=t){
            count1++;
        }
    }
    for(int i=0;i<n;i++){
        if(arr1[i]>=s && arr1[i]<=t){
            
            count2++;
        }
    }
    for(int i=0;i<m;i++){
        cout<<arr[i]<<" "; 
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    
    cout<<count1<<endl;
    cout<<count2<<endl;
    
    
    
    return 0;
}