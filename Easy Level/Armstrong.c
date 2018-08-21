#include<stdio.h>
int main()
{
int num,tempNum, rem, result = 0;

    printf("Enter Any No: ");
    scanf("%d", &num);

    tempNum = num;

    while (tempNum != 0)
    {
        rem = tempNum%10;
        result += rem*rem*rem;
        tempNum /= 10;
    }

    if(result == num)
        printf("%d is an Armstrong number.",num);
    else
        printf("%d is not an Armstrong number.",num);

}
