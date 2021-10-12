#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,flag=1;
        
        string s;
        cin>>s;
        n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]-48==0){

            if(s[i-1]!='*'&&s[i-2]!='*'){
                flag=0;
                cout<<"NO"<<endl;
                break;
            }
            }
        }
        if(flag==1){
            cout<<"YES"<<endl;
        }
    }
}