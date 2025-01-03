#include <bits/stdc++.h>

using namespace std;
#define MAXN 1000001
vector<int> ve;
vector<int> ve1;
int spf[MAXN];
void prime(){
      spf[1]=1;
      for(int i=2;i<MAXN;i++){
        spf[i]=i;
      }
      for(int i=4;i<MAXN;i=i+2){
        spf[i]=2;
      }
      for(int i=3;i*i<MAXN;i++){
        if(spf[i]==i){
            for(int j=i*i;j<MAXN;j=j+i){
                if(spf[j]==j)
                    spf[j]=i;
            }
        }
      }



}

void prim(int s,int sum){
    int k=s;
     while(k!=1){

        ve[spf[k]]++;
        sum=sum/ve[spf[k]]*(ve[spf[k]]+1);
        k=k/spf[k];
     }


}

bool pri(int s){
    bool b=1;
   int a=s;
   while(a!=1){
      if(spf[a]>=MAXN){
        b=0;
        break;
      }
      else{
        ve1[spf[a]]++;
        if(ve1[spf[a]]>ve[spf[a]]){
            b=0;
            break;
        }
        a=a/spf[a];
      }

   }

  return b;
}


int main()
{
   prime();
   int t;
   cin>>t;
   while(t--){
     int n,q;
     cin>>n>>q;
     ve.assign(MAXN,0);
     ve1.assign(MAXN,0);
     int sum=1;
     prim(n,sum);
     for(int j=0;j<q;j++){
        int x;
        cin>>x;
        if(x==1){
            int f;
            cin>>f;
            prim(f,sum);

            if(pri(sum)){
                cout<<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;
      ve1.assign(MAXN,0);
        }
        else{
                ve.assign(MAXN,0);
                ve1.assign(MAXN,0);
                sum=1;
            prim(n,sum);

        }
     }




   }



    return 0;

}
