#include <stdio.h>
#include <stdlib.h>
float resta(float x, float y);
float division(float x, float y);
float suma(float x, float y);
float multiplicacion(float x, float y);
int factorial(float x);

int main()
{
    float aux;
    float num1;
    float num2;
    char salir= 'n';
    int opcion=0;

    while(opcion != 9)
    {


        printf("1- Ingresar 1er operando (%.2f)\n", num1);
        printf("2- Ingresar 2do operando (%.2f)\n", num2);
        printf("3- suma\n");
        printf("4- resta \n");
        printf("5- division\n");
        printf("6- multiplicacion\n");
        printf("7- factorial \n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");


        scanf("%d",&opcion);
                 system("cls");

        switch(opcion)
        {

            case 1:
                printf("ingrese el primer operando: ");
                scanf("%f", &num1);
                break;
            case 2:
                printf("ingrese el segundo operando: ");
                scanf("%f", &num2);
                break;
            case 3:
                aux= suma(num1, num2);

                break;
            case 4:
                    aux=resta(num1, num2);

                break;
            case 5:

                       aux=division(num1, num2);




                break;
            case 6:
                aux= multiplicacion(num1, num2);


                break;
            case 7:
                     aux= factorial(num1);

                break;
            case 8:
                          aux= suma(num1, num2);


                         aux=resta(num1, num2);

                         aux= division(num1, num2);

                         aux= multiplicacion(num1,num2);

                         aux= factorial(num1);

                break;
            case 9:
                        opcion = 9;


                          printf("Gracias por usar la Calculadora");
                break;
        }


    }
    return 0;

}
