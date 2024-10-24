// Abul is plannig to by a smartphone.He has N smartphones available to buy of different prices.But he wants to buy a smartphone in a range between X and Y.
// He has given you the price list.Can you tell him how many smartphones are available in that price range.
// Input Format
// he first line of input will contain 3 integers N, X, Y, the number of phones and the range.
// he next line will contain N numbers p1, p2, p3, ..., pn, the prices of N phones.
// Constraints 1 <= N <= 10 ^  5 1 <= pi,
// X, Y <= 10 ^ 9 Output Format
// Print an integer, the number of phones available in his prefered range.
// sample Input
// 10 4 8
// 8 7 2 3 1 10 25 8 13 5
// Sample Output 04

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int N, X, Y;
    scanf("%d%d%d", &N, &X, &Y);
    if (Y < X)
    {
        int temp = Y;
        Y = X;
        X = temp;
    }

    int phone[N];
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &phone[i]);
        if (X <= phone[i] && Y >= phone[i])
        {
            count++;
        }
    }
    printf("%d", count);

    return 0;
}
