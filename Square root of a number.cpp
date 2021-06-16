#include<bits/stdc++.h>
using namespace std;

  

 // } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int n) 
    {
        long long int lo=0,hi=n;
        long long int mid;
        while(lo<hi)
        {
            mid=lo+(hi-lo+1)/2;
            
            if(mid*mid>n)
            hi=mid-1;
            else
            lo=mid;
        }
      
        return lo;
        
        // Your code goes here   
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}
  // } Driver Code Ends
