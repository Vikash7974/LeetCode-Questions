//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    int fingerCount(int N)
    {
        if(N%8==0) return 2;
        if(N%8<6) return N%8;
        else return 10-(N%8);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
      
        Solution ob;
        int ans  = ob.fingerCount(N);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends