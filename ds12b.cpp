#include<iostream>
using namespace std;

class Graph{
int adj[10][10],v;
bool visited[10];

public:

Graph(int vertices){
v=vertices;

for(int i=0;i<v;i++){
visited[i]=0;

for(int j=0;j<v;j++){
adj[i][j]=0;
}
}
}

void addEdge(int u,int w){
adj[u][w]=1;
adj[w][u]=1;
}

void DFS(int node){
visited[node]=1;

cout<<node<<" ";

for(int i=0;i<v;i++){
if(adj[node][i]==1&&visited[i]==0){
DFS(i);
}
}
}
};

int main(){
Graph g(5);

g.addEdge(0,1);
g.addEdge(0,2);
g.addEdge(1,3);
g.addEdge(1,4);

cout<<"DFS Traversal: ";
g.DFS(0);

return 0;
}
