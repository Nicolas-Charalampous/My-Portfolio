#include <iostream>

using namespace std;

struct chars{
  int il;
  int ipsos;
  int varos;

};

struct gym_members{
   int code;
   string ep;
   string on;
   chars xar;



};
int find_limits(int ili,int va,int N,gym_members A){
    int sum=0;
   for(int i=0;i<N;i++){
      if(A[i].xar.il>ili && A[i].xar.varos>va)
        sum++;
   }
   return sum;

}



int main(){
gym_memebrs A[200];
bool al=0;
cin>>A[0].code;
int i=0;
while(i<200 && A[i].code!=0){
    cin>>A[i].ep;
    cin>>A[i].on;
    cin>>A[i].xar.il;
    cin>>A[i].xar.ipsos;
    cin>>A[i].xar.varos;
    if(i+1<200)
    cin>>A[i+1].code;
}
int N=i;



return 0;
}
