#include <iostream>
#include <list>
#include <vector>
using namespace std;

class Color
{
    int V;
    list<int> *adj;

public:
    Color(int V)
    {
        this->V = V;
        adj = new list<int>[V];
    }
    ~Color() { delete[] adj; }

    void addEdge(int v, int w);

    vector<int> greedyColoring();
};

void Color::addEdge(int v, int w)
{
    adj[v].push_back(w);
    adj[w].push_back(v);
}

vector<int> Color::greedyColoring()
{
    vector<int> result(V);

    result[0] = 0;

    for (int u = 1; u < V; u++)
        result[u] = -1;

    vector<bool> available(V);
    for (int cr = 0; cr < V; cr++)
        available[cr] = false;

    for (int u = 1; u < V; u++)
    {
        list<int>::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i)
            if (result[*i] != -1)
                available[result[*i]] = true;

        int cr;
        for (cr = 0; cr < V; cr++)
            if (available[cr] == false)
                break;

        result[u] = cr;

        for (i = adj[u].begin(); i != adj[u].end(); ++i)
            if (result[*i] != -1)
                available[result[*i]] = false;
    }

    for (int u = 0; u < V; u++)
        cout << "Vertex " << u << " --->  Color "
             << result[u] << endl;
    return result;
}