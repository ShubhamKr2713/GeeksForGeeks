#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    //Function to count the number of subarrays which adds to the given sum.
    int subArraySum(int arr[], int n, int sum)
    {
        //Your code here
        unordered_map<int,int> res;
        int ps=0;
        int c=0;
        for(int i=0;i<n;i++)
        {
            ps+=arr[i];
            if(ps==sum)
            c++;
            auto x=res.find(ps-sum);
            if(x!=res.end())
            c+=(*x).second;
            
            res[ps]++;
        }
        return c;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,sum=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cin>>sum;
	    Solution obj;
	    cout<<obj.subArraySum(arr, n, sum)<<endl;
	}
	return 0;
}  // } Driver Code Ends
