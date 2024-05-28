using namespace std;
#include <bits/stdc++.h>





int main()
{
    int k , n;
    cin>>k>>n;
    vector <int>  v(n);
    vector <int> accum(n);
    for(int i = 0 ; i < n ;i++)
    {
        cin>>v[i];
        if(i==0) accum[i] = v[i];
        else accum[i] = accum[i-1] + v[i];
    }
    int m = accum[k - 1];
    for(int i = 1 ;i < n - k + 1; i++)
    {
        
        m = max(accum[i + k - 1] - accum[i - 1] , m );
        
    }
    cout<< m<<endl;
}