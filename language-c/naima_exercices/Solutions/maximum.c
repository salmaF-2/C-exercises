#include <stdio.h>
/* 
Écrivez un programme C pour trouver le maximum entre deux nombres en utilisant if else. 
Programme C pour entrer deux nombres de l'utilisateur et trouver le maximum entre deux nombres en utilisant if else. 
Comment trouver le maximum ou le minimum entre deux nombres en utilisant if else en programmation C.
  */
 
void main(){

   int num1, num2;
   
   printf("get num 1 and num 2 from user \n");
   scanf("%d, %d", &num1);
    scanf("%d", &num2);

   
  if(num1 > num2)
   {
   	   printf("maximum is num1 = %d",num1);

   }else{
   	printf("maximum is num2 = %d",num2);
   }


}
