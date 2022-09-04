
//************************Assignment-10*************************//
//--------------------Functions in c language---------------------//
// ques-01 write a function to calculate the area of the circle
// float area(float);//Tsrs
// #include<stdio.h>
// int main()
// {
//     float r,s;
//     printf("Enter the radius of the circle:");
//     scanf("%f",&r);
//     s=area(r);//function call
//     printf("The area of the circle is:%f",s);
//     return 0;
// }
// float area (float a) //function definition
// {
//     return 3.14*a*a;
// }
// ques-02 write a function to calculate simple interest(tsrs)
// int simple(int,int,int);//function declaration
// #include<stdio.h>
// int main()
// {
//     int p,r,t,si;
//     printf("enter the principe amount:");
//     scanf("%d",&p);
//     printf("enter the rate:");
//     scanf("%d",&r);
//     printf("enter the time:");
//     scanf("%d",&t);
//     si=simple(p,r,t);//function call
//     printf("The simple interest is:%d",si);
//     return 0;
// }
// int simple(int x,int y,int z)
// {
//     return x*y*z;
// }
// ques-03 write a function to check whether a given number is even or odd, return 1 if the number is even ,otherwise return 0(tsrs)
// int evod(int);//function declaration
// #include<stdio.h>
// int main()
// {
//    int x,s     ;
//    printf("Enter a number to check whether it is even or odd:");
//    scanf("%d",&x);
//    s=evod(x);//function call
//    printf("The given number is :%d",s);
//    return 0;
// }
// int evod(int y)//function definition
// {
//     if(y%2==0)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }
// ques-04 write a function to print n natural numbers
// void natural(int);
// #include<stdio.h>
// int main()
// {
//     int x;
//     printf("enter a number:");
//     scanf("%d",&x);
//     natural(x);
//     return 0;
// }
// void natural(int y)
// {
//     int a=1;
//     while(a<=y)
//     {
//         printf("%d\n",a);
//         a++;
//     }
// }
// ques-05 write a function to print first n odd natural numbers
// void odd(int);
// #include<stdio.h>
// int main()
// {
//     int x;
//     printf("How many odd numbers you want to print:");
//     scanf("%d",&x);
//     odd(x);
//     return 0;
// }
// void odd(int y)
// {
//     int a=1 ;
//     while(a<=y)
//     {
//         printf("%d\n",2*a-1);
//         a++;
//     }
// }
// ques-06 write a function to calculate the factorial of a n(tsrs)
// int fact(int);
// #include<stdio.h>
// int main()
// {
//     int x,s=0;
//     printf("Enter a number of which you want the factorial of:");
//     scanf("%d",&x);
//     s=fact(x);
//     printf("The factrial of a number is:%d",s);
//     return 0;

// }
// int fact(int y)
// {
//     int a=1;
//     while(y>=1)
//     {
//         a=a*y;
//         y--;
//     }
//     return a;
// }
//ques-07 write a function to calculate the number of combination one can make from n times and r selected at a time
// #include<stdio.h> 
// long permutation(int n, int r);
// long combination(int n, int r);
// long factorial(int num);

// int main()
// {    
//     int n, r;

//     printf("Enter n: ");
//     scanf("%d", &n);

//     printf("Enter r: ");
//     scanf("%d", &r); 
//     printf("Combination = %ld", combination(n, r));

//     return 0; 
// }

// long combination(int n, int r)
// {
//     return permutation(n, r) / factorial(r);
// }

// long factorial(int num)
// {
//     long long fact = 1;

//     while(num > 0)
//     {
//         fact *= num;
//         num--;
//     }

//     return fact;
// }
//ques-08 write a function  to calculate the number of arrangement one can make from n items and r selected at a time.
// #include<stdio.h> 
// long permutation(int n, int r);
// long combination(int n, int r);
// long factorial(int num);

// int main()
// {    
//     int n, r;

//     printf("Enter n: ");
//     scanf("%d", &n);

//     printf("Enter r: ");
//     scanf("%d", &r);

//     printf("Permutation = %ld\n", permutation(n, r));    
//     printf("Combination = %ld", combination(n, r));

//     return 0; 
// }

// long permutation(int n, int r)
// {
//     return factorial(n) / factorial(n-r);
// }

// long combination(int n, int r)
// {
//     return permutation(n, r) / factorial(r);
// }

// long factorial(int num)
// {
//     long long fact = 1;

//     while(num > 0)
//     {
//         fact *= num;
//         num--;
//     }

//     return fact;
// }
// ques-09 write a function to check whether a given number contains a given digit or not
//(tsrs)
// int check(int,int);
// #include<stdio.h>
// int main()
// {
//     int x,y,s=0;
//     printf("enter the number:");
//     scanf("%d",&x);
//     printf("enter a number that you want to check:");
//     scanf("%d",&y);
//     s=check(x,y);
//     printf("The result is:%d",s);
//     return 0;
// }
// int check (int a,int b)
// {
//     int s=0,count=0;
//     while(a!=0)
//     {
//         s=a%10;
//         if(s==b)
//         {
//             count++;
//             break;
//         }
//         a=a/10;
//     }
//     if(count==1)
//     {
//         return 1;//1 is for yes.
//     }
//     else
//     {
//         return 0;//0 is for not.
//     }
// }
//ques-10 write a function to print all the prime factors of a given numner.
// #include<stdio.h>
// void primefact(int );
// int main()
// {
//     primefact(36);
//     return 0;
// }
// void primefact(int n)
// {
//     int i;
//     for(i=2;n!=1;i++)
//     {
//         while(n%i==0)
//         {
//             n=n/i;
//             printf("%d",i);
//         }
//     }
// }