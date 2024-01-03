#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist;
    int q;
    cin>>q;
    while (q--)
    {
        int x,v;
        cin>>x>>v;
        if (x==0)
        {
            mylist.push_front(v);
            cout<<"L -> ";
            for (auto it = mylist.begin(); it != mylist.end(); it++) 
            {
                cout << *it << " ";
            }
            cout << endl;
            cout<<"R -> ";
            for (auto it = mylist.rbegin(); it != mylist.rend(); it++) 
            {
                cout << *it << " ";
            }
            cout << endl;
        }
        else if(x==1)
        {
            mylist.push_back(v);
            cout<<"L -> ";
            for (auto it = mylist.begin(); it != mylist.end(); it++) {
                cout << *it << " ";
            }
            cout << endl;
            cout<<"R -> ";
            for (auto it = mylist.rbegin(); it != mylist.rend(); it++) 
            {
                cout << *it << " ";
            }
            cout << endl;
        }
        else if (x==2)
        {
            if (v < mylist.size())
            {
                if (v==0)
                {
                    mylist.pop_front();
                }
                else 
                {
                    auto it = next(mylist.begin(), v);
                    mylist.erase(it);
                }
            }
            cout<<"L -> ";
            for (auto it = mylist.begin(); it != mylist.end(); it++) {
                cout << *it << " ";
            }
            cout << endl;
            cout<<"R -> ";
            for (auto it = mylist.rbegin(); it != mylist.rend(); it++) 
            {
                cout << *it << " ";
            }
            cout << endl;
        } 
    }
    return 0;
}