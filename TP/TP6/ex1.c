#include <stdio.h>
int main()
{

    char *days[8] =
        {
            "Day Doesn't exist",
            "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    int day;
    printf("Enter Day Number \n");
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