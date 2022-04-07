#include <iostream>

using namespace std;

#define V 5
#define INF 99999

struct Data
{
    int row;
    int column;
    int weight;
};

struct minData
{
    int min;
    int min_index;
};

struct minData find_min(int ar[], int len)
{
    struct minData m;
    m.min = INF;
    m.min_index = 0;
    for (int i = 0; i < len; i++)
    {
        if (ar[i] < m.min)
        {
            m.min = ar[i];
            m.min_index = i;
        }
    }
    return m;
}

int main()
{
    int G[V][V] = {
        /*  0  1  2  3  4 */
        /* 0 */ {0, 0, 3, 0, 0},
        /* 1 */ {0, 0, 10, 4, 0},
        /* 2 */ {3, 10, 0, 2, 6},
        /* 3 */ {0, 4, 2, 0, 1},
        /* 4 */ {0, 0, 6, 1, 0},
    };

    int dist[V];
    bool visited[V];
    struct Data d[V];

    dist[0] = -1;
    for (int i = 0; i < V; i++)
    {
        dist[i] = INF;
        visited[i] = false;
    }
    for (int i = 0; i < V; i++)
    {
        visited[i] = true;
        for (int j = 0; j < V; j++)
        {
            if (G[i][j] != 0 && G[i][j] < dist[j] && visited[j] == false)
            {
                d[j].row = i;
                d[j].column = j;
                d[j].weight = G[i][j];
                dist[j] = G[i][j];
            }
        }
        struct minData m = find_min(dist, V);
        if (!visited[m.min_index])
        {
            d[i].row = i;
            d[i].column = m.min_index;
            d[i].weight = m.min;

            i = m.min_index;
        }
    }
    cout << "\tEdges\tWeights\n";
    for (int i = 0; i < V; i++)
    {
        cout << "\t" << d[i].row << "---" << d[i].column << "\t  " << d[i].weight << "\n";
    }
}
/**
 * Edge      Weights
 * 3 <-> 1  --- 4
 * 0 <-> 2  --- 3
 * 2 <-> 3  --- 2
 * 3 <-> 4  --- 1
 */