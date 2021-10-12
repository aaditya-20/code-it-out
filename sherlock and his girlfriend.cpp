#include <iostream>

using namespace std;

int main() {
   int n;
   cin>>n;
   if(n==1||n==2){
       cout<<"1"<<endl;
       while(n--){
           cout<<"1 ";
       }
       return 0;
   }
   int a[n+2];
   a[0]=0;
   a[1]=0;
   for(long long int i=2;i<n+2;i++){
       a[i]=1;
       }
       for(long long int i=2;i<n+2;i++){
           if(a[i]==1){
               for(long long int j=i;j*i<(n+2);j++){
                   a[j*i]=2;
               }
           }
       }
        cout<<"2"<<endl;
      for(long long int i=2;i<n+2;i++){
          cout<<a[i]<<" ";
      }
}