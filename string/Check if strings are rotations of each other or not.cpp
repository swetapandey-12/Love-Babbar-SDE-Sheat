class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        // Your code here
         if(s1.length()!=s2.length()) return 0;
        string s3=s1+s1;
        for(int i=0;i<s1.length();i++){
            if(s3.substr(i,s2.length())==s2) return 1;
        }
        return 0;
    }
    
};
