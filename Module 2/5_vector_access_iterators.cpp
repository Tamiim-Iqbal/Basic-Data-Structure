#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    //cout<<v[v.size()-1];
    cout<<v.back()<<endl;
    cout<<v[0]<<endl;
    //cout<<v.front();

    for (auto it = v.begin(); it<v.end(); it++)
    {
        cout<<*it<<" ";
    }

    return 0;
}