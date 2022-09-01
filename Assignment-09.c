//ques-01 write a program which takes the month number as an input and display number of days in that month.
// #include<stdio.h>
// int main()
// {
//     int x;
//     printf("Enter the month number:");
//     scanf("%d",&x);
//     switch(x)
//     {
//         case 1:
//         printf("January,31 days");
//         break;
//         case 2:
//         printf("February,28 days in ordinary days and 29 days in leap year");
//         break;
//         case 3:
//         printf("march,31 days");
//         break;
//         case 4:
//         printf("April,30 days");
//         break;
//         case 5:
//         printf("May,31 days");
//         break;
//         case 6:
//         printf("June,30 days");
//         break;
//         case 7:
//         printf("July,31 days");
//         break;
//         case 8:
//         printf("August,31st days");
//         break;
//         case 9:
//         printf("September,30 days");
//         break;
//         case 10:
//         printf("October,31 days");
//         break;
//         case 11:
//         printf("November,30 days");
//         break;
//         case 12:
//         printf("December,31st days");
//         break;
//     }
//     return 0;
// }
//ques-02 write a  menu driven program with following otions.
//a.addition
//b.subtraction
//c.multiplication
//d.division
//e.exit
// #include<stdlib.h>
// #include<stdio.h>
// int main()
// {
//     int a,b,x  ;
//     printf("\na.Addition");
//     printf("\nb.Subtraction");
//     printf("\nc.Multiplication");
//     printf("\nd.Division");
//     printf("\ne.Exit");
//     printf("\nEnter your choice:");
//     scanf("%d",&x);
//     switch(x)
//     {
//         case 1:
//         printf("enter two number:");
//         scanf("%d %d",&a,&b);
//         printf("%d",a+b);
//         break;
//         case 2:
//         printf("enter two number:");
//         scanf("%d %d",&a,&b);
//         printf("%d",a-b);
//         break;
//         case 3:
//         printf("enter two number:");
//         scanf("%d %d",&a,&b);
//         printf("%d",a*b);
//         break;
//         case 4:
//         printf("enter two number:");
//         scanf("%d %d",&a,&b);
//         printf("%d",a/b);
//         break;
//         case 5:
//         exit(0);
//     }
//      return 0;

// }
//ques-03  write a program which takes day number of a week and display a unique greeting message.
// #include<stdio.h>
// int main()
// {
//     int x;
//     printf("enter the day number :");
//     scanf("%d",&x);
//     switch(x)
// {
//     case 1:
//     printf("Monday :have a nice day");
//     break;
//     case 2:
//     printf("tuesday :hey my love");
//     break;
//     case 3:
//     printf("wednesday :good evening");
//     break;
//     case 4:
//     printf("thursday :may you become best programmer");
//     break;
//     case 5:
//     printf("friday :hey programmer");
//     break;
//     case 6:
//     printf("saturday :try try again");
//     break;
//     case 7:
//     printf("sunday:Take some rest");
//     break;
// }
// return 0;
// }
//ques-04 write a menu driven program with following options
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//      int a,b,c,d;
//     char x,p,q,r,t;
//     printf("\np).Check whether a given set of three numbers are length of an isoscles triangle or not");
//     printf("\nq).Check whether a given set of three number of length of a right angled triangle or not");
//     printf("\nr).Check whether a given set of three number of length of a equilateral triangle or not.");
//     printf("\ns).Exit\n");
//      printf("Choose any option:");
//     scanf("%c",&x);
//     switch(x)
//  {
//      case 'r':
//      printf("enter the value for the first side :",&a);
//        scanf("%d",&a);
//       printf("enter the value for the first side :",&b);
//         scanf("%d",&b);
//        printf("enter the value for the first side :",&c);
//          scanf("%d",&c);
//          if(a==b&&b==c&&c==a)
//          {
//             printf("It is an equilateral triangle..");
//          }
//          else
//          {
//             printf("It is not an equilateral triangle..");
//          }
//          break;
         
//          case 'p':
//           printf("enter the value for the first side :",&a);
//        scanf("%d",&a);
//       printf("enter the value for the first side :",&b);
//         scanf("%d",&b);
//        printf("enter the value for the first side :",&c);
//          scanf("%d",&c);
//          if((a==b&&b!=c)||(b==c&&b!=a)||(c==a&&a!=b))
//          {
//             printf("Isosceles triangle..");
//          }
//          else
//          {
//             printf("it is not an isosceles triangle.");
//          }
//         break;
//      case 'q':
//       printf("enter the value for the first side :",&a);
//        scanf("%d",&a);
//       printf("enter the value for the first side :",&b);
//         scanf("%d",&b);
//        printf("enter the value for the first side :",&c);
//          scanf("%d",&c);
//          if((a>b+c)||(a+c>b)||(a+b>c))
//          {
//             printf("It is a right angled triangle.");
//          }
//          else
//          {
//           printf("It is not a right angled triangle.");
//          }
//          case 's':
//          exit(0);
//  }

// }
//ques-05 write the given statements in switch-case..
// #include<stdio.h>
// int main()
// {
//     int var;
//     printf("Enter a number:");
//     scanf("%d",&var);
//     switch(var)
//     {
//         case 1:
//         printf("good");
//         break;
//         case 2:
//         printf("better");
//         break;
//         case 3:
//         printf("best");
//         break;
//         default:
//         printf("invalid");
//     }
//     return 0;
// }
//ques-06 write a program to check whether a year is a leap year or not. using switch statement..
// #include<stdio.h>
// int main()
// {
//     int x;
//     printf("enter a year:");
//     scanf("%d",&x);
//     switch(x>0)
//     {
//         case 1:
//         if(x%100==0&&x%400==0)
//         {
//             printf("It is a leap year..");
//         }
//         else if(x%4==0&&x%100!=0)
//         {
//             printf("It is a leap year..");
//         }
//         else 
//         {
//             printf("It is not a leap year..");
//         }
//         break;
//         case 0:
//         printf("Please enter an appropriate values to check the leap year ");
//         break;
//     }
//     return 0;
// }
//ques-07 write a program to take the input from the user for electricity bill count..
// #include<stdio.h>
// int main()
// {
//     float x;
//     float amount=0,total=0;
//     printf("enter the value:");
//     scanf("%f",&x);
//     switch(x<=50)
//     {
//         case 1:amount=x*0.5;
//         break;
//         case 0:switch(x<=150)
//         {
//             case 1:amount=25+(x-50)*0.75;
//             break;
//             case 0:switch(x<=250)
//             {
//                 case 1:amount=100+(x-150)*1.20;
//                 break;
//                 case 0:amount=220+(x-250)*1.5;
//             break;
//             } 
//             break;
//         }
//       break;  
//     }
//   total=amount+amount*0.20;
//   printf("total is:%f",total);
//   return 0;
// }
//ques-08 write a program to convert a positive number into negative number &negative number into positive number using a switch-case
// #include<stdio.h>
// int main()
// {
//     int x ;
//     printf("enter a number:");
//     scanf("%d",&x);
//     switch(x>0)
//     {
//         case 1: 
//         printf("the positive number is converted into negative number :%d",-x);
//         break;
//         case 0:
//         if(x==0)
//         printf("It's a zero.");
//         else
//         printf("The negative number is converted into the positive number..%d",-x);
//         break;
//     }
//     return 0;
// }
//ques-09 write a program to convert an even number into its upper nearest odd number in switch-case statement.
// #include<stdio.h>
// int main()
// {
//     int x;
//     printf("enter an even number:");
//     scanf("%d",&x);
//     switch(x%2==0)
//     {
//         case 1:
//          printf("The nearest odd number according to this is:%d",x+1);
//          break;
//          case 0:
//          printf("Please enter an appropriate even number ..");
//          break;
//     }
//     return 0;
// }
//ques-10 write a c program to find all roots of quadratic equation using switch case..

// #include<stdio.h>
// int main()
// {
//     int b,a,c,d=0;
//     printf("Enter the value of b :");
//     scanf("%d",&b);
//     printf("Enter the value of a :");
//     scanf("%d",&a);
//     printf("Enter the value of c :");
//     scanf("%d",&c);
//     d=b*b-4*a*c;
//     switch(d>0||d==0||d<0)
//     {
//         case 1:
//          if (d>0)
//         printf("two real and distinct solution");
//         else
//         printf("no real solution.");
//         break;
//         case 0:
//         printf("two real and equal solution");
//         break;

//     }
//     return 0;

// }
