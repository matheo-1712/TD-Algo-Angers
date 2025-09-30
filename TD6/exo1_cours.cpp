#include <iostream>

void trier(int T[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (T[j] < T[min])
            {
                min = j;
            }
        }
        int temp = T[i];
        T[i] = T[min];
        T[min] = temp;
    }
}

int exo1_td6()
{
    int T[] = {37, 12, 58, 4, 29, 73, 19, 46, 8, 65};
    int n = std::size(T);
    trier(T, n);
    for (int i = 0; i < n; i++)
    {
        std::cout << T[i] << " ";
    }
    return 0;
}
