 vector<int> nextPermutation(vector<int>& nums) {
     int n=nums.size();
        int m=INT_MAX;
        int p,o;
        int flag=0;
       for(int i=n-1;i>=1;i-- )
       {if(nums[i]>nums[i-1])
       {
           for(int j=n-1;j>i-1;j--)
           {if(nums[j]>nums[i-1])
           {flag=1;
            if(m>nums[j])
           {m=nums[j];
            p=j;
           }
           }}
           
          o=i-1;
       break; 
       } 
       }
        
        
        
        
      if(flag==1)
      {swap(nums[o],nums[p]);
      partial_sort(nums.begin()+o+1,nums.begin()+n-1,nums.end());
      return nums;}
        
        
        
        sort(nums.begin(),nums.end());
        return nums;
        
        
        
        
        
        
        
        
        
        
        
        
       return nums; 
    } vector<int> nextPermutation(vector<int>& nums) {
     int n=nums.size();
        int m=INT_MAX;
        int p,o;
        int flag=0;
       for(int i=n-1;i>=1;i-- )
       {if(nums[i]>nums[i-1])
       {
           for(int j=n-1;j>i-1;j--)
           {if(nums[j]>nums[i-1])
           {flag=1;
            if(m>nums[j])
           {m=nums[j];
            p=j;
           }
           }}
           
          o=i-1;
       break; 
       } 
       }
        
        
        
        
      if(flag==1)
      {swap(nums[o],nums[p]);
      partial_sort(nums.begin()+o+1,nums.begin()+n-1,nums.end());
      return nums;}
        
        
        
        sort(nums.begin(),nums.end());
        return nums;
        
        
        
        
        
        
        
        
        
        
        
        
       return nums; 
    }