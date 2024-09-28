#include<bits/stdc++.h>
using namespace std;

string binary(int n){
    string ans="";
    while(n>0){
        if(n%2==1) ans+='1';
        if(n%2==0) ans+='0';
        n=n/2;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}


int num(string s){
    int p=1;
    for(auto i:s){
        
    }
}
int main(){
    string s=binary((13));
    // cout<<s;
    uint32_t a=1;
    uint32_t ans=0;
    uint32_t g=1010101010;
    for(int i=0;i<10;i++){
        if((a&g)!=0){
            ans++;
        }
        ans=ans<<1;
        
    }
    // a=a<<1;
    // a++;
    cout<<(a&2);
    return 0;
}