bool solve(int n) {
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
    if(lo*lo==n)
    return true;
    else
    return false;
}
