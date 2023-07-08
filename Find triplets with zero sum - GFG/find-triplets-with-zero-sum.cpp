//{ Driver Code Starts
#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

// } Driver Code Ends
/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        // unordered_map<int,bool>mp;
        // for(int i=0;i<n;i++) 
        //     for(int j=i+1;j<n;j++) 
        //         mp[arr[i]+arr[j]]=true;
        // for(int i=0;i<n;i++) if(mp[(-1*arr[i])]==true) return true;
        // return false;
        // Your code here
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            int j=i+1;
            int k=n-1;
            
            while(j<k)
            {
                int sum = arr[i]+arr[j]+arr[k];
                if(sum==0)
                return true;
                if(sum<0)
                    j++;
                else 
                    k--;
            }
            
        }
        return false;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;
    	int arr[n]={0};
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	Solution obj;
        if(obj.findTriplets(arr, n))
            cout<<"1"<<endl;
        else 
            cout<<"0"<<endl;
	}
    return 0;
}
// } Driver Code Ends