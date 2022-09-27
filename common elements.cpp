class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here
            set<int>s1;
            set<int>s2;
            vector<int>v;
            for(int i=0;i<n1;i++)
            {
                s1.insert(A[i]);
            }
            for(int i=0;i<n2;i++)
            {
                s2.insert(B[i]);
            }
            for(int i=0;i<n3;i++)
            {
                if(s1.find(C[i])!=s1.end() and s2.find(C[i])!=s2.end())
                {
                    v.push_back(C[i]);
                }
            }
            vector<int>res;
            for(int i=0;i<v.size();i++)
            {
                while(v[i]==v[i+1])
                {
                    i++;
                }
                res.push_back(v[i]);
            }
            return res;
        }

};
