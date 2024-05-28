#include<bits/stdc++.h>
using namespace std;
void Hanoi(int n, char X,char Y,char Z)
{
    if(n==1) cout<<X<<" -> "<<Z<<endl;
    else
    {
        Hanoi(n-1, X,Z,Y);
        cout<<X<<" -> "<<Z<<endl;
        Hanoi(n-1,Y,X,Z);
    }
}
int main()
{
    int n;cin>>n;
    Hanoi(n,'1','2','3');
}