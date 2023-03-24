//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int N=n;
     int count=(int)log10(n)+1;
     int sum=0;
     for(int i=0;i<=count;i++)
     {
         int lastdigit=n%10;
         sum=sum+pow(lastdigit,count);
         n=n/10;
     }
     if(sum==N)
      return "Yes";
     else
      return "No";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends