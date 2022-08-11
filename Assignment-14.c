// Ques -01 write a program to calculate the sum of the number stored in an array
// #include<stdio.h>
// int main()
// {
//     int a[10],i,s=0;
//     printf("enter the values in the array");
//     for(i=0;i<10;i++)
//     {
//         scanf("%d",&a[i]);
//         s=s+a[i];
//     }
//     printf("The Sum of the number stored in an array of size 10 is %d",s);
//     return 0;
// }


// ques 02 write a program to calculate the average of a number stored in an array of size 10

// #include<stdio.h>
// int main()
// {
//     int a[10],i=0,s=0;
//     float avg=0;
//     printf("enter the values in an array");
//     for(i=0;i<10;i++)
//     {
//         scanf("%d",&a[i]);
//         s=s+a[i];
//     }
//     avg=s/10.0;
//     printf("The avg of the number stored in an array is %f",avg);
//     return 0;
// }

// ques 03-wap to calculate the sum of all the even numbers and all the off numbers in the array

// #include<stdio.h>
// int main()
// {
//     int a[10],e=0,od=0,i;
//     printf("enter the values in the array");
//     for(i=0;i<10;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<10;i++)
//     {
//        if(a[i]%2==0)
//        {
//         e=e+a[i];
//        }
//        else{
//         od=od+a[i];
//        }
//     }
//     printf("sum of even values in the array: %d",e);
//     printf("\n");
//     printf("sum of all the odd values in the array:%d",od);
//     return 0;

// }

// ques -04 wap to find the greatest number stored in array size 10 take array from the users
// #include<stdio.h>
// int main()
// {
//     int i,j,a[100],Max =-2;
//     printf("Enter the number in the array: ");
//     for(i=0;i<10;i++)
//     {
//         scanf("%d",&a[i]);
//     }
// 
//     for(int i=0;i<N;i++)
    // {
    //     if(max<a[i])
    //     {
    //         max=a[i];
    //     }
    // }
//     
//     printf("The greatest number in the array is %d",Max);
//     return 0;
// }

// ques -05 wap to print the smallest number stored in an array of size 10 . Take array values from the user.
// #include<stdio.h>
// #include <stddef.h>
// int main()
// {
//     int  i,j,a[100],Min=-2;
//     printf("enter the values in the array :" );
//     for(i=0;i<10;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//         for(i=0;i<10;i++){
//             if(Min>a[i])
//             {
//                 Min = a[i];
//             }
//         }
//     
//     printf("The smallest number in the array is %d",Min);
//     return 0;
// }

// ques 06: wap to sort elements in an array of size 10.
//   #include<stdio.h>//doubt
//  int main()
//  {
//      int n;
//      int a[100],i,temp=0,j;
//      printf("enter the size of an array :");
//      scanf("%d",&n);
//      printf("enter the values in the array: ");
//      for(i=0;i<n;i++)
//      {
//          scanf("%d",&a[i]);
//      }
//      for(i=0;i<n;i++)
//      {
//          for(j=i+1;j<n;j++)
//          {
//              if(a[i]>a[j])
//              {
//                  temp=a[i];
//                  a[i]=a[j];
//                  a[j]=temp;
//              }
//          }
//      }
//      for(i=0;i<n;i++)//sorted array is here
//      {

//         printf("%d ",a[i]);
//     }
//     return 0;
// }


// ques -07 find the second largest number in the array.Take the array elements from the user.

// #include <stdio.h>
// int main()
// {
//     int a[100], i, n, largest = 0, s_largest = 0;
//     printf("enter the size of the array: ");
//     scanf("%d", &n);
//     printf("enter the values in the array : ");
//     for (i = 0; i <= n - 1; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     largest = a[0];
//     for (i = 0; i <= n - 1; i++)
//     {
//         if (a[i + 1] > largest)
//         {
//             s_largest=largest;
//              largest=a[i+1];
             
//         }
//         else
//         {
//             if(a[i+1]>s_largest&&a[i+1]<largest)
//             {
//                s_largest=a[i+1];
//             }
//         }
//     }
//     printf("The largest value in the array is :%d\n",largest);
//     printf("The second largest value in the array is:%d",s_largest);
//     return 0;
// }


// ques -08 find the second smallest number in the array.Take the array elements from the user.


// #include <stdio.h>
// int main()
// {
//     int a[100], i, n, smallest = 0, s_smallest = 0;
//     printf("enter the size of the array: ");
//     scanf("%d", &n);
//     printf("enter the values in the array : ");
//     for (i = 0; i <= n - 1; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     smallest = a[0];
//     s_smallest=a[0];
//     for (i = 0; i < n - 1; i++)
//     {
//         if (a[i + 1] <smallest)
//         {
//             s_smallest=smallest;
//              smallest=a[i+1];
             
//         }
//         else
//         {
//             if(a[i+1]<s_smallest&&a[i+1]>smallest)
//             {
//                s_smallest=a[i+1];
//             }
//         }
//     }
//     printf("The smallest value in the array is :%d\n",smallest);
//     printf("The second smallest value in the array is:%d",s_smallest);
//     return 0;
// }

// ques 09:wap to print the array in reverse order

// #include <stdio.h>

// int main()
// {
//     int a[100],n,i;
//     printf("enter the size of an array : ");
//     scanf("%d",&n);
//     printf("enter the values in the array :");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("The reversed array is : ");
//     for(i=n-1;i>=0;i--)
//     {
//         printf("%d  ",a[i]);
//     }
//     return 0;
    
// }


// ques -10 wap to copy the elements of one array in the another array
// #include<stdio.h>
// int main()
// {
//     int a[100],b[100],i,j;
//     printf("enter the elements in the array");
//     for(i=0;i<10;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<10;i++)
//     {
//         b[i]=a[i];
//     }
//     for(i=0;i<10;i++)
//     {
//         printf("%d ",b[i]);
//     }
//     return 0;
// }