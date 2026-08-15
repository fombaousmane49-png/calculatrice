#include<stdio.h>
float addition(float num1,float num2)
{
    return printf("%.2f + %.2f = %.2f",num1,num2,num1+num2);
}
float soustraction(float num1,float num2)
{
    return printf("%.2f - %.2f =%.2f ",num1,num2,num1-num2);
}
float multiplication(float num1,float num2)
{
    return printf("%.2f x %.2f = %.2f",num1,num2,num1*num2);
}
float division(float num1,float num2)
{
    return printf("%.2f : %.2f = %.2f",num1,num2,num1/num2);
}
int main()
{
    float num1,num2;
    int choix,fin;
    do
    {
    printf("Choisissez l'opération a effectuer\n");
    printf("1-Addition\n");
    printf("2-Soustraction\n");
    printf("3-Multiplication\n");
    printf("4-Division\n");
    printf("Faites le choix: ");
    scanf("%d",&choix);
    switch(choix)
    {
        case 1:
            printf("Donnez la valeur de num1:");
            scanf("\n%f",&num1);
            printf("Donnez la valeur de num2:");
            scanf("\n%f",&num2);
            addition(num1,num2);
        break;
        case 2:
            printf("Donnez la valeur de num1:");
            scanf("\n%f",&num1);
            printf("Donnez la valeur de num2:");
            scanf("\n%f",&num2);
            soustraction(num1,num2);
        break;
        case 3:
            printf("Donnez la valeur de num1:");
            scanf("\n%f",&num1);
            printf("Donnez la valeur de num2:");
            scanf("\n%f",&num2);
            multiplication(num1,num2);
        break;
        case 4:
            printf("Donnez la valeur de num1:");
            scanf("\n%f",&num1);
            printf("Donnez la valeur de num2:");
            scanf("\n%f",&num2);
            division(num1,num2);
        break;
        default: printf("Soyez serieux s'il vous plait\n");
    }
    printf("\nVoulez vous faire une autre operation ?\n");
    printf("1-OUI\n2-NON\n");
    scanf("\n%d",&fin);
    }while(fin!=2);
    return 0;
}
