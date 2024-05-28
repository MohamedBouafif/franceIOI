#include <bits/stdc++.h>
using namespace std;
void f(int n)
{
    cout<<"(";
    if(n==1) cout<<"0 + 0";
    if(n>1){
        
        f(n-1);
        cout<<" + ";
        f(n-1);
        
    }
    cout<<")";
   
}
int main()
{
    int n;cin>>n;
    if(n!=0)
    {
        cout<<"0 = ";f(n);
    }
    else cout<<"0 = 0";
}