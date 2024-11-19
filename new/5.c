// You are given a n×m grid where each cell contains an integer representing the elevation at that point. A cell in this grid is considered a mountain peak if its elevation is strictly greater than the elevations of all its orthogonal neighbors (top, bottom, left, right).
// Your task is to identify all mountain peaks in the grid and print their positions.
// Input Format
// The first line contains two integers (1≤n,m≤1000) — the dimensions of the grid.
// The next n lines contain m integers each, representing the grid. Each integer a[i][j] where (1 <= a[i][j] <= 10^6) represents the elevation at cell (i,j).
// Constraints
// 1 ≤ n,m ≤ 1000
// 1 <= a[i][j] <= 10^6
// Output Format
// On the first line, output the number of mountain peaks found in the grid.
// For each mountain peak, output a line with two integers representing its 1-based position (i,j).
// If no mountain peaks are found, output 0 on the first line.
// Sample Input 0
// 3 3
// 1 2 3
// 4 5 6
// 7 8 9
// Sample Output 0
// 3 3
// 1
// Explanation 0
// In the this example, only the cell at position (3,3) is a mountain peak because it has the highest value among its orthogonal neighbors.
// Sample Input 1
// 4 4
// 10 8 10 8
// 6 7 8 9
// 5 6 7 8
// 4 3 2 1
// Sample Output 1
// 1 1
// 1 3
// 2 4
// 3
// Explanation 1
// In this example, there are three mountain peaks at positions (1,1),(1,3) and (4,4)
// Sample Input 2
// 5 5
// 5 5 5 5 5
// 5 9 9 9 5
// 5 9 1 9 5
// 5 9 9 9 5
// 5 5 5 5 5
// Sample Output 2
// 0
// Explanation 2
// No mountain peaks are found.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
