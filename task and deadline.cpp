#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int n;
    cin>>n;
  vector< pair<long long int,long long int>>vect;
   for(long long int i=0;i<n;i++){
      long long int x,y;
       cin>>x>>y;
       vect.push_back({x,y});
   }
  sort(vect.begin(),vect.end());
  
  long long int sum=0,reward=0;
 for(int i=0;i<n;i++){
     sum = sum + vect[i].first;
     reward= reward + vect[i].second - sum;
 }
 cout<<reward;
}