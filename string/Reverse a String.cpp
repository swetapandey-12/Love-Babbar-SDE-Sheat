class Solution
{
    public:
    string reverseWord(string str)
    {
        // Your code goes here
        string st;
        for(int i=str.length()-1;i>=0;i--)
        {
            st+=str[i];
        }
        return st;
    }
};
