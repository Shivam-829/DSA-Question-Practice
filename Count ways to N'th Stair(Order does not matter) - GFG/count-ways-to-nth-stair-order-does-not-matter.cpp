//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		int nthStair(int n){
		    //  Code here
		   int temp = n;
		   int count = 0;
		   while(n>=0){
		       if(n-2 >= 0){
		           n = n-2;
		           count++;
		       }
		       else break;
		   }
		   
		   if(n == 0) return (temp-count)+1;
		   return temp-count;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthStair(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends