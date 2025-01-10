#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int odd=0;
        if(a%2 != 0) odd++;
        if(b%2 != 0) odd++;
        if(c%2 != 0) odd++;

        if(odd == 1 || odd == 2){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

