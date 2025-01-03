#include <iostream>

using namespace std;
struct projects{
   int code;
   string name;
   string date;
   float proi;


};

int main(){

projects ergo[15];
for(int i=0;i<15;i++){
    cin>>ergo[i].code;
    cin>>ergo[i].name;
    cin>>ergo[i].date;
    cin>>ergo[i].proi;
    if(ergo[i].proi>=10000.00 && ergo[i].proi<=20000.00)
    cout<<ergo[i].code<<" "<<ergo[i].name<<" "<<ergo[i].date<<" "<<ergo[i].proi<<endl;
}

return 0;
}
