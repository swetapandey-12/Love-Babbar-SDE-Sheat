/***You are given a string s. You need to reverse the string.

Example 1:

Input:
s = Geeks
Output: skeeG***/


string reverseWord(string str){
    
  //Your code here
 int  n=str.length();
 int  r =n-1;
 for(int i=r;i>=0;i--)
 {
     cout<<str[i];
 }
}

