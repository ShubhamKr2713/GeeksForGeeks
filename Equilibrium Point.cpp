
// Position this line where user code will be pasted.

int equilibriumPoint(long long a[], int n);

int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }

        //calling equilibriumPoint() function
        cout << equilibriumPoint(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends


// Function to find equilibrium point
// a: input array
// n: size of array
int equilibriumPoint(long long a[], int n) {
    long long s=0;
    long long sum=0;
    for(int i=0;i<n;i++)
    sum+=a[i];
    if(n==1)
    return 1;
    else
    for(int i=1;i<n;i++)
    {
        s=s+a[i-1];
        if(s==(sum-s-a[i]))
        return i+1;
        
    }
return -1;
    // Your code here
}
