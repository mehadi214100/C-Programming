// code by mehadi
#include<stdio.h>

int main()
{
    int number;
    printf("Enter Your Number:");
    scanf("%d",&number);
    int max = 0;
    while (number>0)
    {
        int lastdigit = number%10;
        if (lastdigit>=max)
        {
            max = lastdigit;
        }
        number/=10;

    }
    switch (max)
    {
    case 0:
        printf("Zero is the largest digit");
        break;
    case 1:
        printf("One is the largest digit");
        break;
    case 2:
        printf("Two is the largest digit");
        break;
    case 3:
        printf("Three is the largest digit");
        break;
    case 4:
        printf("Four is the largest digit");
        break;
    case 5:
        printf("Five is the largest digit");
        break;
    case 6:
        printf("Six is the largest digit");
        break;
    case 7:
        printf("Seven is the largest digit");
        break;
    case 8:
        printf("Eight is the largest digit");
        break;
    case 9:
        printf("Nine is the largest digit");
        break;
    default:
        break;
    }

    return 0;
}
