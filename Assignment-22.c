//**************************************DMA***********************************//
//ques01. Define a function to input variable length string and store it in an array without
//memory wastage.
// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// int main()
// {
//     char *str,c;
//     int i=0,j=1;
//     str=(char *)malloc(sizeof(char));
//     printf("enter the string:");
//     while(c!='\n')
//     {
//         c=getc(stdin);
//         i++;
//         str=(char *)(realloc(str,j*(sizeof(char))));
//         str[i]=c;
//     }
//     str[i]='\0';
//     printf("The entered string is:%s",str);
//     free(str);
//     return 0;
// }
//ques-02 Write a program to ask the user to input a number of data values he would like to
//enter then create an array dynamically to accommodate the data values. Now take
//the input from the user and display the average of data value.
// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// int main()
// {
//   int *ptr,c;
//   int i=0,size=0,sum=0;
//   printf("enter the size of array:");
//   scanf("%d",&size);
//   ptr=(int *)calloc(size,sizeof(int));
//   if(ptr==Null)
//   {
//     printf("Memory Allocation Failed\n");
//     return 0;
//   }
//   printf("\nThe entered %d value \n",size);
//   for(i=0;i<size;i++)
//   {
//     scanf("%d",ptr+i);
//   }
//   for(i=0;i<size;i++)
//   {
//     sum=sum+*(ptr+i);
//   }
//   printf("Average is %d\n",sum/size);
//   free(ptr);
//   retrun 0;
// }
//ques-03. Write a program to calculate the sum of n numbers entered by the user using malloc
//and free.
// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// int main()
// {
//   int *ptr,c;
//   int i=0,size=0,sum=0;
//   printf("enter the size of array:");
//   scanf("%d",&size);
//   ptr=(int *)calloc(size,sizeof(int));
//   if(ptr==Null)
//   {
//     printf("Memory Allocation Failed\n");
//     return 0;
//   }
//   printf("\nThe entered %d value \n",size);
//   for(i=0;i<size;i++)
//   {
//     scanf("%d",ptr+i);
//   }
//   for(i=0;i<size;i++)
//   {
//     sum=sum+*(ptr+i);
//   }
//   printf("sum is %d\n",sum/size);
//   free(ptr);
//   retrun 0;
// }
//ques-04. Write a program to input and print text using dynamic memory allocation.
//#include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// int main()
// {
//     char *str,c;
//     int i=0,j=1;
//     str=(char *)malloc(sizeof(char));
//     printf("enter the string:");
//     while(c!='\n')
//     {
//         c=getc(stdin);
//         i++;
//         str=(char *)(realloc(str,j*(sizeof(char))));
//         str[i]=c;
//     }
//     str[i]='\0';
//     printf("The entered string is:%s",str);
//     free(str);
//     return 0;
// }
//ques -05. Write a program to read a one dimensional array, print sum of all elements along with
//inputted array elements using dynamic memory allocation.
//   #include<stdio.h> 
//     #include<stdlib.h> 
//     int main() { 
//     	int arr_size, *arr, max, min; 
     
//     	printf("\nEnter size of the array: "); 
//     	scanf("%d", &arr_size); 
     
//     	arr = (int*) calloc(arr_size, sizeof(int)); 
     
//     	printf("\nEnter the array: "); 
//     	for(int i = 0; i < arr_size; i++) { 
//     		scanf("%d", (arr+i)); 
//     	}
//       printf("\n The array is:");
//        for(int i = 0; i < arr_size; i++)
//       {
//             printf("%d ",*(arr+i));
//        }
//    return 0;
//    } 
//ques-6. Write a program in C to find the largest element using Dynamic Memory Allocation.
// C program for the above approach
// #include <stdio.h>
// #include <stdlib.h>

// // Function to find the largest element
// // using dynamic memory allocation
// void findLargest(int* arr, int N)
// {
//  int i;

//  // Traverse the array arr[]
//  for (i = 1; i < N; i++) {

//   // Update the largest element
//   if (*arr < *(arr + i)) {
//    *arr = *(arr + i);
//   }
//  }

//  // Print the largest number
//  printf("%d ", *arr);
// }

// // Driver Code
// int main()
// {
//  int i, N = 4;

//  int* arr;

//  // Memory allocation to arr
//  arr = (int*)calloc(N, sizeof(int));

//  // Condition for no memory
//  // allocation
//  if (arr == NULL) {
//   printf("No memory allocated");
//   exit(0);
//  }

//  // Store the elements
//  *(arr + 0) = 14;
//  *(arr + 1) = 12;
//  *(arr + 2) = 19;
//  *(arr + 3) = 20;

//  // Function Call
//  findLargest(arr, N);
//  return 0;
// }

//ques-07 Write a program to demonstrate memory leak in C.
// #include<stdio.h>
// #include<conio.h>
// void f1()
// {
//     int *ptr=(int *)malloc(sizeof(int));
//     //we did not free up the memory of ptr pointer..
//     ptr=NULL;(memory allocate to kradi pr use free nahi kara.)
//     ptr mai null daldia toh ab us memory ko koi point nahi kr rha h .
//     return 0;
// }
//ques-08 Write a program to demonstrate dangling pointers in c.
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int *ptr;
//    ptr=(int *)malloc(sizeof(int));
//     *ptr=10;
//    printf("Before Free:%d\n",*ptr);
//     free(ptr);
//    printf("After free :%d\n",*ptr);
//    retrun 0;
// }
//ques-09. Write a program to allocate memory dynamically of the size in bytes entered by the
//user. Also handle the case when memory allocation is failed.
// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// int main()
// {
//     int n;
//     printf("Enter the number how many bytes you want to reserve dynamically:");
//     scanf("%d",&n);
//     int *ptr;
//     ptr=(int *)malloc(n*(sizeof(int)));
//     if(ptr==NUll)
//     {
//         printf("Memory Allocation Failed\n");
//          return 0;
//     }
//     else
//     {
//         *ptr=10;
//     }
//     printf("%d",*ptr);
//     return 0;
// }
//ques-10 Find out the maximum and minimum from an array using dynamic memory allocation
//in C
   // C program for the above approach
   //  #include<stdio.h> 
   //  #include<stdlib.h> 
   //  int main() { 
   //  	int arr_size, *arr, max, min; 
     
   //  	printf("\nEnter size of the array: "); 
   //  	scanf("%d", &arr_size); 
     
   //  	arr = (int*) calloc(arr_size, sizeof(int)); 
     
   //  	printf("\nEnter the array: "); 
   //  	for(int i = 0; i < arr_size; i++) { 
   //  		scanf("%d", (arr+i)); 
   //  	} 
     
   //  	printf("\nThe array is: "); 
   //  	for(int i = 0; i < arr_size; i++) { 
   //  		(i != arr_size - 1) ? printf("\t%d", *(arr+i)) : 		printf("\t%d\n", *(arr+i)); 
   //  	} 
     
   //  	max = arr[0]; 
   //  	for(int i = 0; i < arr_size; i++) { 
   //  		if(max < arr[i]) { 
   //  			max = arr[i]; 
   //  		} 
   //  	} 
     
   //  	min = arr[0]; 
   //  	for(int i = 0; i < arr_size; i++) { 
   //  		if(min > arr[i]) { 
   //  			min = arr[i]; 
   //  		} 
   //  	} 
     
   //  	printf("\nMaximum and minimum numbers in the array are: %d, %d\n", max, min); 
   //  } 