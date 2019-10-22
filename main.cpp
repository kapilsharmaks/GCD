#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b){
    if(b==0){
        return a;
    }
    else {
        a = a%b;
        GCD(b,a);
    }
}

int main() {
    int a,b,ans;
    cout<<"Enter two numbers :";
    cin>>a>>b;
    ans = GCD(a,b);
    cout<<ans;
    return 0;
}
