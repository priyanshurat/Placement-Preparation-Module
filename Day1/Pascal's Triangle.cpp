vector<vector<int>> generate(int numRows) {
        int n=numRows;
        vector<vector<int>>ans;
       
        for(int i=0;i<n;i++)
        { vector<int>v;
         for(int j=0;j<i+1;j++)
        {if(j==0 || j==i)
         v.push_back(1);
         else {
             v.push_back(ans[i-1][j-1]+ans[i-1][j]);
         }
        if(j==i)
         ans.push_back(v);}
        
        }
        return ans;
        
    }