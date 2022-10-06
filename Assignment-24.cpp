// ques-01. Define a function to check whether a given number is a Prime number or not.
//  void< prime(int);
//#include<iostream>
// using namespace std;
//  int main()
//  {
//      int x;
//    cout<<"enter the number";
//    cin>>x;
//      prime(x);
//      return 0;
//  }
//  void prime(int a)
//  {
//      int i,j   ;
//      cout<<"The prime numbers are:\n";
//      for(i=2;i<a;i++)
//      {
//          for(j=2;j<=i;j++)
//          {
//              if(i%j==0)
//              break;
//          }
//          if(i==j)
//          {
//             cout<<i;
//          }
//      }

// }
// ques-02. Define a function to find the highest value digit in a given number.
// #include <iostream>
// using namespace std;
// void high(int n)
// {
//     int max=0;
//     int a=n%10;
//     while(n!=0)
//     {
//        if(max<=a)
//        {
//         max=a;
//        }
//         n=n/10;
//         a=n%10;
       
//     }
//     cout<<"The maximum number is:"<<max;
// }
// int main()//driver code
// {
//     int b;
//    cout<<"Enter the number:";
//    cin>>b;
//    high(b);
//    return 0;
// }
// ques-03  Define a function to calculate x raised to the power y.
// #include <stdio.h>
// void raise(int, int);
// int main()
// {
//     int a, b;
//     cout<<"enter the base number:";
//     cin>>a;
//     scanf("%d", &a);
//     cout<<"enter the power number:";
//     cin>>b;
//     raise(a, b);
//     return 0;
// }
// void raise(int c, int d)
// {
//     int e=1,i;
//     for(i=1;i<=d;i++)
//     {
//         e=e*c;
//     }
//     cout<<"The x raised to power y is:"<<e;
// }

// ques-04. Define a function to print Pascal Triangle up to N lines
// #include<iostream>
// using namespace std;
//  void pascal(int);
//  int comb(int,int);
//  int fact(int);
//  int main()
//  {
//     pascal(6);
//     return 0;
//  }
//  void pascal(int n)
//  {
//      for(int i=0;i<=n;i++)
//      {
//          for(int j=0;j<=i;j++)
//          {
//            cout<< comb(i,j);
//          }
//         cout<< endl;
//        }
//  }
//  int comb(int n,int r)
//  {
//      return fact(n)/(fact(r)*fact(n-r)) ;
//  }
//  int fact(int b)
//  {
//      int fac=1;
//      while(b>=1)
//      {
//          fac=fac*b;
//          b--;
//      }
//      return fac;
//  }
// ques -05. Define a function to check whether a given number is a term in a Fibonacci series or
// not.
//  #include <iostream>
//  using namespace std;
// void fibonacci();
//  int main()//driver code;
//  {
//  fibonacci();
// return 0;
//
// }
// void fibonacci()
//  {
//     int n, n1, n2, n3, a;
// cout<<"Enter a number how many numbers you want in the series:";
//     cin>>n;
// cout<< "enter the number that you want to find in the fibonacci series:"
//     cin>>a;
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
//     cout<<" is avialable in the series"<<a;
//     else
//     cout<<" is not avialable in the series"<<a;
// }
// ques06 write a function to swap data of two int variables using call by reference.
// int swap(int &,int &);//function decalartion for call by reference
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b;
//     cout<<"enter the first number";
//     cin>>a;
//     cout<<"enter the second number";
//     cin>>b;
//     cout<<"Swapped values are :";
//     swap(a,b);
//     cout<<a<<b;
//     return 0;
// }
// int swap(int &m,int &n)
// {
//    int temp=0;
//    temp=m;
//    m=n;
//    n=temp;
// }

// ques-07 write a function using default arguments that is able to add 2 or 3 numbers
//  int add(int,int,int=0);
//  #include<iostream>
//  using namespace std;
//  int main()
//  {
//      int a,b,c;
//      cout<<"enter the first number";
//      cin>>a;
//      cout<<"enter the second number";
//      cin>>b;
//      cout<<"sum is :"<<add(a,b);//function for passing two variables
//      cout<<endl;//for next line
//      cout<<"enter three values:";
//      cin>>a>>b>>c;
//      cout<<"sum of three numbers :"<<add(a,b,c);
//      cout<<endl;
//      return 0;
//  }
//  int add(int x,int y,int z)
//  {
//      return x+y+z;
//  }
// ques-08- Define overloaded functions to calculate area of circle, area of rectangle and area of
// triangle
//  #include<iostream>
//  using namespace std;
//  void area(double a)
//  {
//      double c;
//      c=3.14*a*a;
//      cout<<"Area of circle is :"<<c;
//  }
//  void area(int a,int b)
//  {
//      int d;
//      d=a*b;
//      cout<< endl;
//      cout<<"Area of rectangle is:"<<d;
//      cout<< endl;
//  }
//  void area(double a,double b)
//  {
//      double c;
//      c=(a*b)/2;
//      cout<<"Area of triangle is:"<<c;
//  }
//  //Driver code
//  int main()
//  {
//      area(3.5);//for area of circle.
//      area(3,4);//for area of rectangle.
//      area(5.6,7.5);//for area of triangle.
//  }
//  ques-09. Write functions using function overloading to find a maximum of two numbers and
// both the numbers can be integer or real.
//  #include<iostream>
//  using namespace std;
//  void max(int a,int b)
//  {
//      if(a>b)
//      {
//          cout<<a<<" is greater.";
//      }
//      else
//      {
//          cout<<b<<" is greater.";
//      }
//  }
//  void max(double c,double d)
//  {
//      if(c>d)
//      {
//          cout<< endl;
//          cout<<c<<" is greater.";
//      }
//      else
//      {
//          cout<< endl;
//          cout<<d<<" is greater.";
//      }
//  }
//  //Driver code
//  int main()
//  {
//      max(8,10);
//      max(10.5,9.5);
//  }
//  ques 10. Write functions using function overloading to add two numbers having different data
// types
//  #include <iostream>
//  using namespace std;

// void add(int a, int b)
// {
// cout << "sum = " << (a + b);
// }

// void add(double a, double b)
// {
// 	cout << endl << "sum = " << (a + b);
// }

// int main()
// {
// 	add(10, 2);
// 	add(5.3, 6.2);

// 	return 0;
// }
