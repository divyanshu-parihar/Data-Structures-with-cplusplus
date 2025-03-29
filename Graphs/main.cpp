/*

Graph :  graph theory is the study of graphs, which are mathematical structures
used to model pairwise relations between objects. A graph in this context is
made up of vertices (also called nodes or points) which are connected by edges
(also called links or lines). Data structure used to represent relations between
node/ elements . It is also known as networks

Types of Graphs:
    -Undirected Graph : An undirected graph is a graph in which edges have no
orientation . The edge (u,v) is identical to the edge(v,u).
    -Directed Graphs : A graph in which edges have orientations. for example he
edge(u,v ) is not same as edge(v,u).


Special Graphs:
    -Trees;
    -Directed Acyclic Graphs(DAGs)
    -Bipartite
    -complete (worst keys possible graphs.)
NOTE : It is usually denoted as an edge of such a graph as a tiplet(u,v ,w) and
specify whether the graph is directed or undirected.



Representing Graphs:
1. Adjacency Matrix form.
    Advantages:
        -space efficient.
        -Edge weight lookup is O(1).
        -simplest graph representation.
    Disadvantages:
        - Requires O(N^2) space.
        - Iterating over all edges takes O(N^2) time.

2.  Adjacency List
    Advantages:
        -Space effienct for representing sparse graphs.
        -Iterating over all edges is efficient.
    Disadvantages:
        -Less space efficient for denser graphs.
        -edge weight lookup is o(N)
        -Slightly more complex graph representation.

3. Edge List:(unordered List of edges with (u,v ,w))
    Advantages:
        -space efficient
        -Iterating over all edges is efficient.
        - very simple structure
    Disadvantages:
        -Less space efficient for denser graphs.
        -Edges weight lookup is O(N);

*/

#include <iostream>
#include <list>
#include<queue>
#include <map>
#include <unordered_map>
using namespace std;
// Adjacency List Method with Bidrectional implementation.
template<typename T>
class Graph {
    int v;
    map<T,list<T>> l;
   public:
    void add(int x, int y) {
        l[x].push_back(y);
        l[y].push_back(x);
    } 
    void printGraph() {
        for (int i = 0; i < v; i++) {
            cout << "vertex " << i << "-->";
            for (auto nbr : l[i]) {
                cout << nbr << ' ';
            }
            cout << endl;
        }
    }
    void bfs(T src){
        map<T,int> visited;
        queue<T> q;
        q.push(src);
        visited[src] = true;

        while(!q.empty()){
            T node = q.front();
            cout << node << endl;
            q.pop();
            for(int nbr : l[node]){
                if(!visited[nbr]){
                    q.push(nbr);
                    visited[nbr] = true;
                }
            }
        }
    }
};

class Graph2 {
    unordered_map<string, list<pair<string, int>>> l;

   public:
    void add(string x, string y, bool bidir, int weight) {
        l[x].push_back(make_pair(y, weight));
        if (bidir) {
            l[y].push_back(make_pair(x, weight));
        }
    }
    void printGraph() {
        // Iterate over all the keys in the map.

        for (auto p : l) {
            string city = p.first;
            list<pair<string, int>> nbrs = p.second;
            cout << city << "-->";
            for (auto el : nbrs) {
                string dest = el.first;
                int dist = el.second;
                cout << '(' << dest << ' ' << dist << ')' << ",";
            }
            cout << endl;
        }
    }
};
int main() {
    Graph<int> g;
    g.add(0,1);
    g.add(1,2);
    g.add(2,3);
    g.add(3,4);
    g.add(4,5);

    // g.printGraph();
    g.bfs(0);
    return 0;
}
