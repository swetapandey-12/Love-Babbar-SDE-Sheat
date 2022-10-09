class Solution
{
public:
    int minSwap(int arr[], int n, int k) {
        // Complet the function
         int count=0;

        for(int i=0;i<n;i++)

        {

            if(arr[i] <= k){

                count++;

            }

        }

        //count greater ele in window of count

        int greater=0;

        for(int i=0;i<count;i++)

        {

            if(arr[i] > k)

            {

                greater++;

            }

        }

        //lets counting min swap

        int ans=greater;

        for(int i=0,j=count;j<n;i++,j++)

        {

            if(arr[i] > k)

            {

                greater--;

            }

            if(arr[j] > k)

            {

                greater++;

            }

            ans=min(ans,greater);

        }

        return ans;
    }
};
