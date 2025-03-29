//Add two integers

// #include<stdio.h>
// void main(){
//     int a,b,c;
//     printf("Enter num1: ");
//     scanf("%d",&a);

//     printf("Enter num2: ");
//     scanf("%d",&b);

//     c = a + b;

//     printf("Sum of two integers: %d",c);
// }

//The ASCII American Standard code for Information Interchange
// #include<stdio.h>
// int main(){
//     char c;
//     printf("Enter a character: ");
//     scanf("%c",&c);
//     printf("The Ascii %c value is %d: ",c,c);
// }

//Find Quotient and Remainder
// #include<stdio.h>
// int main(){
//     int a,b,q,r;
//     printf("Enter two Number : ");
//     scanf("%d %d",&a,&b);

//     q = a / b;
//     r = a % b;
//     printf("Quotient = %d",q);
//     printf("Remainder = %d",r);
//     return 0;
// }

//Swap two Numbers
#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter num1: ");
    scanf("%d",&a);

    printf("Enter num2: ");
    scanf("%d",&b);
    printf("Before swap the number is : %d %d\n",a,b);

    temp = a;
    a = b;
    b = temp;

    printf("After the swap  number is: %d %d",a,b);

    return 0;
}