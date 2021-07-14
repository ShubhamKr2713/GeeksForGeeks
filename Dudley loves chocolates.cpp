#include <bits/stdc++.h>
using namespace std;

int ss(vector<int> arr,int k)
{
    int s=0;
    for(int i=0;i<arr.size();i++)
    {
        s+=ceil((1.0*arr[i])/k);
    }
    return s;
}

int main()
{
    int n,k;
    cin>>n>>k;
    int maxx=INT_MIN;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {cin>>arr[i];
    maxx=max(maxx,arr[i]);}
    
    int lo=1,hi=maxx,mid;
    
    while(lo<hi)
    {
      mid=lo+(hi-lo)/2;
      if(ss(arr,mid)<=k)
      hi=mid;
      else
      lo=mid+1;
    }
    cout<<lo<<endl;
}
