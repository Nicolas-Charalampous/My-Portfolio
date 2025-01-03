#include <iostream>

#include <fstream>

using namespace std;

int main(){
ifstream in("ex2.txt");
ofstream out("B.txt");
int a,b,c;
int maxi1,maxi2,maxi3;
while(!in.eof()){
        in>>a>>b>>c;

    if(a>=b && a>=c && b>=c){
        maxi1=a;
        maxi2=b;
        maxi3=c;
    }
    else if(a>=b && a>=c && c>=b){
        maxi1=a;
        maxi2=c;
        maxi3=b;
    }
    else if(b>=a && b>=c && a>=c){
        maxi1=b;
        maxi2=a;
        maxi3=c;
    }
    else if(b>=a && b>=c && c>=a){
        maxi1=b;
        maxi2=c;
        maxi3=a;
    }
    else if(c>=a && c>=b && a>=b){
        maxi1=c;
        maxi2=a;
        maxi3=b;
    }
 else if(c>=a && c>=b && b>=a){
    maxi1=c;
        maxi2=b;
        maxi3=a;
 }
    out<<maxi1<<maxi2<<maxi3;



}

in.close();
out.close();


return 0;
}
