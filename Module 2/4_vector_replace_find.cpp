#include<bits/stdc++.h>
using namespace std;
int main()
{
//replace
    // vector<int>v;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(2);
    // v.push_back(4);
    // v.push_back(3);
    // v.push_back(5);
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(4);
    // v.push_back(5);
    // v.push_back(3);
    // v.push_back(2);

    // replace(v.begin(),v.end(),2,100);

    // for (int x:v)
    // {
    //     cout<<x<<" ";
    // }

//find
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(4);
    v.push_back(3);
    v.push_back(5);
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(5);
    v.push_back(3);
    v.push_back(2);

    //vector<int>::iterator it;
    //it = find(v.begin(),v.end(),3);
    auto it = find(v.begin(),v.end(),3);
    if (it == v.end()) cout<<"Not Found";
    else cout<<"Found";


    
    

    return 0;
}