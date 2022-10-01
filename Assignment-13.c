// ques01. Write a recursive function to calculate sum of first N natural numbers
// #include <stdio.h>
// #include <conio.h>
// int sum(int);
// int main()
// {
//   int x, s;
//   printf("enter the number:");
//   scanf("%d", &x);
//   s = sum(x);
//   printf("The sum of all the natural number are:%d",s);
//   return 0;
// }
// int sum(int a)
// {
//   int s;
//   if(a==0)
//   return 0;
//   s=a+sum(a-1);
//   return s;
// }
// ques-02 write a recursive function to calculate sum of first n odd number.
//  #include<stdio.h>
//  #include<conio.h>
//  int odd(int);
//  int main()
//  {
//    int x,s;
//    printf("enter the number:");
//    scanf("%d",&x);
//    s=odd(x);
//    printf("The sum of first n odd numbers:%d",s);
//    return 0;
//  }
//  int odd(int a)
//  {
//      if(a==0)
//      return 1;
//     static int si=0;
//     si=si+(2*a-1);
//       odd(a-1);
//     return si;

// }
// ques-03. Write a recursive function to calculate sum of first N odd natural numbers.
// #include <stdio.h>
// #include <conio.h>
// int even(int);
// int main()
// {
//   int x, s;
//   printf("enter the number:");
//   scanf("%d", &x);
//   s = even(x);
//   printf("The sum of first n even numbers:%d", s);
//   return 0;
// }
// int even(int a)
// {
//   if (a == 0) // base case
//     return 1;
//   static int si = 0;
//   si = si + (2 * a);
//   even(a - 1); // recursive case
//   return si;
// }
// ques-04 write a recursive function to calculate sum of square of first n natural number
//   #include<stdio.h>

// int square(int num)
// {
//     if(num == 0)
//         return 0;
//     else
//         return( (num%10) * (num%10) + square(num/10) );
// }

// int main()
// {
//     int num;

//     printf("Enter a positive integer number:\n");
//     scanf("%d", &num);

//     printf("Sum of squares of digits of %d is %d.\n", num, square(num));

//     return 0;
// }
// ques-05. Write a recursive function to calculate sum of digits of a given number
// #include <stdio.h>
// #include <conio.h>
// int sumof(int);
// int main()
// {
//   int x, s;
//   printf("enter the number:");
//   scanf("%d", &x);
//   s = sumof(x);
//   printf("The sum of digits of a number is:%d", s);
//   return 0;
// }
// int sumof(int a)
// {
//   static int si = 0 ;
//   if (a == 0) // base case
//       return 1;
//   int rem = a % 10;
//   si = si + rem;
//   sumof(a/10);
//   return(si); // recursive case.
// }
// ques-06. Write a recursive function to calculate factorial of a given number.
// #include<stdio.h>
// #include<conio.h>
// int fact(int);
// int main()
// {
//    int x,s=0;
//    printf("enter the number:");
//    scanf("%d",&x);
//    s=fact(x);
//   printf("The factorial of a given number is:%d",s);
//   return 0;
// }
// int fact(int a)
// {
//   static int rem=1;
//   if(a==0)
//   return 1;//base case
//   rem=rem*a;
//   fact(a-1);
//   return rem;

// }
// ques-07. Write a recursive function to calculate HCF of two numbers

// #include <stdio.h>

// int hcf(int n1, int n2) {
//     if (n2 != 0)
//         return hcf(n2, n1 % n2);
//     else
//         return n1;
// }

// int main() {
//     int n1 = 202, n2 = 555;
//     printf("L.C.M of %d and %d is %d.", n1, n2, hcf(n1, n2));
//     return 0;
// }

// // ques-08. Write a recursive function to print first N terms of Fibonacci series
// #include <stdio.h>
// #include <conio.h>
// int fib(int n);
// int main()
// {
//   int n=5,i;
//   for(i=0;i<5;i++)
//   {
//     printf("%d",fib(i));
//   }
//   return 0;
// }
// int fib(int n)
// {
//   if(n==0||n==1)
//   return n;
//    return  fib(n-1)+fib(n-2);

// }
// // ques-09 write a recursive function to count the digits of a given number.
// #include <stdio.h>
// #include <conio.h>
// int digit(int);
// int main()
// {
//     int x;
//     printf("enter the number:");
//     scanf("%d", &x);
//     int s = digit(x);
//     printf("The total number of digits are:%d", s);
//     return 0;
// }
// int digit(int a)
// {
//     static int count = 0;
//     if (a == 0)
//         return 0;
//     else
//     {
//         int rem = a % 10;
//         digit(a / 10);
//         count++;
//     }
//     return count;
// }
// ques-10. Write a program in C to calculate the power of any number using recursion
// #include <stdio.h>
// int power(int n1, int n2);
// int main() {
//     int base, a, result;
//     printf("Enter base number: ");
//     scanf("%d", &base);
//     printf("Enter power number(positive integer): ");
//     scanf("%d", &a);
//     result = power(base, a);
//     printf("%d^%d = %d", base, a, result);
//     return 0;
// }

// int power(int base, int a) {
//     if (a != 0)
//         return (base * power(base, a - 1));
//     else
//         return 1;
// }
