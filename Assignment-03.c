// ques-01 WAP to check whether a given number is positive or non-positive
// #include<stdio.h>
// int main()
// {
//     int x;
//     printf("enter a number :");
//     scanf("%d",&x);
//     if(x>=0)
//     {
//         printf("Positive number");
//     }
//     else
//     {
//         printf("Not a positive number");
//     }
//     return 0;
// }
// ques-02 write a program to check whether a given number is divisiable by 5 or not.
// #include<stdio.h>
// int main()
// {
//     int x;
//     printf("enter a number: ");
//     scanf("%d",&x);
//     if(x%5==0)
//     {
//         printf("Divisible by 5");
//     }
//     else{
//         printf("Not divisible by 5");
//     }
//     return 0;
// }
// ques 03 wap to check whether a given number is even or odd..
//  #include<stdio.h>
//  int main()
//  {
//     int x;
//     printf("enter a number :");
//     scanf("%d",&x);
//     if(x%2==0)
//     {
//         printf("even no.");
//     }
//     else
//     {
//         printf("odd no.");
//     }
//     return 0;
//  }
//ques-04 wap to check whether a given number is even or odd without using % operator
// #include<stdio.h>
// int main()
// {
//     int x;
//     printf("Enter a year :");
//     scanf("%d",&x);
//  if((x&1)==1)
//  {
//      printf("odd no.");
//  }
//  else
//  {
//      printf("even no");
//  }
//  return 0;
// }

// ques-05 wap to to check whether a given number is a three digit number or not..
// #include<stdio.h>
// int main()
// {
//     int x;
//     printf("Enter a number: ");
//     scanf("%d",&x);
//     if(x>99&&x<1000)
//     {
//         printf("It is a three digit number");
//     }
//     else
//     {
//         printf("It is not a three digit number");
//     }
//     return 0;
// }
// ques-06 wap to print the greater between two number ,print one number if both are same
// #include<stdio.h>
// int main()
// {
//     int x,y;
//     printf("enter the first number");
//     scanf("%d",&x);
//     printf("enter the second number");
//     scanf("%d",&y);
//     if(x>y)
//     {
//         printf("%d is greater",x);
//     }
//     else if(x==y)
//     {
//         printf("%d and %d both are equal",x , y);
//     }
//     else
//     {
//         printf("%d is greater ",y);
//     }
//     return 0;
// }
// ques -07 wap to check whether roots of  given quadratic equation are real and distinct, real and equal or imaginary roots
// #include<stdio.h>
// int main()
// {
//     int b,a,c,d  ;
//     printf("enter the value of b :");
//     scanf("%d",&b);
//     printf("enter the value of a :");
//     scanf("%d",&a);
//     printf("enter the value of c :");
//     scanf("%d",&c);
//     d=b*b-4*a*c;
//     if(d<0)
//     {
//         printf("unequal and imaginary roots..");
//     }
//     else if(d>0)
//     {
//         printf("real and unequal roots..");
//     }
//     else
//     {
//         printf("real and equal roots");
//     }
//     return 0;
// }
//ques-08 wap to check whether a given number is a leap year or not
// #include<stdio.h>
// int main()
// {
//     int x;
//     printf("Enter a year :");
//     scanf("%d",&x);
//     if((x%100)==0&&(x%400==0))
//     {
//         printf("Leap year");
        
//     }
//     else if((x%4==0)&&(x%100!=0))
//         {
//              printf("Leap year");
//         }
    
//     else
//     {
//           printf(" Not a Leap year");
//     }
//    return 0; 
// }
// ques-09 write a program to find the greatest number among the three numbers , print the number once if greater number appear two or three times..
// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     printf("enter the value of a :");
//     scanf("%d",&a);
//     printf("enter the value of b :");
//     scanf("%d",&b);
//     printf("enter the value of c :");
//     scanf("%d",&c);
//     if(a>b&&b>c)
//     {
//         printf("a is greater..");
//     }
//     else if(b>c&&b>a)
//     {
//         printf("b is greater..");
//     }
//     else
//     {
//         printf("c is greater..");
//     }
//     return 0;
// }
// ques-10 write a program which takes the cost price and selling price of a product from user. Now calculate profit or loss percentage
// #include<stdio.h>
// int main()
// {
//     float cp,sp,p,l,profitp,lossp;
//     printf(" enter the cost price:");
//     scanf("%f",&cp);
//     printf(" enter the selling price:");
//     scanf("%f",&sp);
//     if(sp>cp)
//     {
//         p=sp-cp;
//         profitp=p*100/cp;
//         printf("The profit percentage is :%f",profitp);
//     }
//     else
//     {
//         l=cp-sp;
//         lossp=l*100/cp;
//         printf("The loss percentage is: %f",lossp);
//     }
//     return 0;
// }
// ques-11 Wap to take marks of 5 subjects from the user .
// assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or fails
// #include<stdio.h>
// int main()
// {
//     int x,y,z,a,b  ;
//     //input the marks
//     printf("enter the marks of first subject out of 100:");
//     scanf("%d",&x);
//     printf("enter the marks of second subject out of 100:");
//     scanf("%d",&y);
//     printf("enter the marks of third subject out of 100:");
//     scanf("%d",&z);
//     printf("enter the marks of fourth subject out of 100:");
//     scanf("%d",&a);
//     printf("enter the marks of fifth subject out of 100:");
//     scanf("%d",&b);
//     if(x>=33&&y>=33&&z>=33&&a>=33&&b>=33)
//     {
//         printf("pass");
//     }
//     else
//     {
//         printf("fail");
//     }
//     return 0;
// }
// ques-12 wap to check whether a given alphabet is uppercase or lowercase or zero..
// #include<stdio.h>
// int main()
// {             
//     char x;
//     printf("enter a random number from the keyboard :");
//     scanf("%c",&x);
//     if(x>='A'&& x<='Z')
//     {
//         printf("uppercase alphabet");
//     }
//     else if(x>='a'&& x<='z')
//     {
//         printf("lowercase alphabet");
//     }
//     else if(x>='0'&&x<='9')
//     {
//         printf("digits");
//     }
//     return 0;
// }
// ques 13 wap to check whether a given number is divisible by 3 and divisible by 2
// #include<stdio.h>
// int main()
// {
//     int x;
//     printf("enter the number :");
//     scanf("%d",&x);
//     if(x%2==0&&x%3==0)
//     {
//         printf("The number is divisible by 2 and 3");
//     }
//     else
//     {
//         printf("The number is not divisible by 2 and 3");
//     }
//     return 0;
// }
// ques -14 write a program to check whether a given number is divisible by 7 or divisible by 3
// #include<stdio.h>
// int main()
// {
//     int x;
//     printf("enter the number");
//     scanf("%d",&x);
//     if(x%3==0)
//     {
//         printf("it is divisible by 3");
//     }
//     else if(x%7==0)
//     {
//         printf("it is divisible by 7");
//     }
//     else
//     {
//         printf("it is not divisible by 3 or 7");
//     }
//     return 0;
// }
// ques-15 wap to check whether a given number is positive,negative or not
// #include<stdio.h>
// int main()
// {
//     int x;
//     printf("enter a number");
//     scanf("%d",&x);
//     if(x>=0)
//     {
//         printf("Positive number");
//     }
//     else if(x<0)
//     {
//         printf("Negative number");
//     }
//    return 0;
// }
// ques-16 write a program to check whether a given character is a uppercase alphabet ,lowercase alphabet ,digit,or special character
// #include <stdio.h>
// int main()
// {
//     char x;
//     printf("Enter any value from the keyboard :");
//     scanf("%c", &x);
//     if (x >= 97 && x <= 122)
//     {
//         printf("Lowercase alphabet");
//     }
//     else if (x >= 65 && x <= 90)
//     {
//         printf("Uppercase alphabet");
//     }
//     else if (x >= 48 && x <= 57)
//     {
//         printf("Digits");
//     }
//     else
//     {
//         printf("Special character");
//     }
//     return 0;
// }
// ques -17 write a program which takes the length of sides of a triangle as an input and display whether the triangle is valid or not
//  #include<stdio.h>
//  int main()
//  {
//      int a,b,c   ;
//      printf("enter the values for the first side :");
//      scanf("%d",&a);
//      printf("enter the values for the second side :");
//      scanf("%d",&b);
//      printf("enter the values for the third side :");
//      scanf("%d",&c);
//      if(a+b>c)
//      {
//          printf("valid triangle");
//      }
//      else if(b+c>a)
//      {
//          printf("valid triangle");
//      }
//      else if(a+c>b)
//      {
//          printf("valid triangle");
//      }
//      else
//      {
//          printf("not a valid triangle");
//      }
//      return 0;
//  }
// ques-18 write a program which takes the month number as an input and display number of days in that month..
//  #include<stdio.h>
//  int main()
//  {
//      int x;
//      printf("enter a number :");
//      scanf("%d",&x);
//      if(x==1)
//      {
//          printf("it is january with 31 days..");

//     }
//     else if(x==2)
//     {
//         printf("it's february with 28 days in ordinary year and 29 days in leap year");
//     }
//     else if(x==3)
//     {
//         printf("its march with 31 days in it ");
//     }
//     else if(x==4)
//     {
//         printf("its april with 30 days in it");
//     }
//     else if(x==5)
//     {
//         printf("its may with 31 days in it");
//     }
//     else if(x==6)
//     {
//         printf("its june with 30 days in it");
//     }
//     else if(x==7)
//     {
//         printf("its july with 31 days in it");
//     }
//     else if(x==8)
//     {
//         printf("its august with 31 days in it");
//     }
//     else if(x==9)
//     {
//         printf("its september with 30 days in it");
//     }
//     else if(x==10)
//     {
//         printf("its october with 31 days in it");
//     }
//     else if(x==11)
//     {
//         printf("its november with 30 days in it");
//     }
//     else
//     {
//         printf("its december with 31 days in it");
//     }
//     return 0;
// }