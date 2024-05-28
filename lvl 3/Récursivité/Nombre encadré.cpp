#include <bits/stdc++.h>
using namespace std;
void encadre(int n, int m)
{
    cout<<"[";
    if(m>1)encadre(n,m-1);
    if(m==1)cout<<n;
    cout<<"]";
}
int main()
{   
    int n,m ;
    cin>>n>>m;
    if(m>0)
        encadre(n,m);
    else cout<<n;
}