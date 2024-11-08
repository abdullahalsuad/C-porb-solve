// Given the multiplication of four numbers and three of those numbers, find the missing number.
// Note: If the missing number could not be found for the given input, print -1. All numbers are non-negative integers.
// Input Format
// The first line will contain T, number of test cases.
// For every test case, the input will contain one integer M (the multiplication of the four numbers), A, B, C (three of those four numbers).
// Constraints
// 1 < T <= 100000
// 0 <= M <= 10^18
// 1 <= A, B, C <= 10^6
// Output Format
// Print the missing number. Don't forget to print a new line after it.
// Sample Input
// 4
// 20 1 2 2
// 10 2 2 1
// 1 1 2 3
// 0 3 10 15
// Sample Output 0
// 5
// -1
// -1
// 0
// Sample Input 1
// 3
// 20 5 1 1
// 18 2 3 3
// 0 10 20
// Sample Output 1
// 4
// 1
// 0

#include <stdio.h>

int main()
{
    int t;
    // printf("type test cases ");
    scanf("%d", &t);
    long long M, A, B, C;
    for (int tc = 0; tc < t; tc++)
    {
        // printf("type number ");
        scanf("%lld %lld %lld %lld", &M, &A, &B, &C);
        // printf("%d %d %d %d", M, A, B, C);
        long long multi = A * B * C;
        if (M % multi == 0)
        {
            long long D = M / multi;
            printf("%lld\n", D);
        }
        else
        {
            printf("-1\n");
        }
    }
}
