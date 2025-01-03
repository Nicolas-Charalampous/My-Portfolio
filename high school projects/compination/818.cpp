#include <iostream>

using namespace std;

struct members{
    int ar;
    string on;
    int il;

};
void sort_members(members A[]){
     bool sorted=1;
     members temp;
     do
     {
         sorted=1;
         for(int i=0;i<19;i++){
            if(A[i].il>A[i+1].il){
                sorted=0;
                temp=A[i];
                A[i]=A[i+1];
                A[i+1]=temp;

            }
         }

     }while(sorted==0);




}
void print_members(members A[]){
    for(int i=0;i<20;i++){
        cout<<A[i].ar<<" "<<A[i].on<<" "<<A[i].il;

    }

}

int main(){
members A[10];
for(int i=0;i<10;i++){
    cin>>A[i].ar>>A[i].on>>A[i].il;
}
sort_members(A);
print_members(A);

return 0;
}
