#include<iostream>
using namespace std;

int pivot(int n, int arr[]){
    int s = 0;
    int e = n-1;
    int mid  = s + (e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0] && arr[mid]
        ){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid =  s + (e-s)/2;
    }
    return s;
}
int search(int n, int arr[],int key){
    int s = 0;
    int e = n-1;    
    


}
int findPosi(int n, int arr, int k){
    int pivott = pivot(n, &arr);

}

int main(){
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     int key;
     cin>>key;
    // pivot(n,arr);
    search(n,arr,key);

    return 0;
}