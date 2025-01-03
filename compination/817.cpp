#include <iostream>

using namespace std;

struct players{
    int ar;
    string on;
    float sinolo;



};
void sort_struct(players A[]){
     bool sorted=1;
     players temp;
     do
     {
         sorted=1;
         for(int i=0;i<19;i++){
            if(A[i].sinolo<A[i+1].sinolo){
                sorted=0;
                temp=A[i];
                A[i]=A[i+1];
                A[i+1]=temp;

            }
         }

     }while(sorted==0);




}
void print_struct(players A[]){
    for(int i=0;i<20;i++){
        cout<<A[i].ar<<" "<<A[i].on<<" "<<A[i].sinolo;

    }

}

int main(){
players A[20];
for(int i=0;i<20;i++)
{
    cin>>A[i].ar>>A[i].on>>A[i].sinolo;
}
sort_struct(A);
print_struct(A);

return 0;
}

