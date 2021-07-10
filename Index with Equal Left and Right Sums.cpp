int solve(vector<int>& nums) {
    int sum=0;
    int n=nums.size();
    for(int i=0;i<n;i++)
    {
        sum+=nums[i];

    }
int x=0;
for(int i=0;i<n;i++)
{
    if(sum-x-nums[i]==x)
    return i;
    x+=nums[i];
    
}

    return -1;    
}
