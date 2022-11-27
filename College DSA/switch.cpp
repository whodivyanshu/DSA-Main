#include<iostream>
using namespace std;
int main(){
    int n;
    
    float r,s,l,b,h;
    cout<<"enter 1 for circle"<<endl<<"Enter 2 for square"<<endl<<"enter 3 for rectangle"<<endl<<"enter 4 for triangle"<<endl<<"enter 5 for cone"<<endl;
    cin>>n;
    switch (n)
    {
    case 1:
        cin>>r;
        cout<<3.14*r*r<<endl;
        break;
    case 2:
        cin>>s;
        cout<<s*s<<endl; 
        break;
    case 3: 
        cin>>l>>b;
        cout<<l*b<<endl;
        break;
    case 4:
        cin>>b>>h;
        cout<<0.5*b*h<<endl;
        break;  
    case 5:
        cin>>r>>h;
        cout<<0.33*3.14*r*r*h<<endl;   
        break;                   
    
    default:
        cout<<"Enter correct choice"<<endl;
        break;
    }
    


    return 0;
}