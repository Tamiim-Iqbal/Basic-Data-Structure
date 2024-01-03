#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist;
    while (true)
    {
        int n;
        cin>>n;
        if (n==-1) break;
        mylist.push_back(n);
    }
    mylist.sort();
    mylist.unique();
    for (auto it=mylist.begin(); it!=mylist.end(); it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}