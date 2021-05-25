//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function Template for C++


int immediateGreater(int arr[], int n, int x){
    
int temp=0,res=INT_MAX;

for(int i=0;i<n;i++)
{
    if(arr[i]>x)
    {
        temp=arr[i];
        res=min(res,temp);
    }
}
if(temp==0)
return -1;
else
return res;
    
}

// { Driver Code Starts.



int main() {
	int t;
	cin>>t;
	while(t--)
	{
    	int n;
    	cin >> n;
    	
    	int arr[n];
    	
    	for(int i = 0;i<n;i++){
    	    cin >> arr[i];
    	}
    	
    	int x;
    	cin >> x;
    	
    	cout << immediateGreater(arr, n, x) << endl;
	}
	
	return 0;
}  // } Driver Code Ends
