//********************Assignment-06*********************//
//ques-01 write a program to calculate sum of first n natural number
// #include<stdio.h>
// int main()
// {
//     int x=1,s=0,n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     while(x<=n)
//     {
//         s=s+x;
//         x++;
//     }
//     printf("The sum of first n natural number:%d",s);
// }
//ques-02 write a program to calculate sum of first n even natural number..
// #include<stdio.h>
// int main()
// {
//     int s=0,x=1,n;
//     printf("enter a number :");
//     scanf("%d",&n);
//     while(x<=n)
//     {
//         s=s+2*x;
//         x++;
//     }
//     printf("The sum of first N even natural number :%d",s);
//     return 0;
// }
//ques -3 write a program to calculate sum of first n odd natural number
// #include<stdio.h>
// int main()
// {
//     int x=1,n,s=0;
//     printf("Enter the number :");
//     scanf("%d",&n);
//     while(x<=n)
//     {
//         s=s+2*x-1;
//         x++;
//     }
//     printf("the sum of first n odd natural numer :%d",s);
//     return 0;
// }
//ques-04 write a program to calculate sum of square of first N natural number
// #include<stdio.h>
// int main()
// {
//     int x=1,n,s=0;
//     printf("enter a number:");
//     scanf("%d",&n);
//     while(x<=n)
//     {
//         s=s+x*x;
//         x++;
//     }
//     printf("the sum of square of first n natural number :%d",s);
//     return 0;
// }
//ques-05 write a program to calculate sum of cubes of first n natural number..
// #include<stdio.h>
// int main()
// {
//     int x=1,n,s=0;
//     printf("enter a number:");
//     scanf("%d",&n);
//     while(x<=n)
//     {
//         s=s+x*x*x;
//         x++;
//     }
//     printf("the sum of cube of first n natural number :%d",s);
//     return 0;
// }
//ques-06 write a program to calculate factorial of a number
// #include<stdio.h>
// int main()
// {
//     int n,s=1;
//     printf("Enter a number :");
//     scanf("%d",&n);
//     while(n>=1)
//     {
//         s=s*n;
//         n--;
//     }
//     printf("The factorial of a number is :%d",s);
//     return 0;
// }
//ques-07 write a program to count digit in a given number...
// #include<stdio.h>
// int main()
// {
//     int n,x=0 ;
//     printf("Enter a number :");
//     scanf("%d",&n);
//     while(n!=0)
//     {
//        x++;
//        n=n/10;
//     }
//     printf("The Total digits in a given number is:%d",x);
//     return 0;
// }

// ques-08 write a program to check whether a given number is prime number or not..
// #include<stdio.h>
// int main()
// {
//     int i,n ;
//     printf("enter a given number that you want to check it is prime or not :");
//     scanf("%d",&n); 
//     for(i=2;i<=n;i++)
//     {
//         if(n%i==0)
//         {
//             break;
//         }
//     }
//     //As i puted break here so if n=56 and 56 is divided by 2 so line 17 will print i=2 and line 18 will print n=56
//     printf("%d\n",i);
//      printf("%d\n",n);
//     if(i==n)
//     {
//         printf("it is a prime number");
//     }
//     else
//     {
//         printf("it is not a prime number");
//     }
//     return 0;
// }
//ques-09 write a program to calculate lcm of two number
// #include<stdio.h>
// int main()
// {
//     int x,y,i;
//     printf("enter the first number:");
//     scanf("%d",&x);
//     printf("enter the second number:");
//     scanf("%d",&y);
//     for(i=1;i<=x*y;i++)
//     {
//             if(i%x==0&&i%y==0)
//             {
//                 break;
         
//             }
//     }  
//       printf("LCM is :%d",i);
  
//     return 0;
// }
//ques-10 write a program to reverse a given number
// #include<stdio.h>
// int main()
// {
//     int x=0,n,s=0;
//     printf("enter a number:");
//     scanf("%d",&n);
//     while(n!=0)
//     {
//         s=n%10;
//         x=x*10+s;
//         n=n/10;
//     }
//     printf("The reversed number is :%d",x);
//     return 0;
// }