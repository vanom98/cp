#include<bits/stdc++.h>
using namespace std;

//calculate a^b mod 10^9+7
//1101
//a*(a^2)*(a^8)
int binary_expon(int a ,int b ,int mod){
    int ans =1;
    while(b){
        if(b%2==1){
            ans=(1LL*ans*a)%mod;
        }
        a=(1LL*a*a)%mod;
        b=b/2;
    }
    return ans;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<binary_expon(a,b,1e9+7)<<endl;
}
