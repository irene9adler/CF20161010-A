//CF F
#include <stdio.h>
//先求个生成树

#define M 200001

int Tree[M];//树的双亲节点表示法 Tree[x]表示x的双亲

int findRoot(int x)
{
    if(Tree[x] == -1) return x;
    else{
        int tmp = findRoot(Tree[x]);
        Tree[x] = tmp;
        return Tree[x];
    }
}
const int e = (M - 1) * (M - 2)/2;
struct edge
{
    int a;
    int b;
}edge[e + 1];
int main()
{
    int n,m;
    int s,t,ds,dt;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        int i;
        for(i = 0;i < m;i++)
        {
            scanf("%d%d",&edge[i].a,&edge[i].b);
        }
        scanf("%d%d%d%d",&s,&t,&ds,&dt);
        for(i = 0;i < n;i++)
            Tree[i] = -1;
        for(i = 0;i < m;i++)
        {
            int a,b;
            a = findRoot(edge[i].a);
            b = findRoot(edge[i].b);
            if(a != b)
            {
                Tree[a] = b;
            }
        }
    }
    return 0;
}
