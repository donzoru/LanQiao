#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=101;i<1000;++i){
        int t=0;
        for(int j=i;j;j/=10) t+=(j%10)*(j%10)*(j%10);
        if(t==i) printf("%d\n",i);
    }
    return 0;
}
