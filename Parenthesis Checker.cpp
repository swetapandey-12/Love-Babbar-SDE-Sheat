bool ispar(string s)
    {
        // Your code here
        stack<int> st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i] == '[' || s[i] == '{'){
                st.push(s[i]);
            } else{
                if(st.empty()){
                    return false;
                }
                else if(s[i]==')' and st.top()=='('){
                    st.pop();
                }
                else if(s[i]==']' and st.top()=='['){
                    st.pop();
                }
                else if(s[i]=='}' and st.top()=='{'){
                    st.pop();
                } else{
                    return false;
                }
            }
        }
        if(!st.empty())
            return false;
        return true;
    }
