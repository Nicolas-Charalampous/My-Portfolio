#include <iostream>

using namespace std;

int bs(int A[],int n,int trg){
   int l=0,r=n-1,ap=-1;
   while(l<=r){
    int mid=(l+r)/2;
     if(A[mid]>trg){
        ap=A[mid];
        r=mid-1;
    }
    else
        l=mid+1;
   }

    return ap;
}

int main(){
int A[100];
int n;
cin>>n;
for(int i=0;i<n;i++){
    cin>>A[i];
}
int k;
cin>>k;
cout<<bs(A,n,k);

return 0;
}
