#include<iostream>
#include<map>
using namespace std;
string a,b;
int n;
int main(){
    string s[16]={"0000","0001","0010","0011","0100","0101","0110","0111",
              "1000","1001","1010","1011","1100","1101","1110","1111"};
    map<string,string> mp;
    mp["000"]="0";mp["001"]="1";mp["010"]="2";mp["011"]="3";
    mp["100"]="4";mp["101"]="5";mp["110"]="6";mp["111"]="7";
    cin>>n;
    for(int j=0;j<n;++j){
        cin>>a;
        int lena = a.length();
        for(int i=0;i<lena;++i)
            if(a[i] > '9') {
                b = b+s[a[i] - 'A' + 10];
            } else {
                b = b+s[a[i] - '0'];
            }
        int lenb=b.length();
        if(lenb%3==1) b="00"+b;
        else if(lenb%3==2) b="0"+b;
        int flag=0;
        for(int i=0;i<lenb;i+=3){
            string tem = b.substr(i,3);
            string t=mp[tem];
            if(i==0 && t=="0") {
                flag=1; continue;
            }if(flag==1 && i==3 && t=="0"){
                continue;
            }
            cout<<t;
        }
        cout<<endl;
        b="";
    }
    return 0;
}
/**
#include<bits/stdc++.h>
using namespace std;
#define M 100010
char s[M],a[M];
int main(){
    int n,k,t,c;
    scanf("%d",&n);
    while(n--){
        scanf("%s",s);
        k=c=0; t=strlen(s);
        for(int i=0;i<t;++i) s[i]=(s[i]>='A' && s[i]<='F')?s[i]+10-'A':s[i]-'0';
        for(int r=0,i;k<t;r=0){
            for(;k<t;++k)
                if(r*16+s[k] > 7) break;
                else r=r*16+s[k];
            for(i=k;i<t;++i) {
                r = r*16+s[i];
                s[i]=r/8;
                r%=8;
            }
            a[c++]=r+'0';
        }
        for(int i=c-1;i>=0;--i) putchar(a[i]);
        putchar('\n');
    }
    return 0;
}
*/
