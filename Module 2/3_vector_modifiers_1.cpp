#include<bits/stdc++.h>
using namespace std;
int main()
{
//O(1)
    // vector<int> x;
    // x.push_back(10);
    // x.push_back(20);
    // x.push_back(30);

    // vector<int> v;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v=x;               
    // for (int i=0; i<v.size(); i++)
    // {
    //     cout<<v[i]<<" ";
    // }

//O(N)
    vector<int> x;
    x.push_back(10);
    x.push_back(20);
    x.push_back(30);
    x.push_back(40);

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v=x;   
    for (int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}