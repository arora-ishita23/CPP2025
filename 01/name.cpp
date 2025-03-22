#include<iostream>
using namespace std;
int main(){
    int a,n,test=1;
    cout<<"Is it sunday today?(0/1): ";
    cin>>a;

    cout<<"Is today raining?(0/2): ";
    cin>>n;

    if(test==a && test==n){
        cout<<"It is sunday and it is raining";
    }else if(test==a && test!=n){
        cout<<"It is sunday but no rain";
    }else if(test!=a && test==n){
        cout<<"Not sunday but raining";
    }else{
        cout<<" Not raining";
    }

}

