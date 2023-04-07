//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    vector<string> possibleWords(int a[], int N)
    {
        //Your code here
        vector<string> ans;
        if(N==0)
         return ans;
        string output="";
        int index=0;
        string mapping[10]={" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(a,output,index,ans,mapping,N);
        return ans;
        
    }
    void solve(int a[],string output,int index,vector<string> &ans,string mapping[],int N)
    {
        if(index>=N)
        {
            ans.push_back(output);
            return;
            
        }
        string value=mapping[a[index]];
        for(int j=0;j<value.length();j++)
        {
            output.push_back(value[j]);
            solve(a,output,index+1,ans,mapping,N);
            output.pop_back();
        }
    }

};


//{ Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}
// } Driver Code Ends