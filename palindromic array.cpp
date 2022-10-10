class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	// code here
    	for(int i=0;i<n;i++)
    	{ 
    	    int res =0;
    	    int temp =a[i];
    	    while(temp>0)
    	    {
    	        int rem = temp%10;
    	        
    	        temp/=10;
    	        
    	        res =(res*10)+rem;
    	    }
    	    if(res!=a[i])
    	       return 0;
    	}
    	return 1;
    }
};
