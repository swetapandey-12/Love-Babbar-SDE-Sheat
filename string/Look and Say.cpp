class Solution
{
  public:
    string lookandsay(int n) {
        // code here
        if(n==1) return "1";
        if(n==11) return "11";
        string s="11";
        for(int i=3;i<=n;i++){
            string t=" ";
            s=s+'&';
            int c=1;
            for(int j=1;j<s.length();j++){
                if(s[j]==s[j-1]){
                    c++;
                }
                else{
                    t=t+to_string(c);
                    t+=s[j-1];
                    c=1;
                }
                s=t;
            }
        }
        return s;
    }   
};
