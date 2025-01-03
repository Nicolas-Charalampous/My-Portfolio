#include <iostream>
using namespace std;

void inssort(int A[],int n,int k){
    for(int i=1;i<n;i++){
       int temp=A[i];
        int j=i-1;
        while(A[j]%k>temp%k && j>=0){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=temp;

    }


}

int main(){
int n,k;
cin>>n>>k;
int A[n];

for(int i=0;i<n;i++){
    cin>>A[i];

}

inssort(A,n,k);
for(int i=0;i<n;i++){
    cout<<A[i]<<" ";
}


return 0;
}
