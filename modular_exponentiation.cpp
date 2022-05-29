#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,n;
    cout<<"enter the number::";
    cin>>a;
    cout<<"enter the power and modular::"; 
    cin>>b>>n;
    //we are calculating (a^b)%n.
    int res=1;
    // Logic- power is calculated by (a ^ (b/2) ) ^ 2.
    while(b>0){

        if(b & 1){
            //odd case where a = a * (a^b/2)^2 is done.
            res = ( 1LL * res * (a)%n )%n;
        }
        res = (1LL * (a)%n * (a)%n );
        b = b/2;
    }
    cout<<res;
    return 0;
}