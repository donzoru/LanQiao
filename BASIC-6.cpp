#include<bits/stdc++.h>
using namespace std;
int a[35][35];
int main(){
    int n;
    a[1][1]=1;
    for(int i=2;i<=34;++i) for(int j=1;j<=i;++j) a[i][j]=a[i-1][j]+a[i-1][j-1];
    scanf("%d",&n);
    for(int i=1;i<=n;++i) for(int j=1;j<=i;++j) printf("%d%c",a[i][j],j==i?'\n':' ');
    return 0;
}
