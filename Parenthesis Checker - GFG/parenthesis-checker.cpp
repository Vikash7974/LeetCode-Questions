//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char>s;
        for(int i=0;x[i]!='\0';i++)
        {
            if(s.size()==0)
            s.push(x[i]);
            else if(s.top()=='{'&&x[i]=='}'||s.top()=='('&&x[i]==')'||s.top()=='['&&x[i]==']')
            s.pop();
            else
            s.push(x[i]);
        }
        if(s.size()==0)
        return true;
        else
        return false;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends