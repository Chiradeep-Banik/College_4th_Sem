// Kruskals algorithm

#include <iostream>
using namespace std;

#define V 5
#define MAX 99999

int parent[V];

int find(int i)
{
    while (parent[i] != i)
        i = parent[i];
    return i;
}

void union1(int i, int j)
{
    int a = find(i);
    int b = find(j);
    parent[a] = b;
}

void kruskalMST(int cost[][V])
{
    int mincost = 0;
    for (int i = 0; i < V; i++)
        parent[i] = i;
    int edge_count = 0;
    while (edge_count < V - 1)
    {
        int min = MAX, a = -1, b = -1;
        for (int i = 0; i < V; i++)
        {
            for (int j = 0; j < V; j++)
            {
                if (find(i) != find(j) && cost[i][j] < min)
                {
                    min = cost[i][j];
                    a = i;
                    b = j;
                }
            }
        }

        union1(a, b);
        printf("Edge %d:(%d, %d) cost:%d \n",
               edge_count++, a, b, min);
        mincost += min;
    }
    printf("\nMinimum cost= %d \n", mincost);
}

int main()
{
    int cost[][V] = {
        {MAX, 2, MAX, 6, MAX},
        {2, MAX, 3, 8, 5},
        {MAX, 3, MAX, MAX, 7},
        {6, 8, MAX, MAX, 9},
        {MAX, 5, 7, 9, MAX},
    };
    kruskalMST(cost);

    return 0;
}

/* OUTPUT:
Edge 0:(0, 1) cost:2
Edge 1:(1, 2) cost:3
Edge 2:(1, 4) cost:5
Edge 3:(0, 3) cost:6

Minimum cost= 16
*/