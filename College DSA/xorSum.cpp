#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int count = 0;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		
	}
	for(int i=0;i<n;i++){
		int subXor= 0;
		int surArr= 0;
		for(int j=i+1;j<n;j++){
			subXor^= arr[j];
			surArr+= arr[j];
		}
		if(subXor == surArr){
			count++;
		}


	}
	cout<<count<<endl;
	


	return 0;
}