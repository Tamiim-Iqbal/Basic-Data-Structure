#include<bits/stdc++.h>
using namespace std;
int main()
{
//without space
    // int n;
    // cin>>n;
    // vector<string>v;;
    // for (int i=0; i<n; i++)
    // {
    //     string s;
    //     cin>>s;
    //     v.push_back(s);
    // }
    // for (string x:v)
    // {
    //     cout<<x<<" ";
    // }
//with space
    int n;
    cin>>n;
    cin.ignore();
    vector<string>v(n);
    for (int i=0; i<n; i++)
    {
        getline(cin,v[i]);
    }
    for (string x:v)
    {
        cout<<x<<" ";
    } 
    return 0;
}