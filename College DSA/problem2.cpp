#include<iostream>
using namespace std;
void print(int n){
    if(n==1){
        cout<<"One";
    }
    else if(n==2){
        cout<<"two";
    }
    else if(n==3){
        cout<<"three";
    }
    else if(n==4){
        cout<<"four";
    }
    else if(n==5){
        cout<<"five";
    }
    else if(n==6){
        cout<<"six";
    }
    else if(n==7){
        cout<<"seven";
    }
    else if(n==8){
        cout<<"eight";
    }
    else if(n==9){
        cout<<"nine";
    }
}
int main(){
    int n;
    cin>>n;
    if(n<=10){
        print(n);
    }
    else if(n<=20){
        if(n==11){
        cout<<"Eleven";
    }
    else if(n==12){
        cout<<"Twelve";
    }
    else if(n==13){
        cout<<"Thirteen";
    }
    else if(n==14){
        cout<<"fourteen";
    }
    else if(n==15){
        cout<<"fifteen";
    }
    else if(n==16){
        cout<<"sixteen";
    }
    else if(n==17){
        cout<<"seventeen";
    }
    else if(n==18){
        cout<<"eighteen";
    }
    else if(n==19){
        cout<<"nineteen";
    }
    else{
        cout<<"twenty";
    }   
    }
    else{
        int mod = n%10;
        if(n>20 && n<30){
            
            cout<<"twenty"<<" ";
            print(mod);
        }
        else if(n>=30 && n<40){
            cout<<"Thirty"<<" ";
            print(mod);
        }
        else if(n>=40 && n<50){
            cout<<"Fourty"<<" ";
            print(mod);
        }
        else if(n>=50 && n<60){
            cout<<"Fifty"<<" ";
            print(mod);
        }
        else if(n>=60 && n<70){
            cout<<"Sixty"<<" ";
            print(mod);
        }
        else if(n>=70 && n<80){
            cout<<"Seventy"<<" ";
            print(mod);
        }
        else if(n>=80 && n<90){
            cout<<"Eighty"<<" ";
            print(mod);
        }
        else if(n>=90 && n<99){
            cout<<"Ninty"<<" ";
            print(mod);
        }
    }
    return 0;
}