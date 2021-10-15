
#include <bits/stdc++.h>

using namespace std;

long long int add(long long int n){
   long long  int a[n+1];
   a[0]=0;
   a[1]=1;
    for(int i=2;i<n+1;i++){
        a[i]=a[i-1]+i;
    }
    return a[n];
}
int main() {
    int t;
    cin>>t;
    while(t--){
        long long int n,sum=0,count=0,b,mean;
        cin>>n;
        map<long long int,long long int>m;
        long long int a[n];
        for(int  i=0;i<n;i++){
            cin>>a[i];
            sum=sum+a[i];
            m[a[i]]++;
        }
        if(sum%n!=0){
            if(n%2!=0){
                cout<<count<<endl;
                continue;
            }
            else if(n%2==0){
                if(sum%(n/2)!=0){
                    cout<<count<<endl;
                    continue;
                }
            }
        }
       
        mean=(2*sum)/n;
        //cout<<mean<<" ";
        for(auto i=m.begin();i!=m.end();i++){
        b=i->first;
        
        // cout<<b<<" "<<i->second<<" ";

  
    if(m.find(mean-b)==m.end()){
        continue;
    }
    else{
        if(b!=(mean-b)){
         
           
        count=count + (m.find(mean-b)->second)*(i->second);
        
        }
        else if (b==mean-b){
            if(i->second!=1){
            count =count + add(((i->second)-1));
        }
            
        }
    }
    m[b]=0;
    m[m.find(mean-b)->first]=0;

//        cout<<b<<" "<<i->second<<" ";

            
        }
        cout<<count<<endl;
        
    }
}
  