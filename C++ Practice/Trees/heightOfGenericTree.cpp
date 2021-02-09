//height of generic tree

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int BFS(vector <int> par)
{
    int root;
    int n = par.size();
    vector <int> graph[n];
    
    for(int i=0;i<n;i++)
    {
        if(par[i] != -1)
        graph[par[i]].push_back(i);    
        
        else
        root = i;
    }
    
    vector <int> distance(n,0);
    
    queue <int> q;

    q.push(root);
    
    while(!q.empty())
    {
        int front = q.front();
        q.pop();
        
        for(auto i : graph[front])
        {
            distance[i] = distance[front] + 1;
            q.push(i);
        }
    }
    
    return *max_element(distance.begin(),distance.end());
}
int main()
{
    vector <int> par = {-1,0,0,1,2,2,4};
    cout<<"Height of the Tree : "<<BFS(par)<<endl;
    return 0;
}