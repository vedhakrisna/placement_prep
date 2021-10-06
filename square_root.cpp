int square_root(int n){
    int start=1, last=n;
    int ans = -1;
    while(start<=last){
        int mid=(start+last)/2;
        if(mid*mid == n)    return mid;
        else if(mid*mid>n)    last=mid-1;
        else{
            start=mid+1;
            ans=mid;
        }
    }
    return ans;
}
