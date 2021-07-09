int solve(vector<int>& nums, int target) {
    int n=nums.size();
    int lo=0,hi=n-1;
    int mid;
if(nums[n-1]<=target)
return n;
    while(lo<hi)
    {
        mid=lo+(hi-lo)/2;
        if(nums[mid]<=target)
        lo=mid+1;
        else
        hi=mid;

    }
    if(nums[hi]==target)
    return hi+1;
    else
    return hi;


    
    
}
