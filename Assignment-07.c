//******************************Iterative Control Statements (Part - 2)**********************//

// ques-01. Write a program to find the Nth term of the Fibonnaci series.
//  #include<stdio.h>
//  #include<conio.h>
//  int main()
//  {
//     int n,n1,n2,n3    ;
//     printf("Enter a number how many numbers you want in the series:");
//     scanf("%d",&n);
//     n1=0,n2=1;
//  //    printf("%d",n1);
//  //    printf(" %d",n2);
//     for(int i=0;i<n-2;i++)
//     {
//      n3=n1+n2;
//      n1=n2;
//      n2=n3;
//     }
//     printf("The nth term of the series is:%d",n3);
//     return 0;
//  }
// ques02. Write a program to print first N terms of Fibonacci series

// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//    int n,n1,n2,n3    ;
//    printf("Enter a number how many numbers you want in the series:");
//    scanf("%d",&n);
//    n1=0,n2=1;
//    printf("%d",n1);
//    printf(" %d",n2);
//    for(int i=0;i<n-2;i++)
//    {
//     n3=n1+n2;
//     printf(" %d",n3);
//     n1=n2;
//     n2=n3;
//    }
//    return 0;
// }

// ques-03 Write a program to check whether a given number is there in the Fibonacci
// series or not
// #include <stdio.h>
// int main()
// {
//     int n, n1, n2, n3, a;
//     printf("Enter a number how many numbers you want in the series:");
//     scanf("%d", &n);
//     printf("enter the number that you want to find in the fibonacci series:");
//     scanf("%d", &a);
//     n1 = 0, n2 = 1;
//     for (int i = 0; i < n - 2; i++)
//     {
//         n3 = n1 + n2;
//         if(a==n3)
//         {
//             break;
//         }
//         else
//         {
//         n1 = n2;
//         n2 = n3;
//         }
//     }
//     if(a==n3)
//     printf("%d is avialable in the series",a);
//     else
//     printf("%d is not avialable in the series",a);
//     return 0;
// }
//ques-04  Write a program to calculate HCF of two numbers.
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int a,b,h;
//     printf("enter two number:");
//     scanf("%d%d",&a,&b);
//     for(h=a<b?a:b;h>=1;h--)
//     {
//         if(a%h==0&&b%h==0)
//         {
//           break;
//         }
//     }
//     printf("HCF is %d",h);
//     return 0;
// }
//ques-05 write a program to check whether two given number are co prime or not.
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int i,j,n,m;//for example : The common factors of 37 and 15 is only one.
//     printf("enter two number:");
//     scanf("%d%d",&n,&m);
//     for(i=2;i<(n+m)/2;i++)
//     {
//         n=0;
//         for(j=2;j<=i;j++)
//         {
            
//             if(n%i==0&&m%j==0)
//             {
//                 n=1;
//                 break;
//             }
//         }
//         if(n==1)
//         {
//             printf("They are not co-prime number");
//             break;
//         }
//         else
//         {
//              printf("They are co-prime number");
//              break;
//         }
//     }
//     return 0;
// }
//ques-06 write a program to print all the prime number under 100.
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int i,j;
//     printf("The prime numbers are :\n");
//     for(i=2;i<=100;i++)
//     {
//         for(j=2;j<=i;j++)
//         {
//             if(i%j==0)
//             {
//                 break;
//             }
//         }
//         if(i==j)
//         {
//             printf(" %d ",i);
//         }
//     }
//     return 0;
// }
//ques-07 write a program to print the prime number between two given number
// #include <stdio.h>

// int main() {
//    int low, high, i, flag;
//    printf("Enter two numbers(intervals): ");
//    scanf("%d %d", &low, &high);
//    printf("Prime numbers between %d and %d are: ", low, high);

//    // iteration until low is not equal to high
//    while (low < high) {
//       flag = 0;

//       // ignore numbers less than 2
//       if (low <= 1) {
//          ++low;
//          continue;
//       }

//       // if low is a non-prime number, flag will be 1
//       for (i = 2; i <= low / 2; ++i) {

//          if (low % i == 0) {
//             flag = 1;
//             break;
//          }
//       }

//       if (flag == 0)
//          printf("%d ", low);

//       // to check prime for the next number
//       // increase low by 1
//       ++low;
//    }

//    return 0;
// }
//ques-08 write a program to find next prime number of a given number.
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//   int n,i,j;
//   printf("enter the number:");
//   scanf("%d",&n);
//   for(i=n;i<=1000;i++)
//   {
//     for(j=2;j<=i;j++)
//     {
//         if(i%j==0)
//         {
//             break;
//         }
//     }
//     if(i==j)
//     {
//         printf("%d",j);
//         break;
//     }
//   }
//   return 0;
// }

//ques09. Write a program to check whether a given number is an Armstrong number
//or not.
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int n,p,sum=0;
//     printf("enter a number which you want to check:");
//     scanf("%d",&n);
//     int temp=n;
//     while(n>0)
//     {
//         p=n%10;//for getting the remainder
//         sum=(sum)+(p*p*p);
//         n=n/10;
//     }
//     if(sum==temp)
//     {
//         printf("It is an armstrong number");
//     }
//     else
//     {
//         printf("It is not an armstrong number");
//     }
//     return 0;
// }//153 370 407
//ques-10 Write a program to print all Armstrong numbers under 1000
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int n,r,s,x;
//     printf("Armstrong number are:");
//     for(n=1;n<=1000;n++)
//     {
//         s=0;
//         x=n;
//         while(x!=0)
//         {
//             r=x%10;
//             s=s+r*r*r;
//             x=x/10;
//         }
//         if(s==n)
//         {
//             printf("%d\n",n);
//         }
//     }
//     return 0;
// }
