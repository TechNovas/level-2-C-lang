// #include <stdio.h>

// const int N = 3;

// float average(int length, int array[]);

// int main(void)
// {
//     int scores[N];
//     for (int i = 0; i < N; i++)
//     {
//         printf("Enter score %d: ", i+1);
//         scanf("%d", &scores[i]);
//     }

//     printf("Average: %f\n", average(N, scores));

//     return 0;
// }

// float average(int length, int array[])
// {
//     int sum = 0;
//     for (int i = 0; i < length; i++)
//     {
//         sum = sum + array[i];
//     }

//     return sum / (float) length;
// }
//  // int scores[3];

    // scores[0] = printf("scores: ");
    // scores[1] = printf("scores: ");
    // scores[2] = printf("scores: ");


     // {
    //     return(array[0] + array[1] + array[2]) / 3.0;
    // }
#include <stdio.h>
#include <string.h>
// #include "./libcs50/src/cs50.h"



int main(void)
{
    char s[20];
    printf("Before: ");
    scanf("%s", s);
    printf("After: ");
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i]  >= 'a' && s[i] <= 'z')
        {
            printf("%c", s[i] - 32);
        }
        else 
        {
            printf("%c", s[i]);
        }
    }
     printf("\n");
}