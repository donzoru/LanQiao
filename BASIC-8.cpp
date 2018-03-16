#include<bits/stdc++.h>
using namespace std;
int a[2];
void dfs(int c){
    if(c==2){
        for(int i=0;i<2;++i) printf("%d",a[i]);
        for(int i=1;i>=0;--i) printf("%d",a[i]);
        putchar('\n');
        return;
    }
    for(int i=0;i<10;++i){
        a[c]=i;
        dfs(c+1);
    }
}
int main(){
    for(int i=1;i<10;++i){
        a[0]=i;
        dfs(1);
    }
    return 0;
}
