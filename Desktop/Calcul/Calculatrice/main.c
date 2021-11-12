#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int Choice;
    float Result;
    float Number1,Number2,Bolly;
    char Oper;
    printf("\t\tCalculatrice ! \n");
    printf("--------------------------------------------------------------------------------------------------- \n");
    printf("\t\t------------------Welcome------------------ \n ");
    printf("Choose What Do you want to Calculate \n\n");
    printf("--------------------------------------------------------------------------------------------------- \n");
    printf(" 1- Arithmetique Operator\t 2- Logic operators \n");
    scanf("%d",&Choice);
    printf("--------------------------------------------------------------------------------------------------- \n");
    switch(Choice){
    case 1 :
            system("cls");
            printf("We Have Only Just 5 Operators : +  -  x   /  Power   \n");
            printf("Please Enter The First Number : ");
            scanf("%f",&Number1);
            printf("Please Enter The Secound Number :");
            scanf("%f",&Number2);
            printf("Enter The Operator Sign :");
            scanf("%s",&Oper);
        switch(Oper){
            system("cls");

                case '+' : Result =Number1+Number2;
                    printf("\t %.2f + %.2f= %.2f \n",Number1,Number2,Result);
                  break;
                case '-' : Result = Number1-Number2;
                     printf("\t %.2f - %.2f= %.2f \n",Number1,Number2,Result);
                  break;
                case '*' : Result = Number1*Number2;
                     printf("\t %.2f x %.2f= %.2f \n",Number1,Number2,Result);
                  break;
                case '/' : Result =Number1/Number2;
                    if (Number2 !=0)
                        printf("\t %.2f / %.2f= %.2f \n",Number1,Number2,Result);
                    else
                    printf(" Math Error : We Can't Devide Number /  0 !!!");
                  break;
                case '^' : Result = pow(Number1,Number2);
                 printf("\t %.2f to the power of %.2f est %.2f",Number1,Number2,Result);
                    break;
                case '%' : Result = pow(Number1,Number2);
                 printf("\t %.2f to the power of %.2f est %.2f",Number1,Number2,Result);
                break;

            default : printf("Invalide !");
        }


    case 2: // we're Verifiying if the condition are true or false in a different cases!
        system("cls");
            printf("her we're Verifying if the condition is true or false\n");
            printf("Please Enter The First Number : ");
            scanf("%f",&Number1);
            printf("Please Enter The Secound Number :");
            scanf("%f",&Number2);

        // now we're Going To use Bolly variable for verifying
            Bolly=(Number1>Number2)? 1 :0;
            scanf("%d",&Bolly);
            printf("on system binrary the condition result is : %d",Bolly);








}



















    return 0;

 }
