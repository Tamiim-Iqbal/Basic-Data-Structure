#include<bits/stdc++.h>
using namespace std;
int main()
{
//insert
    // vector<int>v;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(5);

    // v.insert(v.begin()+2,10);
    // for (int x:v)
    // {
    //     cout<<x<<" ";
    // }
//erase
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    //v.erase(v.begin()+2);
    //v.erase(v.begin()+1,v.begin()+4);
    v.erase(v.begin()+1,v.end()-1);
    for (int x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}