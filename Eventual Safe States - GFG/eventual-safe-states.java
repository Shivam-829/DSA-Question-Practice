//{ Driver Code Starts
// Initial Template for Java

import java.util.*;
import java.lang.*;
import java.io.*;

// Position this line where user code will be pasted.

class GFG {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while (T-- > 0) {
            int V = sc.nextInt();
            int E = sc.nextInt();

            List<List<Integer>> adj = new ArrayList<>();

            for (int i = 0; i < V; i++) {
                adj.add(new ArrayList<>());
            }
            for (int i = 0; i < E; i++) {
                int u = sc.nextInt();
                int v = sc.nextInt();

                adj.get(u).add(v);
            }

            Solution obj = new Solution();
            List<Integer> safeNodes = obj.eventualSafeNodes(V, adj);
            for (int i : safeNodes) {
                System.out.print(i + " ");
            }
            System.out.println();
        }
    }
}
// } Driver Code Ends


// User function Template for Java

class Solution {
    boolean dfscheck(int s,List<List<Integer>> adj,int vis[],int path_vis[],int check[])
    {
        vis[s]=1;
        path_vis[s]=1;
        check[s]=0;
        for(int x : adj.get(s))
        {
            if(vis[x]==0)
            {
                if(dfscheck(x,adj,vis,path_vis,check)==true)
                 return true;
            }
            else if(path_vis[x]==1)
             return true;
        }
        
        
        path_vis[s]=0;
        check[s]=1;
        return false;
    }

    List<Integer> eventualSafeNodes(int V, List<List<Integer>> adj) {

        // Your code here
        int vis[]= new int[V];
        int path_vis[]= new int[V];
        int check[]= new int[V];
        
        for(int i=0;i<V;i++)
        {
            if(vis[i]==0)
            {
                dfscheck(i,adj,vis,path_vis,check);
            }
        }
        List<Integer> ans=new ArrayList<>();
        for(int i=0;i<V;i++)
        {
            if(check[i]==1)
             ans.add(i);
        }
        return ans;
    }
}
