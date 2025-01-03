#include <bits/stdc++.h>

using namespace std;

void dfs(int node,int prev,vector<vector<int> >AdjList,int pin[]){

    for(int i=0;i<AdjList[node].size();i++){
        int f=AdjList[node][i];
        if(f!=prev){
            if(f)
            dfs(f,node,AdjList,pin);
        }
    }

}

int main(){
    ios::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--){
int n;
cin>>n;
string s;
cin>>s;
int A[n][2];
vector<int> ve;
vector<vector<int> > AdjList(n);
for(int i=0;i<n;i++){
    cin>>A[i][0]>>A[i][1];

    if(A[i][0]==0 && A[i][1]==0){
        ve.push_back(i);
    }
    else if(A[i][0]==0){

        AdjList[i].push_back(A[i][1]);

    }
    else if(A[i][1]==0){
          AdjList[i].push_back(A[i][0]);



    }
    else{
        AdjList[i].push_back(A[i][0]);
        AdjList[i].push_back(A[i][0]);

        //0->Left
        //1->Right
    }

}
pin[0]=0;
int maxi=100000000;
for(int i=0;i<ve.size();i++){

}
cout<<maxi<<endl;


    }
return 0;
}
