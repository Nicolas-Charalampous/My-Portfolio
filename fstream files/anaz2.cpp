#include <iostream>
#include <fstream>

using namespace std;

int main(){
ifstream fin("ex7_4.txt");
int V[50];
string ono[50];
int i=0;
while(!fin.eof()){
    fin>>ono[i]>>V[i];
    i++;
}
string onoma;
cin>>onoma;
int l=0,r=i-1;
int va=-1;
while(l<=r){
    int mid=(l+r)/2;
    if(ono[mid]==onoma){
        va=V[mid];
        l=r+1;
    }
    else if(ono[mid]>onoma){
        r=mid-1;
    }
    else
        l=mid+1;

}
cout<<va;



return 0;
}
