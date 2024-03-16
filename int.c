#include <stdio.h>

int main(void)
{
    int scores[5];
    int i;
    for (i = 0; i < 5; i=i+1)
    {
        printf("Enter number %d:", i+1);
        scanf("%d", &scores[i]);
    }
   


     return 0;
}

void explanation() {
    int scores[5];
    int i;
    // init
    i = 0;

    // condition check
    // if (0 < 5) // true
    printf("Enter number %d", 0+1) // 1
    scanf("%d", scores[0]) // 1st element
    i = i + 1; // i = 1

    if (1 < 5) // true
    printf("Enter number %d", 1+1) // 2
    scanf("%d", scores[1]) // 2nd element
    i = i + 1 // i = 2

    // condition check
    if { 2 < 5} 
    printf("enter number %d", 2+1)
    scanf("%d", scores[2])
    i = 3
    

    if {3 < 5}
    printf(" enter number %d", 3+1)
    scanf("%d", score[3])
    i=4

    if {4 < 5}
    printf(" enter number %d", 4+1)
    scanf("%d", score[4])
    i=5

    if{5 < 5}
}