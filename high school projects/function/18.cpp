#include <bits/stdc++.h>
using namespace std;
void calculate(string A[][14],pair<int,string> P[]){
        for(int i=0;i<14;i++){
    for(int j=0;j<14;j++){
        if(A[i][j]=="win")
            P[i].first+=3;
        else if(A[i][j]=="lose"){

        }
        else
            P[i].first+=1;
    }
}
}
int main(){
string teams[14];
for(int i=0;i<14;i++){
    cin>>teams[i];
}
string matches[14][14];
pair<int,string> P[14];
for(int i=0;i<14;i++){
        P[i].first=0;
        P[i].second=teams[i];

    for(int j=0;j<14;j++){
        cin>>matches[i][j];
    }
}
sort(P,P+14);
reverse(P,P+14);
for(int i=0;i<14;i++){
    cout<<P[i].second<<setw(15)<<P[i].first<<endl;
}
return 0;
}
