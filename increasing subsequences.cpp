#include <iostream>
#include<string.h>
using namespace std;

int main() {
   int n;
   cin>>n;
   int a[n],last=0;
   string s1,s2,l="L",r="R";
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
   if(n==1){
       cout<<"1"<<endl;
       cout<<"L"<<endl;
       return 0;
   }
   for(int i=0,j=n-1;i<n,j>=0;){
       if(a[i]<a[j]){
           if(i==0&&a[0]>last){
             
               last=a[i];
               s2.append(l);
               i++;
           }
           else if(last<a[i]){
                
                   last=a[i];
                s2.append(l);
                 i++;
           }
           else if (a[i]<last&&a[j]>last){
               
                  last=a[j];
               s2.append(r);
                 j--;
           }
           else 
               break;
           
           
           
       }
       else{
           if(j==n-1&&a[j]>last){
                 
               last=a[j];
               s2.append(r);
               j--;
           }
            else if(last<a[j]){
                 
                   last=a[j];
               s2.append(r);
               j--;
           }
           else if (a[j]<last&&a[i]>last){
                
                  last=a[i];
               s2.append(l);
                 i++;
           }
            else
               break;
           
           
       }
      
   }
   
   cout<<s2.length()<<endl;
   
   cout<<s2<<endl;
}