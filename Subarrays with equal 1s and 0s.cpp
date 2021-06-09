#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
  public:
    //Function to count subarrays with 1s and 0s.
    long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
    {
        //Your code here
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            arr[i]=-1;
        }
        int ps=0;
        int res=0;
        unordered_map<int,int > num;
        for(int i=0;i<n;i++)
        {
            ps+=arr[i];
            if(ps==0)
            res=i+1;
            auto m=num.find(ps);
            if(m!=num.end())
            res=max(res,i-num[ps]);
            else
            num[ps]=i;
        }
        return res;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution obj;
	cout<< obj.countSubarrWithEqualZeroAndOne(arr, n)<<"\n";
	}
	return 0;
}
  // } Driver Code Ends
