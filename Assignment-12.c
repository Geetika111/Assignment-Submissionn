//**************************RECURSION***********************************//
// ques=01 write a recursive function to print first n natural number.
// #include<stdio.h>
// #include<conio.h>
// void natural(int);
// int main()
// {
//     int n;
//     printf("enter a natural number:");
//     scanf("%d",&n);
//     natural(n);
//     return 0;
// }
// void natural(int a)
// {
//    if(a==0)
//    {
//     return 1;
//    }
//    natural(a-1);
//    printf("%d ",a);
// }
// ques=02 write a recursive function to print first n natural number in reverse order.
// #include<stdio.h>
// #include<conio.h>
// void reverse(int);
// int main()
// {
//     int a;
//     printf("enter the number:");
//     scanf("%d",&a);
//     reverse(a);
//     return 0;
// }
// void reverse(int p)
// {
//     if(p==0)
//     {
//         return 1;
//     }
//     printf(" %d ",p);
//     reverse(p-1);
// }
// ques-03 write a recursive function to print n odd natural number.
// #include<stdio.h>
// #include<conio.h>
// void oddno(int);
// int main()
// {
//     int a;
//     printf("enter a number:");
//     scanf("%d",&a);
//     oddno(a);
//     return 0;
// }
// void oddno(int p)
// {
//    int s;
//     if(p==0)//base case
//     return 1;
//     oddno(p-1);//recursive case.
//     s=2*p-1;
//     printf(" %d ",s);
// }
// ques-04 write a recursive function to print n odd naumber in reverse order.
// #include<stdio.h>
// #include<conio.h>
// void reverseodd(int);
// int main()
// {
//     int b;
//     printf("enter a number:");
//     scanf("%d",&b);
//     reverseodd(b);
//     return 0;
// }
// void reverseodd(int p)
// {
//    int s;
//     if(p==0)//base case
//     return 1;
//     s=2*p-1;
//     printf(" %d ",s);
//     reverseodd(p-1);//recursive case.

// }
// ques-05 write a recursive function to print n even natural number.
// #include<stdio.h>
// #include<conio.h>
// void even(int);
// int main()
// {
//   int a;
//   printf("enter a number:");
//   scanf("%d",&a);
//   even(a);
//   return 0;
// }
// void even(int p)
// {
//     if(p==0)
//     return 0;
//     even(p-1);
//     printf(" %d ",2*p);
// }
// ques-06 write a recursive function to print n even natural number in reverse order
// #include<stdio.h>
// #include<conio.h>
// void reverse(int);
// int main()
// {
//     int a;
//     printf("enter the number:");
//     scanf("%d",&a);
//     reverse(a);
//     return 0;
// }
// void reverse(int p)
// {

//     if(p==0)
//     return 0;
//     printf(" %d ",2*p);
//     reverse(p-1);

// }
// ques-07 write a recursive function to print square of first n natural number.
// #include<stdio.h>
// #include<conio.h>
// void square(int);
// int main()
// {
// int a;
// printf("enter a number:");
// scanf("%d",&a);
// square(a);
// return 0;
// }
// void square(int n)
// {
//    if(n==0)
//    return 0;
//   square(n-1);
//   printf(" %d ",n*n);

// }
// ques-08 write a recursive function to print binary of a given decimal number.
// #include <stdio.h>

// int decimal_binary(int n)
// {
//     if (n==0)
//         return 0;
//     else
//         return ((n%2)+10*decimal_binary(n/2));
// }

// void main()
// {
//    int no;
 
//    printf("Enter a decimal number\n");
//    scanf("%d",&no);
//    printf("Decimal(%d) = Binary(%d)\n",no,decimal_binary(no));
// }
// ques-09 write a recursive function to print octal of a given decimal number.
// #include <stdio.h>

// int octal_binary(int n)
// {
//     if (n==0)
//         return 0;
//     else
//         return ((n%8)+10*octal_binary(n/8));
// }

// void main()
// {
//    int no;
 
//    printf("Enter a decimal number\n");
//    scanf("%d",&no);
//    printf("Decimal(%d) = octal(%d)\n",no,octal_binary(no));
// }
// //ques-10 write a recursive function to print the reverse of given number
// #include<stdio.h>
// #include<conio.h>
// void reverse(int);
// int main()
// {
//     int x  ;
//     printf("enter the number:");
//     scanf("%d",&x);
//     reverse(x);
//     return 0;
// }
// void reverse(int a)
// {
//     if(a==0)//base case
//     return 1;
//     int rem=a%10;
//     printf("%d",rem);
//     int n=a/10;
//     reverse(n);//recursive case.
// }