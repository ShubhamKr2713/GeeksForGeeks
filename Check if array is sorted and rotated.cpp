#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
    public:
    
    bool inc(int arr[],int n)
    {
        int i=0;
        while(i<n-1&&arr[i]<=arr[i+1]) i++;
        if(i==n-1)
        return 0;
        i++;
        while(i<n-1&&arr[i]<=arr[i+1]) i++;
        if(i==n-1&&arr[n-1]<=arr[0])
        return 1;
        else
        return 0;
    }
    bool dec(int arr[],int n)
    {
        int i=0;
        while(i<n-1&&arr[i]>=arr[i+1]) i++;
        if(i==n-1)
        return 0;
        i++;
        while(i<n-1&&arr[i]>=arr[i+1]) i++;
        if(i==n-1&&arr[0]<=arr[n-1])
        return 1;
        else
        return 0;
    }
    
    // arr: input array
    // num: length of array
    // This function returns true or false
    //Function to check if array is sorted and rotated.
    bool checkRotatedAndSorted(int arr[], int num){
        
        // Your code here
        return inc(arr,num)||dec(arr,num);
    }
};

// { Driver Code Starts.

int main()
 {
	int T;
	//testcases
	cin>> T;
	
	while (T--){
	    int num;
	    //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for(int i = 0; i<num; ++i)
            cin>>arr[i];
        
        bool flag = false;
        Solution ob;
        
        //function call
        flag = ob.checkRotatedAndSorted(arr, num);
        
        //printing "No" if not sorted and
        //rotated else "Yes"
        if(!flag){
            cout << "No"<<endl;
        }
        else
        cout << "Yes"<<endl;
    
	}
	
	return 0;
}  // } Driver Code Ends
