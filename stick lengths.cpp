#include <bits/stdc++.h>

using namespace std;

int main() {
  long long int n,sum=0,count1=0,count2=0,count3=0,median;
   
  cin>>n;
  long long int a[n];
  
  for(int i=0;i<n;i++){
      cin>>a[i];
      
     
  }
  sort(a+0,a+n);
  if(n%2==0)
 median=n/2;
 else{
     median=(n+1)/2;
 }
  
  
   for(int i=0;i<n;i++){
     
         count1=count1 + abs(a[median]-a[i]);
        
 
     count2=count2+abs(a[median-1]-a[i]);
  }
 
  cout<<min(count1,count2);
}