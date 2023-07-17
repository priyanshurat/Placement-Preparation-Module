void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int arr[m];
        for(int i=0;i<m;i++)
            arr[i]=0;
        int crr[n];
        for(int i=0;i<n;i++)
            crr[i]=0;
        for(int i=0;i<m;i++)
        {for(int j=0;j<n;j++)
        {if(matrix[i][j]==0)
        {arr[i]=1;
        crr[j]=1;}}}
        
         for(int i=0;i<m;i++)
        {for(int j=0;j<n;j++)
        {if(arr[i]==1||crr[j]==1)
         matrix[i][j]=0;
       
        
        }
        
        
        
        }
        
        
    }