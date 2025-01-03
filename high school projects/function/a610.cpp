#include <iostream>
using namespace std;

void inssort(float A[],int n){
    for(int i=1;i<n;i++){
       float temp=A[i];
        int j=i-1;
        while(A[j]>temp && j>=0){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=temp;

    }


}

int main(){
int n;
cin>>n;
float A[n];
float sum=0;
for(int i=0;i<n;i++){
    cin>>A[i];
    sum+=A[i];
}
float mo=sum/n;
inssort(A,n);
if(mo<10){
for(int i=0;i<n;i++){
    cout<<A[i]<<" ";
}
}
else{
    for(int i=n-1;i>=0;i--){
    cout<<A[i]<<" ";
}
}


return 0;
}
