#include <iostream>
#include <fstream>
using namespace std;

int main(){
ifstream fin("A.txt");
ifstream fin1("B.txt");
int A[100];
int  B[1000001]={0};
int maxi=0;
int ar;
for(int i=0;i<100;i++){
    fin>>A[i];
    B[A[i]]++;
    if(B[A[i]]>maxi){
        maxi=B[A[i]];
        ar=A[i];
    }
}
int C[1000000];
int cnt=0;
for(int i=0;i<1000000;i++){
    fin1>>C[i];
    if(C[i]==ar)
        cnt++;
}
cout<<cnt;



return 0;
}
