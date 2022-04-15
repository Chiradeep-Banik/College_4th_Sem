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
        if (ar[i] < m.min && ar[i] != -1)
        {
            m.min = ar[i];
            m.min_index = i;
        }
    }
    return m;
}

bool is_False(bool ar[], int len)
{
    for (int i = 0; i < len; i++)
    {
        if (!ar[i])
        {
            return true;
        }
    }
    return false;
}

int main()
{
    // int G[V][V] = {
    //     /*       0  1  2  3  4 */
    //     /* 0 */ {0, 0, 3, 0, 0},
    //     /* 1 */ {0, 0, 10, 4, 0},
    //     /* 2 */ {3, 10, 0, 2, 6},
    //     /* 3 */ {0, 4, 2, 0, 1},
    //     /* 4 */ {0, 0, 6, 1, 0},
    // };
    int G[V][V] = {
        {0, 2, 0, 6, 0},
        {2, 0, 3, 8, 5},
        {0, 3, 0, 0, 7},
        {6, 8, 0, 0, 9},
        {0, 5, 7, 9, 0}

    };

    bool visited[V];
    for (int i = 0; i < V; i++)
    {
        visited[i] = false;
    }
    struct Data d[V];
    int i = 0;
    while (i < V && is_False(visited, V))
    {
        visited[i] = true;
        int dist[V];
        for (int k = 0; k < V; k++)
        {
            dist[k] = INF;
        }
        dist[i] = -1;
        cout << "Value of i === " << i << "\n";
        for (int j = 0; j < V; j++)
        {
            if (G[i][j] != 0 && G[i][j] < dist[j] && visited[j] == false)
            {
                dist[j] = G[i][j];
            }
        }
        struct minData m = find_min(dist, V);
        if (visited[m.min_index] == false)
        {
            d[i].row = i;
            d[i].column = m.min_index;
            d[i].weight = m.min;

            cout << "Hoped from " << i << " to " << m.min_index << "\n";
            i = m.min_index;
        }
        if (m.min == INF)
        {
            break;
        }
    }
    for (int i = 0; i < V; i++)
    {
        if (visited[i] == false)
        {
            visited[i] = true;
            int dist[V];
            for (int k = 0; k < V; k++)
            {
                dist[k] = INF;
            }
            dist[i] = -1;
            for (int j = 0; j < V; j++)
            {
                if (G[i][j] != 0 && G[i][j] < dist[j])
                {
                    dist[j] = G[i][j];
                }
            }
            struct minData m = find_min(dist, V);
            // if (visited[m.min_index] == false)
            // {
            d[i].row = i;
            d[i].column = m.min_index;
            d[i].weight = m.min;

            cout << "Hoped from " << i << " to " << m.min_index << "\n";
            // }
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
/**
 * Edge   Weight
    0 - 1    2
    1 - 2    3
    0 - 3    6
    1 - 4    5
*/