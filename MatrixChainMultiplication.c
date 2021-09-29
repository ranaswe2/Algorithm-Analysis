#include<stdlib.h>


    // Matrix Ai has dimension p[i-1] x p[i] for i = 1..n
     int MatrixChainOrder(int p[], int i, int j)
    {
        if (i == j)
            return 0;

        int min = 999999;    //Inf

        for (int k = i; k < j; k++)
        {
            int count = MatrixChainOrder(p, i, k)
                        + MatrixChainOrder(p, k + 1, j)
                        + p[i - 1] * p[k] * p[j];

            if (count < min)
                min = count;
        }

        return min;
    }

     main()
    {
        int arr[] ={ 1, 2, 3, 4 };
        int n = (int)sizeof(arr)/sizeof(arr[0]);
        printf("Minimum number of multiplications is %d",MatrixChainOrder(arr, 1, n - 1));
    }

