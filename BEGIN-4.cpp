#include<bits/stdc++.h>
using namespace std;
#define M 1000010
#define N 10007
int a[M];
int main(){
    a[1]=a[2]=1;
    for(int i=3;i<M;++i) a[i]=(a[i-1]+a[i-2])%N;
    while(cin>>a[0]) cout<<a[a[0]]<<endl;
    return 0;
}
