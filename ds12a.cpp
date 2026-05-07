#include<iostream>
#include<queue>
using namespace std;

class Graph{
int adj[10][10],v;

public:

Graph(int vertices){
v=vertices;

for(int i=0;i<v;i++){
for(int j=0;j<v;j++){
adj[i][j]=0;
}
}
}

void addEdge(int u,int w){
adj[u][w]=1;
adj[w][u]=1;
}

void BFS(int start){
bool visited[10]={0};

queue<int>q;

visited[start]=1;
q.push(start);

while(!q.empty()){
int node=q.front();
q.pop();

cout<<node<<" ";

for(int i=0;i<v;i++){
if(adj[node][i]==1&&visited[i]==0){
visited[i]=1;
q.push(i);
}
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

cout<<"BFS Traversal: ";
g.BFS(0);

return 0;
}
