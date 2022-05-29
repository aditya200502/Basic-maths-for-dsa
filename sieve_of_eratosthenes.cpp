#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n::";
    cin>>n;

    //vector is created of n+1 size as we are taking 0 too.we are intialising each element true at first.
    vector<bool> prime(n+1,1);
    vector<int> ans(n);
    int cnt=0;
    for(int i=2;i<n;i++){

        if(prime[i]){
            ans[cnt]=i;
            cnt++;
            for(int j=2*i;j<n;j=j+i){
                //for i=3, 6 9 12 15 ....(confusion.)
                prime[j]=0;
            }
        }
    }
    cout<<cnt<<endl;
    for(int i=0;i<cnt;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}