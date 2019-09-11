#include<bits/stdc++.h>
using namespace std;

class graph
{

int v;
list<int>*adj;
void dfs(int v,bool visited[]);
public :
    graph(int v);
    void addedge(int u,int w);
    void components();

};

graph::graph(int v)
{
this->v=v;
adj=new list<int>[v];
}

void graph::addedge(int u,int w)
{
adj[u].push_back(w);
adj[w].push_back(u);
}

 void graph::dfs(int v,bool visited[])
 {
 visited[v]=true;
 cout<<v<<" ";
 list<int>::iterator i;
 for(i=adj[v].begin();i!=adj[v].end();i++)
 {
 if(!visited[*i])
 dfs(*i,visited);
 }
 }


void graph::components()
{
bool* visited=new bool[v];
for(int i=0;i<v;i++)
visited[i]=false;

for(int i=0;i<v;i++)
{
if(visited[i]==false)
{

dfs(i,visited);
cout<<"\n";
}
}
}

int main()
{

graph g(5);
  g.addedge(1, 0);
    g.addedge(2, 3);
    g.addedge(3, 4);

cout<<"connected components";
g.components();
}