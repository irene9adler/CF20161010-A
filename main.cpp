//CF20161010 A
#include <stdio.h>
int abs_(int x)
{
    if(x < 0) return -x;
    else return x;
}

int main()
{
    int x1,x2,x3;
    while(scanf("%d%d%d",&x1,&x2,&x3)!=EOF)
    {
        int ans = 555555;
        int res[3];
        int i;
        res[0] = abs_(x2 - x1) + abs_(x3 - x1);
        res[1] = abs_(x1 - x2) + abs_(x3 - x2);
        res[2] = abs_(x1 - x3) + abs_(x2 - x3);
        for(i =0;i < 3;i++)
        {
            if(res[i] < ans) ans = res[i];
        }
        printf("%d\n",ans);

    }
    return 0;
}
