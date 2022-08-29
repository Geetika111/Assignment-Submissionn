// ques-01 write a program to print the unit digit of a given number
// #include <stdio.h>
// int main()
// {
//     int x, s = 0;
//     printf("enter a number:");
//     scanf("%d", &x);
//     s = x % 10;
//     printf("The unit digit of a given number is :%d", s);
//     return 0;
// }
//ques-02 write a program to print a given number without its last digit
// #include<stdio.h>
// int main()
// {
//     int x,s;
//     printf("enter the number :");
//     scanf("%d",&x);
//     s=x/10;
//     printf("the number without its last digit is:%d",s);
//     return 0;
// } 
//ques-03 write a program to swap values of two int variables
// #include<stdio.h>
// int main()
// {
//     int x,y,s=0;
//     printf("enter the first value :");
//     scanf("%d",&x);
//     printf("enter the second value :");
//     scanf("%d",&y);
//     s=x;
//     x=y;
//     y=s;
//     printf("The swapped values are:%d and %d",x,y);
//     return 0;
// }
//ques-04 write a program to swap values of two int variables without using third variable.
// #include<stdio.h>
// int main()
// {
//     int x,y;
//     printf("enter the first number:");
//     scanf("%d",&x);
//     printf("enter the second number:");
//     scanf("%d",&y);
//     x=x+y;
//     y=x-y;
//     x=x-y;
//     printf("the swapped values are:%d and %d",x,y);
//     return 0;
// }
//ques-05 write a program to input a three digit number and display the sum of the digits
// #include<stdio.h>
// int main()
// {
//     int x,s=0;
//     printf("enter the number :");
//     scanf("%d",&x);
//     while(x!=0)
//     {
//         s=s+x%10;
//         x=x/10;
//     }
//     printf("the sum of the threr digit numbers is %d",s);
//     return 0;
//  } 
//ques-06 write a program to take a character as an input and display its ascii code
// #include<stdio.h>
// int main()
// {
//     char ch;
//     printf("enter the character:");
//     scanf("%c",&ch);
//     printf("The ascii code for the characters is:%d",ch);
//     return 0;
// }
//ques-07 write a program to find the position of first 1 in lsb..
// #include<stdio.h>
// int main()
// {
//    int x=8;
//    int result=0,count=0;
//    while(x!=0)
//    {
//     result=x&1;
//     count++;
//     if(result==1)
//     {
//         printf("%d",count);
//         break;
//     }
//     x=x>>1;
//    }
//    return 0;
// }
//ques-08 write a program to check whether a given number is even number or odd number
// #include<stdio.h>
// int main()
// {
//     int x;
//     printf("Enter a number to check whether a number is an odd number or an even number: ");
//     scanf("%d",&x);
//     if((x&1)==0)//masking technique
//     {
//         printf("even number");
//     }
//     else{
//         printf("odd number");
//     }
//     return 0;
// }
//ques-09 write a program to print the size of an int ,a float , a char and a double type variable..
// #include<stdio.h>
// int main()
// {
//     int i;
//     char ch;
//     float a;
//     double b;
//     printf("The size of int :%d bytes\n",sizeof(i));
//     printf("The size of char :%d bytes\n",sizeof(ch));
//     printf("The size of float :%d bytes\n",sizeof(a));
//     printf("The size of double :%d bytes\n",sizeof(b));
//     return 0;
// }
//ques-10 write a program to make last digit of a number stored in a vairbale as zero
// #include<stdio.h>
// int main()
// {
//     int x, s=0;
//     printf("Enter a number:");
//     scanf("%d",&x);
//     s=x/10;
//     s=s*10;
//     printf("The new number as required:%d",s);
//     return 0;
// }
//ques-11 write a program to input a number from the user and also input a digit append the digit in number and print resulting number..
// #include<stdio.h>
// int main()
// {
//     int x,s=0,a;
//     printf("enter a number:");
//     scanf("%d",&x);
//     printf("enter a digit that you want to append:");
//     scanf("%d",&a);
//     s=x/10;
//     s=s*10+a;
//     printf("The new number is:%d",s);

//     return 0;
// }
//ques-12:Assume the price of 1USD in 1INR 76.23. write a program to take amount in INR and convert it into USD.
// #include<stdio.h>
// int main()
// {
//     float x,s=0;
//     printf("Enter the amount in indian rupee:");
//     scanf("%f",&x);
//     s=x/76.23;
//     printf("The conversion is:%f USD",s);
//     return 0;
// }
//ques-13 write a program to take a three digit numbers from the user and rotate its digit by one position towards the right.
// #include<stdio.h>
// int main()
// {
//     int x,s=0,i=0,d=0;
//     printf("enter a number:");
//     scanf("%d",&x);
//     s=x%10;
//     // i=s*100+x/10;
//     i=x/10;
//     d=s*100+i;
//     printf("Number is rotated in the right by 1 digit:%d",d);
//     return 0;
// }