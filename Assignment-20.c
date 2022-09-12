//**********************Pointers***************************************//
//ques-01 Write a program to swap values of two int variables by calling function
// void swap(int *,int *);
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int a,b;
//     printf("Enter two numbers:");
//     scanf("%d%d",&a,&b);
//     swap(&a,&b);//function calling
//     printf("The swapped numbers are:%dand%d",a,b);
//     return 0;

// }
// void swap(int *p,int *q)//pointer variables
// {
//     int c;
//     c=*p; //swapping..
//     *p=*q;
//     *q=c;
// }
//ques-02 write a function to swap the strings of two char arrays of calling functions(tsrs).

// void swap(char** ptr1, char** ptr2)
// {
//     char * temp = *ptr1;
//     *ptr1 = *ptr2;
//     *ptr2 = temp;
// }
// int main()
// {
//     char *str1 = "geetika";
//     char *str2 = "sharma";
//     printf("%s : %s\n", str1, str2);
//     swap(&str1, &str2);
//     printf("%s : %s\n", str1, str2);
// }
//ques=-03 write a function to sort an array.
// void sort (int *ptr,int size);
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int a[100],n;
//     printf("Enter the size of an array:");
//     scanf("%d",&n);
//     printf("enter the elements in the array:");
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     sort(a,n);
//     return 0;
// }
// void sort (int *ptr,int size)
// {
//      int i,j,temp ;
//      for(i=0;i<size-1;i++)
//      {
//         for(j=i;j<size;j++)
//         {
//             if(ptr[i]>ptr[j])
//             {
//                 temp=ptr[i];
//                 ptr[i]=ptr[j];
//                 ptr[j]=temp;
//             }
//         }
//      }
//      for(i=0;i<size;i++)
//      {
//       printf("%d ",*(ptr+i));
//      }
     
// }
//ques-04 write a program in c language to demonstrate how to handle pointers in  programs.
// #include<stdio.h>
// int main()
// {
//     int x=10,*p,**q,***r;
//     p=&x;
//     q=&p;
//     r=&q;
//     printf("%d%d%d%d\n",x,*p,**q,***r);
//     printf("%d%d%d%d\n",&x,p,*q,**r);
//     printf("%d%d%d",&p,q,*r);
//     printf("%d%d",*q,r);
//     printf("%d",&r);
//     retrun 0;
// }
//ques-05 write a program to find maximum number between two numbers..
// #include<stdio.h>
// void great(int *,int *);
// #include<conio.h>
// int main()
// {
//     int a,b   ;
//     printf("Enter two numbers:");
//     scanf("%d%d",&a,&b);
//     great(&a,&b);
//     return 0;
// }
// void great(int *p,int *q)
// {
//     if(*p>*q)
//     {
//         printf("%d is greater",*p);
//     }
//     else
//     {
//          printf("%d is greater",*q);
//     }
// }
//ques-06 Write a program to calculate the length of the string using a pointer
// #include<stdio.h>
// #include<conio.h>
// void Length(char *);
// int main()
// {
//     char str[8]="malyalam";
//     //character array storing the string..
//     Length(str);
//     return 0;
// }
// void Length(char *s)
// {
//     int count=0;
//     for(int i=0;s[i];i++)
//     {
//         count++;
//     }
//     printf("The length of string is %d",count-1);
// }
//ques-07 Write a program to count the number of vowels and consonants in a string using a pointer..
// void count(char *);//function prototype..
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     char s[8]="malyalam";//character array.
//     count(s);//passing string.
//     return 0;
// }
// void count(char *str)//Function definition..
// {
//     int vowels=0,consonants=0;
//     for(int i=1;str[i]!='\0';i++)
//     {
//         if(*(str+i)=='a'||*(str+i)=='e'||*(str+i)=='i'||*(str+i)=='o'||*(str+i)=='u'||*(str+i)=='A'||*(str+i)=='E'||*(str+i)=='I'||*(str+i)=='O'||*(str+i)=='U')
//         {
//             vowels++;
//         }
//         else
//         {
//            consonants++; 
//         }
//     }
//     printf("The number of the vowels :%d",vowels);
//     printf("\nThe number of the consonants :%d",consonants);
  
// }
//ques-08 write a program to computer the sum of all the elements in an array using pointers
// #include<stdio.h>
// #include<conio.h>
// void passarray(int *,int size);
// int main()
// {
//     int a[100];
//     int n,i;
//     printf("enter the size of an array:");//size of an array
//     scanf("%d",&n);
//     // enter the values in the array.
//     printf("\n enter the values in the array: ");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     passarray(a,n);
//     return 0;

// }
// void passarray(int *b,int size)
// {
//     int sum=0,i;
//     for( i=0;i<size;i++)
//     {
//         sum=sum+*(b+i);
//     }
//     printf("The sum of all the elements in the array is:%d",sum);

// }
//ques-09 write a program to print the elements of an array in reverse order
// void reverse(int *,int size);//function declaration..
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int a[100];
//     int n,i;
//     printf("enter the size of an array:");//size of an array
//     scanf("%d",&n);
//     // enter the values in the array.
//     printf("\n enter the values in the array: ");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     reverse(a,n);//function calling
//     return 0;
// }
// void reverse(int *b,int size)//function definition...
// {
//     int i;
//     for(i=size-1;i>=0;i--)
//     {
//         printf("%d ",*(b+i));
//     }
    
// }
// ques-10 write a program to print a string in reverse using a  pointer..
// void string(char *);
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//      char str[8]="malyalap";
//     //character array storing the string..
//     string(str);
//     return 0;
// }
// void string(char *s)
// {
//     int count=0;
//     for(int i=0;s[i];i++)
//     {
//         count++;
//     }
//     printf("The reversed string is: ");
//     for(int i=count-2;i>=0;i--)
//     {
//         printf("%c ",*(s+i));//reversed string 
//     }
// }