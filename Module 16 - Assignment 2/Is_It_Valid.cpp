#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        //cout<<s<<endl;
        stack<char>st;
        for (char c:s)
        {
            if( st.empty())
            {
                st.push(c);
            }
            else 
            {
                if (c != st.top())
                {
                    st.pop();
                }
                else 
                {
                    st.push(c);
                }
            }
        }
        if (st.empty()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}