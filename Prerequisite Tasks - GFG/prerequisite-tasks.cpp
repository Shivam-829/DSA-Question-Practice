//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	bool isPossible(int V, vector<pair<int, int> >& prerequisites) {
	    // Code here
	     vector<int> adj[V];
        for(auto x:prerequisites)
        {
            adj[x.first].push_back(x.second);
        }
         vector<int> indegree(V,0);
	    for(int i=0;i<V;i++)
	    {
	        vector<int> data=adj[i];
	        for(auto x:data)
	          indegree[x]++;
	    }
	    queue<int> q;
	    vector<int> ans;
	    for(int i=0;i<V;i++)
	    {
	        if(indegree[i]==0)
	         q.push(i);
	    }
	    while(!q.empty())
	    {
	    int u=q.front();
	    ans.push_back(u);
	    q.pop();
	    for(auto v:adj[u])
	    {
	        indegree[v]--;
	        if(indegree[v]==0)
	         q.push(v);
	    }
	    }
	    if(ans.size()==V) return true;
	    return false;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
    	int N, P;
        vector<pair<int, int> > prerequisites;
        cin >> N;
        cin >> P;
        for (int i = 0; i < P; ++i) {
            int x, y;
            cin >> x >> y;
            prerequisites.push_back(make_pair(x, y));
        }
        // string s;
        // cin>>s;
        Solution ob;
        if (ob.isPossible(N, prerequisites))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
	}
	return 0;
}
// } Driver Code Ends