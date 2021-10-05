#include <bits/stdc++.h>

using namespace std;

int main() {
   string s;
   cin>>s;
  long long int n=s.length(),count=0,ans=0;
 int heavy=0,metal=0;
   for(long long int i=0;i<n;i++){
       if(s[i]=='h'&&s[i+1]=='e'&&s[i+2]=='a'&&s[i+3]=='v'&&s[i+4]=='y'){
           heavy++;
           i=i+4;
          
       }
   
          
               
            else if(s[i]=='m'&&s[i+1]=='e'&&s[i+2]=='t'&&s[i+3]=='a'&&s[i+4]=='l'){
                  
                  ans=ans+heavy;
              i=i+4;
           }
         
   }
   
  cout<<ans;
}