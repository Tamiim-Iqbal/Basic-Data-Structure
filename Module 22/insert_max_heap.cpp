#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int n;
    cin>>n;
    for(int i =0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
        int cur_idx = v.size()-1;
        while(cur_idx != 0)
        {
            int par_idx = (cur_idx-1)/2;
            if (v[par_idx]<v[cur_idx])
            {
                swap(v[cur_idx],v[par_idx]);
            }
            else break;
            cur_idx = par_idx;
        }
    }
    for (int x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}