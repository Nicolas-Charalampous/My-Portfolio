#include <iostream>

using namespace std;

struct user{
  int code;
  string name;
 string xris;
  int cxris;



};

int main(){
  int n;
  cin>>n;
  user pin[n];
  for(int i=0;i<n;i++){
    cin>>pin[i].code;
    cin>>pin[i].name;
    cin>>pin[i].xris;
    cin>>pin[i].cxris;
  }
  string zx;
  cin>>zx;
  bool a=0;
  for(int i=0;i<n;i++){


    if(pin[i].xris==zx){
        a=1;
        cout<<pin[i].code;
    cout<<pin[i].name;
    cout<<pin[i].xris;
    cout<<pin[i].cxris;
    }

  }
  if(!a)
    cout<<"NOT FOUND"<<endl;

return 0;
}
