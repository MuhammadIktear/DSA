#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int max1=INT_MIN;
        int ind1;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]>max1)
            {
                max1=arr[i];
                ind1=i;
            }
        }
        int max2=INT_MIN;
        int ind2;
        for(int i=0;i<n;i++)
        {
            if(i!=ind1)
            {
               if(arr[i]>max2)
            {
                max2=arr[i];
                ind2=i;
            }
            }
        }
        if(ind1<ind2){
        cout<<ind1<<" "<<ind2<<endl;
        }
        else cout<<ind2<<" "<<ind1<<endl;
    }
    return 0;
}