#include <bits/stdc++.h>

using namespace std;
#define INF 1000000001
int main(){
    int t;
    cin>>t;
    while(t--){
int n;
cin>>n;
long A[n];
long mini=INF;
int thesi=-1;
for(int i=0;i<n;i++){
    cin>>A[i];
    if(A[i]<=mini){
        mini=A[i];
        thesi=i;
    }
}
int k;
cin>>k;
int thesi1;
if(k%mini==0){
    for(int i=0;i<=thesi;i++){
        cout<<k/mini<<" ";
    }
    for(int i=thesi+1;i<=n-1;i++){
        cout<<0<<" ";
    }
    cout<<endl;
}
else{
int a=k/mini-1;
int b=mini+k%mini;
for(int i=n-1;i>=thesi;i--){
    if(A[i]<=b){
        thesi1=i;
        break;
    }
}
for(int i=0;i<=thesi;i++){
    cout<<a+1<<" ";
}
for(int i=thesi+1;i<=thesi1;i++){
    cout<<1<<" ";
}
for(int i=thesi1+1;i<=n-1;i++){
    cout<<0<<" ";
}
cout<<endl;

}
    }

return 0;
}
