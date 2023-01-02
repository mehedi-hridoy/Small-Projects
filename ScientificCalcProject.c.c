#include<stdio.h>
#include<stdlib.h>//Header files
#include<math.h>
#include<conio.h>



#define note "Invalid Input! Please Enter your Input again"



void addition();
void subtraction();
void multiplication();   //Declaration of functions for basic calculation
void divition();
void percentage();

//end of simple calculator part

void logarithm();
void trigonometry();
void square();            //Declaration of functions for scientific calculation
void squareRoot();
void equationSolver();


//Starting of the main function
//Everything will be execute from here


int main()
{
    system("COLOR 0A");    //For colored text in console


    printf("\n\n\n\t\t\t        **********WELCOME TO OUT PROJECT**********\n\n");
    printf("\t\t\t\t          SCIENTIFIC CALCULATOR\n\n\n\n");
    printf("\t\t\t     Select the type of calculation you want to perform: \n\n");

    printf("\t\t*************************************************************************\n");
    printf("\t\t*************************************************************************\n\n");   //Basic Dispaly Design Part
    printf("\t\t\t\t  --------------MAIN MENU----------------\n\n");
    printf("\t\t   1.BASIC CALCULATION\t");
    printf("   2.SCIENTIFIC CALCULATION\t");
    printf("   3.TEAM INFO\n\n\n");

    printf("\t\t*************************************************************************\n");
    printf("\t\t*************************************************************************\n");

   printf("\t\t\t\tEnter Your Option  :-->");

   int calculationType;
   scanf("%d",&calculationType);


   //Startint of Basic Calculation Part in main function

   if(calculationType==1){

    int choice;
    printf("\n\n\t\t\tBASIC CALCULATOR\n\n");
    printf("Select an operation to perform basic calculation in calculator: \n\n");

    printf("1 Addition \n");
    printf("2 Subtraction \n");
    printf("3 Multiplication \n");           //Display part of basic calculation part
    printf("4 Divition\n");
    printf("5 Percentage\n");
    printf("0 Exit\n");


    while(1){
        printf("\n\nPlease, make a choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
                case 1:
                    addition();
                    break;
                case 2:
                    subtraction();
                    break;
                 case 3:
                       multiplication();   //cases to connect this main function with specific functions
                       break;
                 case 4:
                       divition();
                       break;
                 case 5:
                       percentage();
                       break;
                case 0:
                       exit(0);
                default:
                       printf("\n********** %s **********\n",note);
        }
    }

 }
 //End point of basic calculation part in main function


 //Starting of scientific calculation part in main function

   if(calculationType==2){
        int choice;

        printf("\n\n\t\t\tSCIENTIFIC CALCULATOR\n\n");
        printf("Select an operation to perform basic calculation in calculator: \n\n");

        printf("1  Logarithm \n");
        printf("2  Trigonometry \n");
        printf("3  Square \n");
        printf("4  Square root\n");        //Display for the scientific calculation part
        printf("5  Equation Solver\n");
        printf("0  Exit\n");


        while(1){

            printf("\n\nPlease, make a choice: ");
            scanf("%d",&choice);
            switch(choice)
            {

                case 1:
                    logarithm();
                    break;
                case 2:
                    trigonometry();
                    break;
                 case 3:
                       square();                  //cases to connect this main function with specific functions
                       break;
                 case 4:
                       squareRoot();
                       break;
                 case 5:
                       equationSolver();
                       break;
                case 0:
                       exit(0);
                default:
                    printf("\n********** %s **********\n",note);
            }
        }


    }
//End point of scientific calculation part in main function


//An extra point to show the Team Members Name and Id

    if(calculationType==3){
        printf("\n\n\t\t\t\tNAME\t\t");
        printf("\t   ID\t\n\n");
        printf("\t\t\tMEHDI HASAN HRIDOY\t\t221-15-5097\n\n");
        printf("\t\t\tRAHATIL RAHAMAN\t\t\t221-15-5129\n\n");
        printf("\t\t\tA K M SADIQUL ISLAM\t\t221-15-5550\n\n");
        printf("\t\t\tUMME SALMA LAMYEA\t\t221-15-5835\n\n");

    }


   return 0;



}

//Here is the end of the main function



//Below this line here there are all the function written one by one which have been used throughout the whole project


// A function to calculate addition

void addition(){
    double a,b;
    printf("You chose: Addition\n");
    printf("Enter First Number: ");
    scanf("%lf",&a);
    printf("Enter First Number: ");
    scanf("%lf",&b);
    double sum=a+b;
    printf("Addition of two number is %.2lf\n",sum);
    printf("**************************************************");
}

// A function to calculate Subtraction
void subtraction(){

    double a,b;
    printf("You chose: Subtraction\n");

    printf("Enter First Number: ");
    scanf("%lf",&a);
    printf("Enter First Number: ");
    scanf("%lf",&b);
    double sub= a-b;
    printf("Subtraction of two number is: %.2lf\n",sub);
    printf("**************************************************");



}

// A function to calculate Multiplication
void multiplication(){

    double a,b;
    printf("You chose: Multiplication\n");

    printf("Enter First Number: ");
    scanf("%lf",&a);
    printf("Enter First Number: ");
    scanf("%lf",&b);
    double multiply=a*b;
    printf("Multiplication of two number is:%.2lf \n",multiply);
    printf("**************************************************");

}

// A function to calculate Divition
void divition(){

    double a,b;
    printf("You chose: Divition\n");

    printf("Enter Divisor: ");
    scanf("%lf",&a);
    printf("Enter Divident: ");
    scanf("%lf",&b);
    double divide=a/b;
    printf("Divition of two number is %.2lf\n",divide);
    printf("**************************************************");

}

// A function to calculate Percentage
void percentage(){

    double percentage;
    double principle,current;
    printf("You chose: Percentage\n");

    printf("Enter principle amount: ");
    scanf("%lf",&principle);
    printf("Enter current amount: ");
    scanf("%lf",&current);
    percentage = (current/principle)*100;

    printf("The percentage is %.2lf%%\n",percentage);
    printf("**************************************************");

}

//End of all function which have been used in Basic Calculation Part

// Below this line all function have written for Scientific Calculation Part

// A function to calculate Logarithm
void logarithm(){

    printf("You chose: Logarithm\n");
    double n, result;

    printf("Enter a number to calculate its natural logarithm (base = e)\n");
    scanf("%lf", &n);

    result = log(n);

    printf("Natural log of %.2lf = %lf\n", n, result);
    printf("**************************************************");

}

// A function to calculate Trigonometric Calculation
void trigonometry(){

    printf("You chose: Trigonometry\n");
    printf("Trigonometric anges are:\n");
    printf("1.Sin\n");
    printf("2.Cos\n");
    printf("3.Tan\n");
    printf("4.Cosec\n");
    printf("5.Sec\n");
    printf("6.Cot\n");
    printf("Choose a trigonometric function to find it's value: ");
    int value;
    scanf("%d",&value);
    if(value==1){
         printf("Enter the sin angle to find it's value: \n");
    }
    if(value==2){
         printf("Enter the cos angle to find it's value: \n");
    }
    if(value==3){
         printf("Enter the tan angle to find it's value: \n");
    }
    if(value==4){
         printf("Enter the cosec angle to find it's value: \n");
    }
    if(value==5){
         printf("Enter the sec angle to find it's value: \n");
    }
    if(value==6){
         printf("Enter the cot angle to find it's value: \n");
    }

    float degree,radian;
    float PI = 3.14159;

    //printf("Enter angle in degree\n");
    scanf("%f",&degree);
    radian = degree * (PI/180.0);





    switch(value)
    {
        case 1:

            printf("The sin(%.0f) = %.2f\n",degree,sin(radian));
            break;
        case 2:

            printf("The cos(%.0f) = %.2f\n",degree,cos(radian));
            break;
        case 3:

            printf("The tan(%.0f) = %.2f\n",degree,tan(radian));
            break;
        case 4:

            printf("The cosec(%.0f) = %.2f\n",degree,1/sin(radian));
            break;
        case 5:

            printf("The sec(%.0f) = %.2f\n",degree,1/cos(radian));
            break;
        case 6:

            printf("The cot(%.0f) = %.2f\n",degree,1/tan(radian));
            break;
        case 0:
             exit(0);
             break;
        default:
             printf("\nInvalid Input! Please Enter a valid Input\n");
             break;

    }

}

// A function to calculate Square Root
void squareRoot(){

    printf("You chose: Square Root\n");
    double n, result;

    printf("Enter a number to calculate its square root\n");
    scanf("%lf", &n);
    result = sqrt(n);

    printf("Square root of %.2lf = %.2lf\n", n, result);
    printf("**************************************************");

}

// A function to calculate Square
void square(){
    printf("You chose: Square\n");
    int n;
    printf("Enter the number you want to find the square: ");
    scanf("%d",&n);
    printf("The square of the number is : %d",n*n);
}

// A function to calculate Equation
void equationSolver(){
    printf("You chose: EquatoinSolver\n");
    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    printf("Enter coefficients a, b and c: \n");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    // condition for real and different roots
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }

    // condition for real and equal roots
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf;", root1);
    }

    // if roots are not real
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }
    printf("**************************************************");


}
