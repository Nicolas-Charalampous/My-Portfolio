#include <iostream>

using namespace std;

void getdata(float ip[],string ono[]){
for(int i=0;i<10;i++){
    cin>>ono[i];
    cin>>ip[i];
}


}
float mo(float ip[]){
   float sum=0;
   for(int i=0;i<10;i++){

    sum+=ip[i];
   }
   return sum/10.0;
}
int abvavg (float ip[]){
    int cnt=0;
    float avg=mo(ip);
    for(int i=0;i<10;i++){
        if(ip[i]>avg){
            cnt++;
        }
    }
    return cnt;
}

void tip(float ip[],string ono[]){
    for(int i=0;i,10;i++){
        if(ip[i]>1.98){
            cout<<ono[i]<<" "<<ip[i]<<endl;
        }
    }

}






int main(){

 float ip[10];
 string ono[10];
 getdata(ip,ono);
cout<<mo(ip);
cout<<abvavg(ip);
tip(ip,ono);

return 0;
}
