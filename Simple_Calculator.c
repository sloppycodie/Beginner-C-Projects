#include <stdio.h>
#include <math.h>

void options();
double division(double,double);
double modulus(double,double);

int main(){
    int option;
    double a,b,result;

    while (1)
    {
        options();

        printf("\nPlease enter your choice: ");
        scanf("%d",&option);

        if (option==7)
        {
            break;
        }

        if (option>7 || option<0)
        {
            fprintf(stderr,"\nThe menu code is invalid.\n");
            continue;
        }
        

        printf("Enter the First number: ");
        scanf("%lf",&a);
        printf("Enter the Second number: ");
        scanf("%lf",&b);
        
        switch (option)
        {
        case 1://Addition
            result = a+b;
            break;
        case 2://Subtraction
            result = a-b;
            break;
        case 3://Multiplication
            result = a*b;
            break;
        case 4://Divition
            result = division(a,b);
            break;
        case 5://Modulus
            result = modulus(a,b);
            break;
        case 6://Power
            result = pow(a,b);
            break;
        }
        if(!isnan(result)){
            printf("\nThe result of the operation is: %.3lf\n", result);
        }
    }
}

void options(){
    printf("\n-----------------------------------------\n");
    printf("Welcome to the simple calculator app.\n");
    printf("Please choose one of the following options:\n");
    printf("1. Add\n");
    printf("2. Substract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Modulus\n");
    printf("6. Power\n");
    printf("7. Exit\n");
}

double division(double x,double y){
    if (y==0)
    {
        fprintf(stderr,"The argument is invalid for division!");//It is used to show error message
        return NAN;
    }else{
        return x/y;
    }
}

double modulus(double x,double y){
    if (y==0)
    {
        fprintf(stderr,"The argument is invalid for modulus!");
        return NAN;
    }else{
        return fmod(x,y);//In c it doesn't take floating point number ifor modulus. so we have to use fmod() for accurate result
    }
}
