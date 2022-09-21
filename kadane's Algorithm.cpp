long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        int cSum = 0;

        int mSum = arr[0];

        

        if(n == 0) return 0;

        if(n == 1) return arr[0];

        

        for(int i=0; i<n; i++){

            cSum = cSum + arr[i];

            if(cSum > mSum)

                mSum = cSum;

            

            if(cSum < 0)

                cSum = 0;

        }

        return mSum;
        
    }
