#include <stdio.h>

int main(void)
{
    int scores[5];
    int i;
    for (i = 1; i <= 5; i=i+1)
    {
        printf("Enter number %d:", i);
        scanf("%d", &scores[i-1]);
    }
   


     return 0;
}

void explanation() {
    int scores[5];
    int i;
    // init
    i = 1;

    // condition check
    if (1 <= 5) // true
    printf("Enter number %d", 1) // 1
    scanf("%d", scores[0]) // 1st element
    i = i + 1 // i = 2

    // condition check
    if { 2 <= 5} 
    printf("enter number %d", 2+1)
    scanf("%d", scores[1])
    i = 3
    

    if {3 <= 5}
    printf(" enter number %d", 3+1)
    scanf("%d", score[2])
    i=4

    if {4 <= 5}
    printf(" enter number %d", 4+1)
    scanf("%d", score[3])
    i=5

    if{5 <= 5}
    printf(" enter number %d", 5+1) // 6
    scanf("%d", score[4]) // 5th element
    i=6

    if (6 <= 5) // false
}