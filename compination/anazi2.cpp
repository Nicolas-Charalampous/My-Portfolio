#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("ex7_3.txt");
void GetData(int n,int V[],string ono[]){
       for(int i=0;i<n;i++){
    fin>>ono[i]>>V[i];
        }


}
int Find_Student(string onoma,string ono[],int n){
     int l=0,r=n-1;

while(l<=r){
    int mid=(l+r)/2;
    if(ono[mid]==onoma){
        return mid;
    }
    else if(ono[mid]>onoma){
        r=mid-1;
    }
    else
        l=mid+1;

}
return -1;

}


int main(){

int V[25];
string ono[25];
int n;
cin>>n;
GetData(n,V,ono);

string onoma;
cin>>onoma;
int the=Find_Student(onoma,ono,n);
if(the!=-1)
    cout<<V[the];

else
    //msg




return 0;
}
