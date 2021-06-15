int solve(vector<int>& arr) {
    int n=arr.size();
    int lo=0,hi=n-1;
    int mid;
    if(n==0)
    return -1;

    while(lo<hi)
    {
        mid=lo+(hi-lo)/2;
        if(arr[mid]>=mid)
        hi=mid;
        else
        lo=mid+1;
    }
    if(arr[lo]==lo)
    return lo;
    else
    return -1;
}
