class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long a1[], long long a2[], int n, int m) 
        { 
            // code here
            int i =0 , j = 0, k=n-1;
            while(i<=k and j<m){
                if(a1[i]>a2[j]){
                    swap(a1[k], a2[j]);
                    j++;
                    k--;
                }
                else{
                    i++;
                    continue;
                }
            }
            
            sort(a1, a1+n);
            sort(a2, a2+m);
        } 
        
};
