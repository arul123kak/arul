#include<stdio.h>
int main()
{
    double a1, a2, a3;

    printf("Enter three numbers");
    scanf("%lf %lf %lf", &a1, &a2, &a3);

    if (n1>=n2)
    {
        if(n1>=n3)
            printf("%.2f is the largest number.", a1);
        else
            printf("%.2f is the largest number.", a3);
    }
    else
    {
        if(n2>=n3)
            printf("%.2f is the largest number.", a2);
        else
            printf("%.2f is the largest number.",a3);
    }
    
    return 0;
}
