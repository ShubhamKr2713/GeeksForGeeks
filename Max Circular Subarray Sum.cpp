#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find circular subarray with maximum sum
// arr: input array
int kdane(int arr[],int n)
{
    int res=arr[0];
    int maxsofar=arr[0];
    
    
    for(int i=1;i<n;i++)
    {
        maxsofar=max(arr[i],arr[i]+maxsofar);
        
        res=max(maxsofar,res);
    }
    return res;
}


// num: size of array
int circularSubarraySum(int arr[], int n){
    
    int normal=kdane(arr,n);
    
    if(normal<0)
    return normal;
    int s=0;
    
    for(int i=0;i<n;i++)
    {
        s=s+arr[i];
        arr[i]=-1*arr[i];
    }
    int sec=kdane(arr,n);
    int newsum=s+sec;
    
    return max(normal,newsum);
    
    // your code here
}

// { Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	    
	    //calling function
	    cout << circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends
