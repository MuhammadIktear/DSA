#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n==0)return 1;
    int minfact=fact(n-1);
    return minfact*n;
}
int main()
{
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
}