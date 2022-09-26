//**************************************More on functions in C Language****************************//
//ques-01  write a function to calculate the lcm of two number.
// #include<stdio.h>
// #include<conio.h>
// int lcm(int ,int );
// int main()
// {
//     int x,y,d;
//     printf("enter the first number:");
//     scanf("%d",&x);
//     printf("enter the second number:");
//     scanf("%d",&y);
//     d=lcm(x,y);
//     printf("The lecm of two numbers are:%d",d);
//     return 0;
// }
// int lcm(int a ,int b)
// {
//     int maximum=0;
//     maximum=a>b?a:b;
//     while(1)
//     {
//         if(maximum%b==0&&maximum%a==0)
//         {
//             break;
//         }
//         maximum++;
//     }
//     return maximum;
// }

//ques-02 write a function to calculate hcf of two numbers.
// #include<stdio.h>
// #include<conio.h>
// void hcf(int ,int);
// int main()
// {
//     int m,n    ;
//     printf("enter the first number:");
//     scanf("%d",&m);
//     printf("enter the second number:");
//     scanf("%d",&n);
//     hcf(m,n);
//     return 0;
// }
// void hcf(int a,int b)
// {
//     int h;
//     for(h=a<b?a:b;h>=1;h--)
//     {
//         if(a%h==0&&b%h==0)
//         {
//             break;
//         }
//     }
//     printf("Hcf is %d",h);

// }
//ques-03 write a function to check whether a given number is prime number or not.
// #include<stdio.h>
// #include<conio.h>
// void check(int);
// int main()
// {
//     int n;
//     printf(" enter a number to check:");
//     scanf("%d",&n);
//     check(n);
//     return 0;
// }
// void check(int x)
// {
//     int i;
//     for(i=2;i<x;i++)
//     {
//         if(x%i==0)
//         {
//             break;
//         }
//     }
//     if(x==i)
//     {
//         printf("it is a prime number.");
//     }
//     else
//     {
//         printf("it is not a prime number");
//     }
    
// }
//ques-04 write a function to find next prime number of a given number.
// #include<stdio.h>
// #include<conio.h>
// int nextprime(int);
// int main()
// {
//   int n,d   ;
//   printf("enter the number:");
//   scanf("%d",&n);
//   d=nextprime(n);
//   printf("The next prime number is:%d",d);
//   return 0;
// }
// int nextprime(int a)
// {
//     int i,j ;
//     for(i=a;i<=1000;i++)
//     {
//         for(j=2;j<=i;j++)
//         {
//             if(i%j==0)
//             break;
//         }
//         if(i==j)
//         {
           
//             break;
//         }
//     }
//     return j;
// }
// //ques-05 write a function to print n prime numbers.
// void prime(int);
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int x;
//     printf("enter the number:");
//     scanf("%d",&x);
//     prime(x);
//     return 0;
// }
// void prime(int a)
// {
//     int i,j   ;
//     printf("The prime numbers are:\n");
//     for(i=2;i<a;i++)
//     {
//         for(j=2;j<=i;j++)
//         {
//             if(i%j==0)
//             break;
//         }
//         if(i==j)
//         {
//             printf(" %d ",i);
//         }
//     }

// }
//ques-06 write a function to print all prime number between two given number.
// #include<stdio.h>
// #include<conio.h>
// void primeno();
// int main()
// {
//   primeno();
//   return 0;
// }
// void primeno()
// {
//     int low,high,i,flag;
//     printf("enter two number(intervals):");
//     scanf("%d%d",&low,&high);
//     printf("prime number between %d and %d are:",low,high);
//     while(low<high)
//     {
//         flag=0;
//         if(low<=1)
//         {
//             ++low;
//             continue;
//         }
//         for(i=2;i<=low/2;i++)
//         {
//             if(low%i==0)
//             flag=1;
//             break;
//         }
//         if(flag==0)
//             printf(" %d ",low);
//             ++low;
        

//     }
    
// }
//ques-07 write a function to print first n terms of fibbonacci series
// #include<stdio.h>
// #include<conio.h>
// void fibbonacci(int);
// int main()
// {
//     int n;
//     printf("enter the value you want to find in the finonacci series of: ");
//     scanf("%d",&n);
//     fibbonacci(n);
//     return 0;
// }
// void fibbonacci(int a)
// {
//     int n1,n2,n3  ;
//     printf("The fibbonacci series is:");
//     n1=0,n2=1;
//     printf("%d",n1);
//     printf(" %d",n2);
//     for(int i=0;i<a-2;i++)
//     {
//         n3=n1+n2;
//         printf(" %d ",n3);
//         n1=n2;
//         n2=n3;
//     }
  
// }
//ques-08 write a function to print pascal triangle.
// #include<stdio.h>
// #include<conio.h>
// void pascal(int);
// int comb(int,int);
// int fact(int);
// int main()
// {
//    pascal(6);
//    return 0;
// }
// void pascal(int n)
// {
//     for(int i=0;i<=n;i++)
//     {
//         for(int j=0;j<=i;j++)
//         {
//             printf(" %d ",comb(i,j));
//         }
//         printf("\n");
//       }
// }
// int comb(int n,int r)
// {
//     return fact(n)/(fact(r)*fact(n-r)) ;
// }
// int fact(int b)
// {
//     int fac=1;
//     while(b>=1)
//     {
//         fac=fac*b;
//         b--;
//     }
//     return fac;
// }
//ques-09 write a program in c to find the square if any number using the function
// #include<stdio.h>
// #include<conio.h>
// int square(int);
// int main()
// {
//     int x,s;
//     printf("enter a number:");
//     scanf("%d",&x);
//     s=square(x);
//     printf("The square of the number is:%d",s);
//     return 0;
// }
// int square(int a)
// {
//     int p=a*a;
//     return p;
    
// }
//ques-10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the 
//function
// #include<stdio.h>
// #include<conio.h>
// int fact(int );
// int main() //formulae : sum=sum+[fact(n)/n]
// {
//     int i,sum=0;
//     for(i=1;i<=5;i++)
//     {
//         sum=sum+(fact(i)/i);
//     }
//     printf("%d",sum);
//     return 0;
// }
// int fact(int n)
// {
//     int i,fac=1;
//     for(i=1;i<=n;i++)
//     {
//         fac=fac*i;
//     }
//     return fac;
// }