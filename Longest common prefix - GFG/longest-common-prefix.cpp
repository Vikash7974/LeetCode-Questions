//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
public:
    vector<int> longestCommonPrefix(string s1, string s2){
        int n=s1.size();
        int p=0;
        for(int i=0;i<n;i++)
        {
            int j=0,k=i;
            while(j<n&&k<n&&s1[j]==s2[k])
            {
                j++;
                k++;
            }
            p=max(p,j);
        }
        if(p==0)
        return {-1,-1};
        else
        return {0,p-1};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        string str1,str2;
        cin >> str1>> str2;
        Solution ob;
        vector<int> p;
        p = ob.longestCommonPrefix(str1,str2);
        if(p[0]==-1)
        cout<<"-1\n";
        
        else
        cout<<p[0]<<" "<<p[1]<<"\n";
    }
    return 0;
}

// } Driver Code Ends