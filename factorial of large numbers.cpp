class Solution {
public:
    vector<int> factorial(int n){
        // code here
        vector<int> ans;
        ans.push_back(n);
        for(int i=n-1;i>=2;i--)
        {
            int carry =0;
            for(int j =ans.size()-1;j>=0;j--)
            {
                ans[j]= ans[j]*i+carry;
                carry =ans[j]/10;
                ans[j]=ans[j]%10;
            }
            while(carry>0)
            {
                ans.insert(ans.begin(),carry%10);
                carry/=10;
            }
            
        }
        return ans;
    }
};
