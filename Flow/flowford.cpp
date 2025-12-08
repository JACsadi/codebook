ll bfs(int n) {
    queue<int> qu; vector<bool> vis(510,0); vis[1] =1; qu.push(1); 
    while(!qu.empty()) { int cur = qu.front();  qu.pop(); f(i,graph[cur].adj.size()) { 
        int nex=graph[cur].adj[i]; if(vis[nex] == 0 && graph[cur].cap[nex] > 0) {  graph[nex].p = cur; vis[nex]= 1; 
        if(nex==n) break; qu.push(nex); }
    }
    }
    if(vis[n] == 0) return 0; ll maxflow = LLONG_MAX; int cur = n; 
    while(cur != 1) {
         maxflow = min(maxflow, graph[graph[cur].p].cap[cur]);
         cur = graph[cur].p;
        //  printf("%d ",cur);
    }
    // printf("max %d\n", maxflow);
    cur = n;
    while(cur != 1) {
         graph[graph[cur].p].cap[cur] -= maxflow;
         graph[cur].cap[graph[cur].p] += maxflow;
         cur = graph[cur].p;
    }
    return maxflow;
}