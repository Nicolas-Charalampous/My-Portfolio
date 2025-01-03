#include <iostream>
#include <fstream>

using namespace std;

int main(){
ifstream fin("ex7_7.txt");
int V[25];
string ono[25];
for(int i=0;i<25;i++){
    fin>>ono[i]>>V[i];
}
string onoma;
cin>>onoma;
int l=0,r=24;
int va=-1;
while(l<=r){
    int mid=(l+r)/2;
    if(ono[mid]==onoma){
        va=V[mid];
        l=r+1;
    }
    else if(ono[mid]>onoma){
       l=mid+1;
    }
    else
        r=mid-1;

}
cout<<va;



return 0;
}
