#include <iostream>

using namespace std;
int main(){
string schools[49];
int grapta[49][80];
int electro[49][35];
for(int i=0;i<49;i++){
    cin>>schools[i];
}
int sum;
float mesosg[49],mesose[49];
for(int i=0;i<49;i++){
        sum=0;
        for(int j=0;j<80;j++){
    cin>>grapta[i][j];
    sum+=grapta[i][j];
        }
        mesosg[i]=sum/80.0;
}
for(int i=0;i<49;i++){
        sum=0;
        for(int j=0;j<35;j++){
    cin>>electro[i][j];
    sum+=electro[i][j];
        }
        mesose[i]=sum/35.0;
}
int maxi=0;
int g;
for(int i=0;i<49;i++){
    if(mesosg[i]+mesose[i]>maxi){
        maxi=mesosg[i]+mesose[i];
        g=i;
    }
}
cout<<schools[g]<<endl;
for(int i=0;i<49;i++){
        int cnt=0;
        for(int j=0;j<35;j++){
             if( electro[i][j]>mesose[i])
                cnt++;
        }
        cout<<cnt<<endl;
}
return 0;
}
