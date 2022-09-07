//  ques -01 write a function to find the greatest number from the given array of any size.
// void large(int a[],int n);
// #include<stdio.h>
// int main()
// {
//      int a[100],i,n;
//      printf("enter the size of an array");
//      scanf("%d",&n);
//      printf("enter the values in the array");
//      for(i=0;i<n;i++)
//      {
//         scanf("%d",&a[i]);
//      }
//      large(a,n);
//      return 0;
// }
// void large (int b[],int N)
// {
//     int max=b[0];
//     for(int i=0;i<N;i++)
//     {
//         if(max<b[i])
//         {
//             max=b[i];
//         }
//     }
//     printf("the largest number in an array is:%d",max);
// }

// ques -02 write a function to find the smallest number from the given array of any size.
// void small(int a[],int n);
// #include<stdio.h>
// int main()
// {
//      int a[100],i,n;
//      printf("enter the size of an array");
//      scanf("%d",&n);
//      printf("enter the values in the array");
//      for(i=0;i<n;i++)
//      {
//         scanf("%d",&a[i]);
//      }
//      small(a,n);
//      return 0;
// }
// void small (int b[],int N)
// {
//     int min=b[0];
//     for(int i=0;i<N;i++)
//     {
//         if(min>b[i])
//         {
//             min=b[i];
//         }
//     }
//     printf("the smallest number in an array is:%d",min);
// }

//  ques-03 write a function to sort an array of any size.
// void sort(int a[],int n);
// #include<stdio.h>
// int main()
// {
//      int a[100],i,n;
//      printf("enter the size of an array");
//      scanf("%d",&n);
//      printf("enter the values in the array");
//      for(i=0;i<n;i++)
//      {
//         scanf("%d",&a[i]);
//      }
//      sort(a,n);
//      return 0;
// }
// void sort(int b[],int N ){
//     int i,j,temp=0;
//     for(i=0;i<N;i++)
//     {
//         for(j=i+1;j<N;j++)
//         {
//             if(b[i]>b[j])
//             {
//                 temp=b[i];
//                 b[i]=b[j];
//                 b[j]=temp;
//             }
//         }
//     }
//     for(i=0;i<N;i++)
//     {
//         printf("%d  ",b[i]);
//     }
// }
//ques-04  Write a function to rotate an array by n position in d direction. The d is an indicative 
//value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and 
//d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )
// #include<stdio.h>
// #include<conio.h>
// void PrintTheArray(int arr[], int n);
// void Rotate(int arr[], int d, int n);
// // Driver code
// int main()
// {
// 	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
// 	int N = sizeof(arr) / sizeof(arr[0]);
// 	int d = 2;

// 	// Function calling
// 	Rotate(arr, d, N);
// 	PrintTheArray(arr, N);

// 	return 0;
// }
// // Fuction to rotate array
// void Rotate(int arr[], int d, int n)
// {
// 	// Storing rotated version of array
// 	int temp[n];

// 	// Keepig track of the current index
// 	// of temp[]
// 	int k = 0;

// 	// Storing the n - d elements of
// 	// array arr[] to the front of temp[]
// 	for (int i = d; i < n; i++) {
// 		temp[k] = arr[i];
// 		k++;
// 	}

// 	// Storing the first d elements of array arr[]
// 	// into temp
// 	for (int i = 0; i < d; i++) {
// 		temp[k] = arr[i];
// 		k++;
// 	}

// 	// Copying the elements of temp[] in arr[]
// 	// to get the final rotated array
// 	for (int i = 0; i < n; i++) {
// 		arr[i] = temp[i];
// 	}
// }

// // Function to print elements of array
// void PrintTheArray(int arr[], int n)
// {
// 	for (int i = 0; i < n; i++) {

//         printf("%d",arr[i]);
//         printf(" ");
// 	}
// }





// ques 05 write a function to find the first occurence of adjacent duplicate values in the array
// int occu(int a[],int n);
// #include <stdio.h>
// int main()
// {
//     int a[100],n,k=0,i=0;
//     printf("enter the size of the array");
//     scanf("%d",&n);
//     printf("enter the elements in the array");
//     for(i=0;i<n;i++)
//     {   
//         scanf("%d",&a[i]);
//     }
//     k=occu(a,n);
//     printf("\n");
//     printf("The first occurence of adjacent duplicates :%d",k);
//     return 0;
// }
// int occu(int b[],int N)
// {
//     int i,p=0;
//     for(i=0;i<N;i++)
//     {
//         if (b[i]==b[i+1]){
//         p=i;
//         break;
//         }
//     }
//     return b[p];
// }
// ques-06 write a function in c language to read n number of values in an array and display it in reverse order.
// void reverse(int a[],int n);
// #include<stdio.h>
// int main()
// {
//      int a[100],i,n;
//      printf("enter the size of an array");
//      scanf("%d",&n);
//      printf("enter the values in the array");
//      for(i=0;i<n;i++)
//      {
//         scanf("%d",&a[i]);
//      }
//      reverse(a,n);
//      return 0;
// }
// void reverse(int b[],int N )
// {
//     int i=1;
//     for(i=N-i;i>=0;i--)
//     {
//         printf("%d ",b[i]);
//     }
// }

// ques -07 write a function in c to count a total number of duplicate elements in an array
// void duplicate(int a[],int n);
// #include<stdio.h>
// int main()
// {
//      int a[100],i,n;
//      printf("enter the size of an array");
//      scanf("%d",&n);
//      printf("enter the values in the array");
//      for(i=0;i<n;i++)
//      {
//         scanf("%d",&a[i]);
//      }
//      duplicate(a,n);
//      return 0;
// }
// void duplicate(int b[], int N)
// {
//    int i,j,count=0;
//     printf("The repeated elements are: ");
//     for(i=0;i<N;i++)
//     {

//         for(j=i+1;j<N;j++)
//         {
//             if(b[i]==b[j])
//             {
//                 count=count+1;
//                 printf(" %d  ",b[j]);
//             }
//         }

//     }
//     printf("\n");
//     printf("The total number of elements repeated :%d",count);

// }

// ques -08 write a function in c language to print all the unique elements in the array
// void unique(int a[],int n);
// #include<stdio.h>
//  int main()
// {
//    int a[100],n,i;
//    printf("enter the size of an array");
//    scanf("%d",&n);
//    printf("\n enter the values in the array ");
//    for(i=0;i<n;i++)
//    {
//     scanf("%d",&a[i]);
//    }
//    unique(a,n);
//    return 0;
// }
// void unique(int b[],int N)
// {
//     int c=0,d=0 ,count=0,k=0;
//     printf("unique values are :");
//     for(c=0;c<N;c++)
//     {
//         count=0;
//         for(d=0;d<N;d++)
//         { 
//             k=b[c];
//             if(b[c]==b[d])
//             count=count+1;
             
//         }
//           if(count==1)
//              printf("%d ",k);
          
//     }
// }




// ques-09 writea function in c language to merge two arrays of the same size sorted in descending order.

// void merge(int a[],int b[]);
// #include<stdio.h>
// int main()
// {
//     int a[]={1,5,6,7,8,9 };
//     int b[]={8,6,5,22,37,84};
//     merge(a,b);
//     return 0;
// }
// void merge(int c[],int d[])
// {
//      int i=0,k=0,j=0,temp=0,p[100];
//      for(i=0;i<12;i++)
//     {
//         if(i<6)
//         {
//             p[k]=c[i];
//             k++;
//         }
//         else
//         {
//             p[k]=d[j];
//             k++;
//             j++;
//         }
//     }
  
//     for(i=0;i<12;i++)
//     {
//         for(j=i+1;j<12;j++)
//         {
//             if(p[i]<p[j])
//             {
//                 temp=p[i];
//                 p[i]=p[j];
//                 p[j]=temp;
//             }
//         }
//     }
//     printf("The sorted array in descending order is:");
//     for(i=0;i<12;i++)
//     {
//         printf("%d ",p[i]);
//     }

// }
//ques-10 Write a function in C to count the frequency of each element of an array.
// #include<stdio.h>
// int main()
// {
// 	int  i, j, Count, n;	
// 	printf("\n Enter the number of elements in an array  :   ");
// 	scanf("%d", &n);               //Declare size array	
//     int a[n], Freq[n];            //Declare two arrays
// 	printf("\n Enter the elements of an Array  :  ");
// 	for (i = 0; i < n; i++)       //Initialize both the arrays
// 	{
//     	    scanf("%d", &a[i]);
//     	    Freq[i] = -1;         /* Initially initialize frequencies to -1 */
//    	}      
//    //Count the frequency of each element
// 	for (i = 0; i < n; i++)
// 	{
// 		Count = 1;
// 		for(j = i + 1; j < n; j++)
// 		{
//     		if(a[i] == a[j])    
//     		{
//     			Count++;
//     			Freq[j] = 0;    /* Make sure not to count frequency of same element again */
//     		}
//     	}
//     	if(Freq[i] != 0)        /* If frequency of current element is not counted */
//     	{
//     		Freq[i] = Count;
// 		}
// 	}
    
//  	printf("\n The Frequency of the elements in this Array is : \n");
//  	for (i = 0; i < n; i++)
//   	{
//   		if(Freq[i] != 0)        
//   		{
//   			printf("%d Occurs %d Times \n", a[i], Freq[i]);
// 		}		
//   	}	     
//  	return 0;
// }


