// VALUE THE SACRIFICES..
//  ~ _Aomine_   -> 17/04/20

/**
A standard BFS implementation puts each vertex of the graph into one of two categories:

Visited
Not Visited
The purpose of the algorithm is to mark each vertex as visited while avoiding cycles.

The algorithm works as follows:

Start by putting any one of the graph's vertices at the back of a queue.
Take the front item of the queue and add it to the visited list.
Create a list of that vertex's adjacent nodes. Add the ones which aren't in the visited list to the back of the queue.
Keep repeating steps 2 and 3 until the queue is empty.
The graph might have two different disconnected parts so to make sure that we cover every vertex, we can also run the BFS algorithm on every node
**/

#include<bits/stdc++.h>
using namespace std;
typedef long double ld;
#define int long long
#define RAGE ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i,n) for(i=0; i < n; i++)
#define repv(i,k,n) for(i=k; i<n; i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(v) v.begin(),v.end()
int mod = 1e9+7;
//  ---------------------------------------------------------------
const int MAXN = 100005;
vector<int> adj[MAXN];
vector<int> visited(MAXN);
vector<int> level(MAXN);

void bfs(int n)
{
    queue<int> q;
    q.push(n);
    level[n] = 0;
    visited[n] = true;
    while(!q.empty())
    {
        int v = q.front;
        q.pop();
        for(int u:adj[v])
        {
            if(!visited[x])
            {
                visited[x] = 1;
                level[x] = level[v] + 1;
                q.push(x);
            }
        }
    }
}
signed main()
{
    int nodes , edges,i,j,k,m;
    cin>>nodes>>edges;
    
    for(i=1; i<=n; i++)
    {   level[i] = 0;
        visited[i] = 0;
    }
    while(edges--)
    {
        cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    bfs(1);
    return 0;
}
