#include <stdio.h>

int main()
{

    unsigned int x, y, z;
    char answer;
    printf("Enter x,y and z \n");
    scanf("%d %d %d", &x, &y, &z);
    printf("The menu : \n a-odd or even number \n b-parity of two numbers \n c-one of the three variables is even\n other-two of the three variables have the same parity \n");
    scanf("%s", &answer);
    switch (answer)
    {
    case 'a':
        // odd or even number (x)
        if (x % 2 == 0)
        {
            printf("x is even \n");
        }
        else
        {
            printf("x is odd \n");
        }
        break;
    case 'b':

        // parity of two numbers
        if ((x % 2 == 0 && y % 2 == 0) || (x % 2 != 0 && y % 2 != 0))
        {
            printf("x and y have the same parity \n");
        }
        else
        {
            printf("x and y don't have the same parity \n");
        }
        break;
    case 'c':
        // one of the three variavbles is even
        if ((x % 2 == 0) || (y % 2 == 0) || (z % 2 == 0))
        {
            printf("One of the three variables is even ! \n");
        }
        else
        {
            printf("The three variables are odd ! \n");
        }
        break;
    default:
        // two of the three variables have the same parity

        if (x % 2 == y % 2 || x % 2 == z % 2 || y % 2 == z % 2)
        {
            printf("Two of the three variables have the same parity \n");
        }
        else
        {
            printf("Three variables don't have the same parity , which is impossible ! ? \n");
        }
    }
    return 0;
}