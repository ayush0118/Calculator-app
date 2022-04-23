#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

      

int main() {

  int op;
  double first, second;
   printf (" Select an operation to perform the calculation in C Calculator: ");  
        printf (" \n 1 Addition  \t \t 2 Subtraction \n 3 Multiplication \t 4 Division \n 5 Square \t \t 6 factorial \n 7 modulus  \t \t 8 exit \n Please, Make a choice ");
 
  scanf("%d", &op);
  
  
 

  switch (op) {
    case 1:
     printf("Enter 1st number:");
     scanf("%lf", &first);
     printf("Enter 2nd number:");
     scanf("%lf", &second);
     printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
     break;
    case 2:
     printf("Enter 1st number:");
     scanf("%lf", &first);
     printf("Enter 2nd number:");
     scanf("%lf", &second);
     printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
      break;
    case 3:
      printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
      break;
    case 4:
     printf("Enter 1st number:");
  
  scanf("%lf", &first);
  printf("Enter 2nd number:");
  scanf("%lf", &second);
        if (second == 0)  
        {  
            printf ("\n Divisor cannot be zero, please enter another value");  
            scanf ("%lf",&second);        
        }  
      printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
      break;
      case 5:
       printf("Enter 1st number:");
  
  scanf("%lf", &first);
  printf("Enter 2nd number:");
  scanf("%lf", &second);
        printf("%.1lf ^ %.1lf = %.1lf", first, second, pow(first,second));
        
        break;
        
    case 6:
    {
    
      int i,fact=1,num;
    
 
      printf("\nEnter a number to find factorial : ");
      scanf("%d",&num);
    
      if (num<0)
    {
        printf("\nPlease enter a positive number");
        return 1;
    }
      for(i=1;i<=num;i++)
    fact=fact*i;
    printf("\n");
    printf("Factorial of entered number %d is:%d\n",num,fact);
    }
    break;
    
    case 7:
  {
    int a,b;
  
    printf("Enter 1st number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
  
    printf("Modulus of entered numbers is", a,b,a%b);
  }
    break;
    
   
    case 8:
    printf("bye");
      exit(0);
      break;
    
    
    
default:
      printf("Error! operator is not correct");
  }

  return 0;
}