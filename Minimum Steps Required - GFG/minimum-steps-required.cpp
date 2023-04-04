//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

int minSteps(string str) {
      int cnt=0,cnt1=0;
    int n=str.length();
    if(str[0]=='a') 
    cnt+=1;
    else    
    cnt1+=1;
    for(int i=1;i<n;i++){
        if(str[i-1]=='a' && str[i]=='b')    
        cnt1+=1;
        else if(str[i-1]=='b' && str[i]=='a')  
        cnt+=1;
    }
    return min(cnt,cnt1)+1;
}

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        cout << minSteps(str) << endl;
    }
}

// } Driver Code Ends