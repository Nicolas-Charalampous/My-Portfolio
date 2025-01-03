#include <iostream>

using namespace std;

int main(){
string country[10];
for(int i=0;i<10;i++)
cin>>country[i];
int results[10][4];
int maxi=0;
for(int i=0;i<10;i++){
        int sum=0;
    for(int j=0;j<3;j++){
        cin>>results[i][j];
      sum+=results[i][j];
      if(results[i][j]>maxi)
        maxi=results[i][j];
    }
    results[i][3]=sum;
}
cout<<maxi<<endl;
int cnt=0;
for(int i=0;i<10;i++){
    if(results[i][3]>250)
        cnt++;
}
cout<<cnt<<endl;
int f=-1;
for(int i=0;i<10;i++){
    if(country[i]=="CYPRUS"){
        f=results[i][3];
    }
}
cout<<f<<endl;

return 0;
}
