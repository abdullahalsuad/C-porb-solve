#include <stdio.h>
int main()
{

    int pass = 1999, count = 1, input;

    for (int i = 0; i < count; i++)
    {
        scanf("%d", &input);

        if (pass == input)
        {
            printf("Correct");
            break;
        }
        else
        {
            printf("Wrong \n");
            count++;
        }
    }
}