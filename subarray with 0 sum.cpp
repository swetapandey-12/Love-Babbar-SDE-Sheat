class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
         unordered_map <int,int> mp;

        int sum = 0;
        for (int i=0; i<n; i++)

        {

            sum = sum + arr[i];

            
            if (sum == 0 || mp.find(sum) != mp.end())

            //If the element is  found in that case

            {

                return true;

            }
            mp[sum]++;
        }
        return false;
    }
};
