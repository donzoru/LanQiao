#include<bits/stdc++.h>
using namespace std;
int a[10010];
int main(){
    int n,b;
    scanf("%d",&n);
    for(int i=0;i<n;++i) scanf("%d",a+i);
    scanf("%d",&b);
    for(int i=0;i<n;++i) if(a[i]==b) return !printf("%d\n",i+1);
    puts("-1");
    return 0;
}
