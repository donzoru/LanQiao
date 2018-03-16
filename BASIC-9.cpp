#include<bits/stdc++.h>
using namespace std;
char s[10];
int main(){
    int n;
    scanf("%d",&n);
    for(int i=10000;i<1000000;++i){
        int k=0;
        for(int j=i;j;j/=10,++k) s[k]=j%10+'0';
        s[k]=0;
        string a(s);
        string b=a;
        reverse(b.begin(),b.end());
        if(a!=b) continue;
        int t=0;
        for(int i=0;a[i];++i) t+=(a[i]-'0');
        if(t==n) printf("%d\n",i);
    }
    return 0;
}
