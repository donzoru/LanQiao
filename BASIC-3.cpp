#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;++i){
        int c=0;
        for(int j=i;j>=1 && c<m;--j,++c) putchar('A'+j);
        for(int j=0;j<m && c<m;++j,++c) putchar('A'+j);
        putchar('\n');
    }
    return 0;
}
