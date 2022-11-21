#include <stdio.h>

int main()
{

    char *days[8] = {
        "The're no day with that number ! ", "Monday", "Tuesday", "Wednesday", "Thursday ", "Friday", "Saturday", "Sunday"};

    int day;
    printf("Enter the day number ! \n");
    scanf("%d", &day);
    if (day >= 1 && day <= 7)
    {
        printf("%s", days[day]);
    }
    else
    {
        printf("%s", days[0]);
    }

    return 0;
}