/** \brief Solicita al usuario 2 numeros y devuelve la suma
 *
 * \param X sera el primer valor
 * \param Y sera el segundo valor
 * \return retornara el resultado de la suma
 *
 */



float suma(float x, float y){
 float rta;

 rta= x+y;
 printf("\nla suma entre %.2f y %.2f es: %.2f \n",x,y, rta);
 return rta;

}

/** \brief
 * Solicita al usuario 2 numeros y los restara
 * \param  X sera el primer valor
 * \param  y sera el segundo valor
 * \return devolvera el resultado de la resta
 *
 */

float resta(float x, float y){
 float rta;

 rta= x-y;
 printf("\nla resta entre %.2f y %.2f es: %.2f \n", x, y, rta);
 return rta;
}

/** \brief
 *  Solicita al usuario 2 numeros y los dividira
 * \param  X sera el numerador
 * \param  y sera el denominador
 * \return se devolvera el resultado de la division
 *
 */


float division(float x, float y){
    float rta;
  do{
                            if(y==0){

                                printf("error en la division  el segundo operando debe ser diferente de 0 reingreselo para seguir con la operacion:  ");
                                scanf("%f", &y);
                            }


                      }while(y==0);
                        rta= x/y;

                      printf("\nla division entre %.2f y %.2f es: %.2f \n", x, y, rta);
 return rta;
}

/** \brief
 *  Solicita al usuario 2 numeros y los multiplicara
 * \param X sera el primer valor
 * \param y sera el segundo valor
 * \return se devolvera el resultado de la multiplicacion
 *
 */

float multiplicacion(float x, float y){
 float rta;

 rta= x*y;

 printf("\nla multiplicacion  entre %2.f y %.2f es: %.2f \n",x,y, rta);
 return rta;
}

/** \brief Se encargara de realizar la operacion de Factorial
 *
 * \param sera el valor a factorizar
 *
 * \return se devolvera el resultado de la operacion
 *
 */


int factorial(float x){
 float rta=1;
 int i;
 for(i=1; i<=x; i++)

   rta= rta * i;
      printf("\nel Factorial de %2.f es: %.2f \n",x, rta);
 return rta;
}



