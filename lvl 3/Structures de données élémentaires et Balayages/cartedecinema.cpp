
using namespace std;
#include <bits/stdc++.h>
/*My SOLUTION : O(nlogn(n))*/
int main()
{
    int n;cin>>n;
    set<int> s;
    int cheater = -1;
    int k = 1;
    for(int i = 0; i < n ;i++)
    {
        int x;cin>>x;
        if(s.find(x)!=s.end()&& k==1){
            cheater =x;
            k=2;
        }
        s.insert(x);
    }
    
    cout<<cheater;
    
    return 0;

}
/*Best solution O(max(n,m)) :
    int n;cin>>n;
    vector<bool> visited(INT_MAX)
    vector<in> cards;
    for(i = 0; i< n;i++) visited[i] = 0;
    for(int i = 0 ; i  < n; i++)
    {
        cin>>cards[i];
        if(visited[cards[i]]){
            cout<<cards[i];return 0;
        }
        visted[cards[i]] = 1
    }
    cout<<-1<<endl;
*/