//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int minIteration(int N, int M, int x, int y){    
        // code here
        vector<vector<int>> vis(N,vector<int>(M,0));
        vis[x-1][y-1]=1;
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        queue<pair<pair<int,int>,int>> q;
        q.push({{x-1,y-1},0});
        int itr=0;
        while(!q.empty()){
            int row=q.front().first.first;
            int col=q.front().first.second;
            itr=q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int nrow=row+delrow[i];
                int ncol=col+delcol[i];
                if(nrow>=0 && nrow<N && ncol>=0 && ncol<M && vis[nrow][ncol]==0){
                    q.push({{nrow,ncol},itr+1});
                    vis[nrow][ncol]=1;
                }
                }
            }
 
        return itr;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, M, x, y;
        cin >> N >> M;
        cin >> x >> y;
        
        Solution ob;
        cout << ob.minIteration(N, M, x, y) << endl;
    }
    return 0; 
} 
// } Driver Code Ends