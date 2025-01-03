#include <iostream>

using namespace std;

void bsort(int num[],int n){
     bool sorted;
     do{
        sorted=1;
        for(int i=0;i<n-1;i++){
            if(num[i]!=1){
                int g=i+1;
                bool b=0;
                while(num[g]==1 && g<n){
                    g++;
                    if(g==n){
                        b=1;
                        break;
                    }
                }
                if(b==0){
                        if(num[i]>num[g]){
                    swap(num[i],num[g]);
                    sorted=0;
                        }
                }

            }
        }
     }while(sorted==0);




     }





int main(){
int n;
cin>>n;
int num[n];
for(int i=0;i<n;i++){
    cin>>num[i];
}
bsort(num,n);
for(int i=0;i<n;i++){
    cout<<num[i]<<" ";
}

return 0;
}
