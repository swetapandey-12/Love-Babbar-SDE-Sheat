class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int ans =-1;
	    int curmax =0;
	    int max1;
	    for(int i=0;i<n;i++)
	    {
	        max1 =0;
	        for(int j=0;j<m;j++)
	        {
	            if(arr[i][j]==1){
	                max1++;
	            }
	        }
	        if(max1>curmax){
	                curmax =max1;
	                ans =i;
	       }
	        
	    }
	    return ans;
	}

};
