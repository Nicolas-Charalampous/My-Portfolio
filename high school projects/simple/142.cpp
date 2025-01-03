#include <bits/stdc++.h>

using namespace std;

int main(){
string ono[10];
int va1[10],va2[10];
float total[10];
for(int i=0;i<10;i++){
    cin>>ono[i];
}
for(int i=0;i<10;i++)
{
    cin>>va1[i];
    while(va1[i]<1 || va1[i]>10)
        cin>>va1[i];

}
for(int i=0;i<10;i++)
{
    cin>>va2[i];
    while(va2[i]<1 || va2[i]>10)
        cin>>va2[i];

}
float maxi=0;
float sum=0;
for(int i=0;i<10;i++)
{
    total[i]=(va1[i]+va2[i])/2.0;
    maxi=max(maxi,total[i]);
    sum+=total[i];
}
float mo=sum/10;
int cnt=0;
for(int i=0;i<10;i++)
{
   if(total[i]==maxi){
    cout<<ono[i]<<endl;
   }
   if(total[i]>mo){
    cnt++;
   }

}
cout<<cnt<<endl;


return 0;
}


