/***
Given an array arr[] and an integer K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.

Example 1:

Input:
N = 6
arr[] = 7 10 4 3 20 15
K = 3
Output: 7 ***/

 int kthSmallest(int a[], int l, int r, int k) {
        //code here
        priority_queue<int> sw;
        int n =r-l+1;
        
        for(int i=0;i<k;i++)
        {
            sw.push(a[i]);
        }
        
        for(int i=k;i<n;i++)
        {
            if(a[i]<sw.top())
            {
                sw.pop();
                sw.push(a[i]);
            }
        }
        return sw.top();
        
    }
};
