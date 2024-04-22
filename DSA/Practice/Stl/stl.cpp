#include<bits/stdc++.h>

using namespace std;

int main(){
    queue<int>s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        s.push(a);
    }

    for(int i=0;i<n;i++){
        int r=s.front();
        cout<<r<<" ";
        s.pop();
    }

    if(s.empty()){
        cout<<"empty";
    }
    else{
        cout<<"present";
    }

}