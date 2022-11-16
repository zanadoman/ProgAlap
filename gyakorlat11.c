#include <stdio.h>
#define arrayLength 3
#define permutationsLength 18

int input(int *x);
int permutation(char *permutations, int *array);

int main()
{
    int array[arrayLength];
    char permutations[18];

    for (int i = 0; i < arrayLength; i++)
    {
        input(&array[i]);
    }

    permutation(permutations, array);

    for (int i = 0; i < 6; i++)
    {
        printf("%c%c%c\n", permutations[3 * i], permutations[3 * i + 1], permutations[3 * i + 2]);
    }

    return 0;
}

int input(int *x)
{
    int ok = 0;
    char c;

    do
    {
        ok = 0;
        if (scanf("%d", x) != 1 || *x < 1 || 9 < *x)
        {
            ok = 1;
            printf("Invalid input!\n");
            while ((c = getchar()) != '\n');
        }
    } while (ok);

    return 0;
}

int permutation(char *permutations, int *array)
{
    int count = 0;

    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            if (y == x)
            {
                continue;
            }
            for (int z = 0; z < 3; z++)
            {
                if (z == x || z == y)
                {
                    continue;
                }
                permutations[3 * count] = array[x] + 48;
                permutations[3 * count + 1] = array[y] + 48;
                permutations[3 * count + 2] = array[z] + 48;
                count++;
            }
        }
    }

    return 0;
}