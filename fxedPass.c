#include <stdio.h>
int main()
{

    int pass = 1999, count = 1, input;

    for (int i = 0; i < count; i++) // we can use for(;;) for infinite loop
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