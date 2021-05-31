using namespace std;


 // } Driver Code Ends


class Solution{
    public:
        
    // arr[]: input array
    // n: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int arr[], int n) 
    { 
    vector<int> minn(n,0),maxx(n,0);
    minn[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        minn[i]=min(arr[i],minn[i-1]);
    }
    maxx[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        maxx[i]=max(arr[i],maxx[i+1]);
    }
    int x=0,y=0,res=0;
    while(x<n&&y<n)
    {
        if(maxx[y]>=minn[x])
        {
            res=max(res,y-x);
            y++;
        }
        else
        x++;
    }
    return res;
}};

// { Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
}   // } Driver Code Ends
