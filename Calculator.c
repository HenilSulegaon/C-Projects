
#include<stdio.h>
#include<math.h>

double division(double,double);
double modulus(int,int);
void print_menu();

int main()
{
    int choice;
    double num1,num2,result;
    
    while(1){
        print_menu();
        scanf("%d",&choice);

        if(choice==7)
        {
            break;
        }

        if(choice<1 || choice >7)
        {
            fprintf(stderr,"Invalid menu choice.");
            continue;
        }

        printf("\nEnter first number: ");
        scanf("%lf",&num1);

        printf("\nEnter second number: ");
        scanf("%lf",&num2);

        switch (choice)
        {
        case 1: // Addition
            result = num1 + num2;
            break;
        case 2: // Subtract
            result = num1 - num2;
            break;
        case 3:  // Multiply
            result = num1 * num2;
            break;
        case 4:  // Divide
            result = division(num1,num2);
            break;
        case 5:  // Modulus
            result = modulus(num1,num2);
            break; 
        case 6:  // Power
            result = pow(num1,num2);
            break;
        }

        if(!isnan(result)){
            printf("Result of operation is: %.2f\n",result);
        }
    }
  return 0;  
}

void print_menu(){
    printf("\n\n--------------------------------");
    printf("\nWelcome to Simple Calculator\n\n");
    printf("Choose one of the following operation: \n");
    printf("1. Addition\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");        
    printf("5. Modulus\n");
    printf("6. Power\n");
    printf("7. Exit\n");
    printf("Now Enter your choice: ");
}

double division(double a,double b){
    if(b==0){
        fprintf(stderr,"Invalid argument of Division\n");
        return NAN;
    }
    else{
        return a / b;
    }
}

double modulus(int a,int b){
    if(b==0){
        fprintf(stderr,"Invalid argument of Modulus\n");
        return NAN;
    }
    else{
        return a % b;
    }
}