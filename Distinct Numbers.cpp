#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,x=1;
    cin>>n;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    sort(v,v+n);
    for (int i = 1; i < n; i++)
    {
        if(v[i-1]!=v[i])
            x++;
    }
    cout<<x<<endl;
}
