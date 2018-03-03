#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    while(cin>>n) {
        if(n&1) cout<<(1+n)/2*n<<endl;
        else cout<<n/2*(1+n)<<endl;
    }
    return 0;
}
