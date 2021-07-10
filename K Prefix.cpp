int solve(vector<int>& nums, int k) {
    
    int n=nums.size();
    if(n==0)
    return -1;
   
    for(int i=1;i<n;i++)
    {
        nums[i]=nums[i-1]+nums[i];
    }
    int i;
for(i=n-1;i>=0;i--)
{
    if(nums[i]<=k)
    return i;
}

    return -1;
}
