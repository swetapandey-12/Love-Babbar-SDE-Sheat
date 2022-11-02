class Solution {
public:
int solve(string& a,string& b, int i ,int j, vector<vector<int>>&dp)
{
    if(i ==a.length())
      return b.length()-j;
    if(j==b.length())
       return a.length()-i;
    if(dp[i][j]!=-1)
      return dp[i][j];

    int ans=0;
    if(a[i]==b[j]){
        return solve(a, b, i+1,j+1,dp);
    }
    else{
        // insert
        int insertAns= 1+solve(a,b,i,j+1,dp);
        // delete
         int deleteAns= 1+solve(a,b,i+1,j,dp);
        // replace
         int replaceAns= 1+solve(a,b,i+1,j+1,dp);

         ans=min(insertAns,min(deleteAns,replaceAns));
    }       
    return dp[i][j]=ans;
}
    int editDistance(string s, string t) {
        vector<vector<int>>dp(s.length(),vector<int>(t.length(),-1));
        return solve(s,t,0,0,dp);
        
    }
};
