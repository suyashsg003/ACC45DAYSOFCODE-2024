#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);  // Reading the number of test cases
    while (T--)
    {
        int N;
        scanf("%d", &N);  // Reading the size of the array
        int Arr[N];
        
        // Reading array elements
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &Arr[i]);
        }
        
        // XOR operation to find the answer
        int ans = 0;
        for (int i = 0; i < N; i++)
        {
            ans ^= Arr[i];
        }
        
        // Output the result
        printf("%d\n", ans);
    }
    return 0;
}
