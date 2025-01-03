#include <bits/stdc++.h>

using namespace std;
int main(){
    ios::sync_with_stdio(0);
int t;
cin>>t;
while(t--){
    long x,n;
    cin>>x>>n;
    int cnt=0;
long j=x-n;
for(int it=2;it*it<=x;it++){
    if(x%it==0){
        if(it%2==0)
            cnt++;
        if(it!=x/it)
            cnt++;
    }
}
for(int it=2;it*it<=j;it++){
    if(j%it==0){
        if(it%2==0)
            cnt++;
        if(it!=j/it)
            cnt++;
    }
}
if(x%2==0)
    cnt--;
cout<<cnt<<endl;
}
return 0;
}
