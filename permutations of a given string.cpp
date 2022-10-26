class Solution
{
    private:
        void find(int position, string str, unordered_set<string>& ans)
    {
        //base case of recursion
        if(position == str.size())
        {
            ans.insert(str);
            return;
        }
        
        //try out all numbers from current position till end
        for(int currIndex = position; currIndex<str.size(); currIndex++)
        {
            //swap the ith element
            swap(str[position], str[currIndex]);
            //find all possible permutations
            find(position+1, str, ans);
            //restore the ith element
            swap(str[position], str[currIndex]);
        }
        
    }
	public:
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    unordered_set<string> ans;
        find(0, S, ans);

        vector<string> answer;
        for(auto it:ans)
        {
            answer.push_back(it);
        }

        sort(answer.begin(), answer.end());

        return answer;
    }
	
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends
