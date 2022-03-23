#include <stdio.h>
int main()
{
    char firstname[10];
    char lastname[10];
    int yearofbirth;

    printf("Enter the first name :");
    scanf("%s",&firstname);
    printf("Enter the last name :");
    scanf("%s",&lastname);
    printf("Enter the year of birth :");
    scanf("%d",&yearofbirth);

    printf("%s %s %d",firstname,lastname,yearofbirth);


    return 0; 
}