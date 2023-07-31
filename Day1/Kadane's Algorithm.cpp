int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int m=0;
        int flag=0;
        for(int i=0;i<n;i++)
        {if(nums[i]>=0)
            flag=1;
            sum+=nums[i];
        m=max(m,sum);
        if(sum<0)
         sum=0;}
        
        if(flag==0)
        {sort(nums.begin(),nums.end());
        return nums[n-1];}
        return m;
    }