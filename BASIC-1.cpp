#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(scanf("%d",&n)!=EOF)
        puts((n%4==0 && n%100!=0 || n%400==0)?"yes":"no");
    return 0;
}
