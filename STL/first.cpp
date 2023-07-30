#include<bits/stdc++.h>
using namespace std;
int main(){
    int x = 0;
    vector<int> arr;
    for(int i=0;i<5;i++){
        cin>>x;
        arr.push_back(x);
    }
    vector<int>::iterator it = arr.begin();
    it++;
    cout<<*(it)<<" ";



    return 0;
}