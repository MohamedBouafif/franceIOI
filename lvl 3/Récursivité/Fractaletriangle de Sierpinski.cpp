#include<bits/stdc++.h>
using namespace std;
void f(vector<vector<char>>& v, int n, int x, int y){
    if(n==1){v[x][y]='#';return;}
    f(v,n/2,x,y);
    f(v,n/2,x+n/2,y);
    f(v,n/2,x,y+n/2);
}
int main()
{
    int n;cin>>n;
    vector<vector<char>> v;
    for(int i = 0 ; i < n ;i++){
        vector<char> x;
        for(int j = 0 ; j < n ;j++){
            x.push_back(' ');
        }
        v.push_back(x);
    }
    f(v,n,0,0);
    for(int i = 0 ; i < n ;i ++)
        {for(int j = 0; j < n;j++)cout<<v[i][j]; cout<<endl;}
}