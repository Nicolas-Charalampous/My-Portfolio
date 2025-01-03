#include <bits/stdc++.h>
using namespace std;

int main(){
int A[5][3];
int S[3];
int B[3]={-274};
for(int i=0;i<5;i++){

    for(int j=0;j<3;j++){
        cout<<"Dose thermokrasia gia mera "<<i+1<<" xora "<<j+1<<":";
        cin>>A[i][j];
        S[j]+=A[i][j];
        B[j]=max(B[j],A[i][j]);

    }

}
cout<<setw(15)<<"Mera"<<setw(15)<<"Ellada"<<setw(15)<<"Italia"<<setw(15)<<"Kirpros"<<endl;
for(int i=0;i<5;i++){
    cout<<setw(15)<<i+1;
    for(int j=0;j<3;j++){
        cout<<setw(15)<<A[i][j];
    }
 cout<<endl;
}
for(int i=0;i<5;i++){
    cout<<"Thermokrasies gia mera "<<i+1<<endl;
    cout<<"Ellada: "<<A[i][0]<<endl;
    cout<<"Italia: "<<A[i][1]<<endl;
    cout<<"Kipros: "<<A[i][2]<<endl;

}
for(int i=0;i<3;i++){
    cout<<S[i]/5.0<<endl;
}
for(int i=0;i<3;i++){
    cout<<B[i]<<endl;
}
for(int i=0;i<3;i++){
    cout<<S[i]/5.0<<" ";
}
cout<<endl;
for(int i=0;i<3;i++){
    cout<<B[i]<<" ";
}


return 0;
}
