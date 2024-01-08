#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    stack <int> s;
    queue <int> q;
    
    for (int i=1; i<=n; i++)
    {
        int x;
        cin>>x;
        s.push(x);
    }
    for (int i=1; i<=m; i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    if (n != m)
    {
        cout<<"NO";
    }
    else
    {
        bool flag = true;
        while(!s.empty())
        {
            if (s.top() != q.front())
            {
                flag = false;
                break;
            }
            else
            {
                s.pop();
                q.pop();
            }
        }
        if (flag==true) cout<<"YES";
        else cout<<"NO";
    }
    return 0;
}