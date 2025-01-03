#include <iostream>

using namespace std;

struct books{
  int code;
  string name;
  string epitheto;
  int ekdosi;



};

int  main(){

books b[10];
for(int i=0;i<10;i++){
    cin>>b[i].code>>b[i].name>>b[i].epitheto>>b[i].ekdosi;
    if(b[i].epitheto=="Tolkien" && b[i].ekdosi>2010)
        cout<<b[i].code<<" "<<b[i].name<< " "<<b[i].epitheto<<" "<<b[i].ekdosi;
}




return 0;
}
