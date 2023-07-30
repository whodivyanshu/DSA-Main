#include<iostream>
using namespace std;

bool fun(string str, int start, int end){
    if(start>=end){
        return true;
    }
    if(str[start] != str[end]) return false;
    fun(str,start+1, end-1);
}

int main(){
    string s;
    cin>>s;
    bool n = fun(s,0,s.length()-1);
    
    cout<<n<<endl;



    return 0;
}