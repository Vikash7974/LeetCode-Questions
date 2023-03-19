//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{
	    unordered_map<int,int> mp;
	    for(int i=0;i<n;i++)
	    {
	        mp[arr[i]]++;
	    }
	    
	   //sort(arr,arr+n);
	   int cnt=0;
	   //int k=2;
	   for(int i=0;i<n;i++)
	   {
	       //int k=i+2;
	       for(int j=i+1;j<n;j++)
	       {
	           int res=arr[i]+arr[j];
	           
	           if(mp[res]>0)
	           cnt++;
	           
	           //k++;
	           
	           
	       }
	   }
	   return cnt;
	}
};

//{ Driver Code Starts.


int main() 
{
   	
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++)
        	cin >> arr[i];

        Solution ob;
        cout << ob.countTriplet(arr, n) << "\n";

    }

    return 0;
}
// } Driver Code Ends