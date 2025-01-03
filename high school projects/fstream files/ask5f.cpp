#include <iostream>
#include <fstream>

using namespace std;

int main(){
ifstream fin ("5in1.txt");
ifstream fin1("5in2.txt");
ofstream fout("sum.txt");
int sum=0;
int num;
while(!fin.eof()){
    fin>>num;
    sum+=sum;
}
while(!fin1.eof()){
    fin1>>num;
    sum+=sum;
}
fout<<sum;


return 0;
}
