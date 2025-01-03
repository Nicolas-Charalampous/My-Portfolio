#include <bits/stdc++.h>
using namespace std;

int inssort(int A[],int n){
    int cnt=0;
    for(int i=1;i<n;i++){
       int temp=A[i];
        int j=i-1;

        while(A[j]>temp && j>=0){
            A[j+1]=A[j];
            j--;
          cnt++;
        }

        A[j+1]=temp;

    }

 return cnt;
}

int bsort(int A[],int n){
    bool sorted;
    int cnt=0;
 do{
    sorted=1;

    for(int i=1;i<n;i++){
        if(A[i]<A[i-1]){
            swap(A[i],A[i-1]);

            sorted=0;
        }
        cnt++;
    }



 }while(sorted==0);

 return cnt;
}

int main(){
int n;
cin>>n;
int A[n];
int B[n];
for(int i=0;i<n;i++){
cin>>A[i];
B[i]=A[i];
}

cout<<inssort(A,n)<<endl;
cout<<bsort(B,n)-1;


return 0;
}
