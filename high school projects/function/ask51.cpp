#include <iostream>

using namespace std;

void getdata(int temp[]){
  for(int i=0;i<24;i++){
    cin>>temp[i];
  }
}
float Average(int temp[]){
    int sum=0;
  for(int i=0;i<24;i++){
    sum+=temp[i];
  }
  float avg=sum/24.0;
  return avg;

}
void Calculate_Extremes(int temp[],float &maxt,int &xr,float &mint,int &xr1){
    maxt=temp[0];
    mint=temp[0];
    xr=0;
    xr1=0;
  for(int i=1;i<24;i++){
     if(temp[i]>maxt){
        maxt=temp[i];
        xr=i;
     }
     if(temp[i]<mint){
        mint=temp[i];
       xr1=i;
     }
  }

}
void Show_Results(int temp[],float maxt,int xr,float mint,int xr1){
   for(int i=0;i<24;i++){
    cout<<temp[i]<<endl;
   }
   cout<<maxt<<" "<<xr<<endl;
   cout<<mint<<" "<<xr1<<endl;
}

int main(){
  int temp[24];
  getdata(temp);
  float maxt,mint;
  int xr,xr1;
  Calculate_Extremes(temp,maxt,xr,mint,xr1);
     Show_Results(temp,maxt,xr,mint,xr1);

return 0;
}
