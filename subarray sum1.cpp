#include <bits/stdc++.h>

using namespace std;


 
int main() {

    long long int n,x,count=0;
    cin>>n>>x;
   long long int a[n],sum[n];
    for(int i=0;i<n;i++){
        cin>>a[i]; 
    }
   
   sum[0]=a[0];
    for(int i=1;i<n;i++){
        sum[i]=sum[i-1]+a[i];
        
    }
    int i=0,j=0;
    while(i<=n){
        
        if(j==0){
             if(x==sum[i]){
            count++;
            i++;
            j++;
            
        }
        else if (sum[i]>x){
             j++;
            i=i-1;
        }
        else{
            i++;
        }
        }
        else if(x==(sum[i]-sum[j-1])){
            
            count++;
            i++;
            j++;
        }
        else if((sum[i]-sum[j-1])>x){
           
            j++;
            i=i-1;
        }
        else{
            i++;
         
        }
       
    }
    
    cout<<count;
    
}
