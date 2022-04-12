/* Your code here! */
#include "dsets.h"

void DisjointSets::addelements(int num)
{
    for (int i = 0; i < num; i++)
    {
        table.push_back(-1);
    }
}

int DisjointSets::find(int elem)
{
    if (table[elem] < 0)
    {
        return elem;
    }
    else
    {
        int root = find(table[elem]);
        table[elem] = root;
        return root;
    }
}

void DisjointSets::setunion(int a, int b)
{
    a = find(a);
    b = find(b);
    int new_size = table[a] + table[b];
    if (a == b)
    {
        return;
    }
    if (table[a] <= table[b])
    {
        table[b] = a;
        table[a] = new_size;
    }
    else
    {
        table[a] = b;
        table[b] = new_size;
    }
}
int DisjointSets::size(int elem)
{
    int a = find(elem);
    return table[a] * -1;
}