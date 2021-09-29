#include <stdio.h>
int max(int a, int b) { return (a > b) ? a : b; }

int knapSack(int W, int wt[], int val[], int n)
{
    // Base Case
    if (n == 0 || W == 0)
        return 0;
    if (wt[n - 1] > W)
        return knapSack(W, wt, val, n - 1);

    else
        return max(
            val[n - 1]
                + knapSack(W - wt[n - 1],
                           wt, val, n - 1),
            knapSack(W, wt, val, n - 1));
}

int main()
{
    /*
    int val[] = { 8,4,0,5,3 };
    int wt[] = { 1,2,3,2,2 };
    int W = 4;
    int n = sizeof(val) / sizeof(val[0]);
    */
    int W,n;

    scanf("%d %d",&W,&n);
    int wt[n],val[n];

    for(int i=0;i<n;i++){

        scanf("%d %d",&wt[i],&val[i]);
    }

    printf("%d", knapSack(W, wt, val, n));
    return 0;
}
