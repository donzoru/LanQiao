#include<bits/stdc++.h>
using namespace std;
int n,a,sum,maxx,minn;
int main(){
    maxx=INT_MIN;
    minn=INT_MAX;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&a);
        sum+=a;
        maxx=max(a,maxx);
        minn=min(a,minn);
    }
    printf("%d\n%d\n%d\n",maxx,minn,sum);
    return 0;
}
