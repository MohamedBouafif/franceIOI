#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int p1,p2,p3;
        cin>>p1>>p2>>p3;
        if(p1==p2&&p1==p3){
            if(p1%2!=0)cout<<-1<<endl;
            else cout<<p1<<endl;
        }
        else{
            int m = max(p1,max(p2,p3));
            int ans = abs(p1-m) + abs(p2-m) + abs(p3-m);
            cout<<ans<<endl;
        }

    }
    return 0;
}