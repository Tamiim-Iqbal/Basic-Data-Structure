#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=1; i<=n; i++)   // O(N)
    {
        cin>>a[i];
    }
    int sum=0;
    for (int i=1; i<=n; i++)   // O(N)
    {
        sum+=a[i];
    }
    cout<<sum;         // O(N)+O(N) = O(N+N) = O(N)
    return 0;
}