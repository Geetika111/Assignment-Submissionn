////*********************************Multidimensional Array in C Language**********************//
//ques-01 write a program to calculate the sum of two matrices each of order 3*3.
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int x[100][100],y[100][100],s[100][100];
//     int n,m,i,j;
//     printf("Enter the number of the rows:");
//     scanf("%d",&n);
//      printf("Enter the number of the columns:");
//     scanf("%d",&m);
//     // code for inserting the elements in the first array.
//     printf("enter the values in the first array:\n");
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<m;j++)
//         {
//             scanf("%d",&x[i][j]);
//         }
//         printf("\n");
//     }
//     // code for inserting the elements in the second array.
//       printf("\nenter the values in the second array:\n");
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<m;j++)
//         {
//             scanf("%d",&y[i][j]);
//         }
//         printf("\n");
//     }
//     //code for the sum of two matrices
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<m;j++)
//         {
//             s[i][j]=x[i][j]+y[i][j];
//         }
//         printf("\n");
//     }
//     //code for printing the sum of two matrices
//     printf("\n The sum of two matrices is:\n");
//      for(i=0;i<n;i++)
//     {
//         for(j=0;j<m;j++)
//         {
//             printf("%d  ",s[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
//ques-02 write a program to calculate the product of two matrices each of order 3*3.
// #include<stdio.h>
// #include<conio.h>
//  int main()
//  {
//     int i,j,k;
//     int sum=0;
//     int a[3][3]={1,2,3,4,5,6,7,8,9};
//     int b[3][3]={9,8,7,6,5,4,3,2,1};
//     int c[3][3];
//     //code for calculating the product of two elements.
//     for(i=0;i<=2;i++)
//     {
//         for(j=0;j<=2;j++)
//         {
//             for(k=0;k<=2;k++)
//             {
//                 sum=sum+(a[i][k]*b[k][j]);
//             }
//             c[i][j]=sum;
//             sum=0;
          
//         }
//     }
//     //print the product of both the arrays.
//     for(i=0;i<=2;i++)
//     {
//         for(j=0;j<=2;j++)
//         {
//             printf("%d ",c[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
//  }

//ques-03  Write a program in C to find the transpose of a given matrix.
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int a[30][30],i,j,n,m;
//     printf("enter the number of rows:");
//     scanf("%d",&n);
//     printf("enter the number of columns:");
//     scanf("%d",&m);
//     //insert the elements in the array
//     printf("enter the elements in the matrix:\n");
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<m;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//         printf("\n");
//     }
//     //printing the transpose of the matrix
//     printf("The transpose of the matrix is:\n");
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<m;j++)
//         {
//             printf("%d ",a[j][i]);
//         }
//         printf("\n");
    
//     }
//     return 0;

// }
//ques-04 Write a c program to find the sum of right diagonals of the matrics.
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int x[100][100],i,j,n,m;
//     printf("Enter the values of the rows:");
//     scanf("%d",&n);
//     printf("Enter the values of the columns:");
//     scanf("%d",&m);
//     //enter the values in the first array
//     printf("enter the values in the array:\n");
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<m;j++)
//         {
//             scanf("%d",&x[i][j]);
//         }
//         printf("\n");
//     }
//     int sum;
//     sum=x[0][0]+x[1][1]+x[2][2];
//     printf("The sum of the right diagonal of a matrix is :%d",sum);
//     return 0;
// }
//ques-05 Write a c program to find the sum of left diagonals of the matrics.
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int a[100][100],b[100][100],i,j,n,m;
//     printf("enter the value of the rows:");
//     scanf("%d",&n);
//     printf("enter the values of the columns:");
//     scanf("%d",&m);
//     printf("enter the values in the first array:\n");
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<m;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\nenter the values in the second array:\n");
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<m;j++)
//         {
//             scanf("%d",&b[i][j]);
//         }
//         printf("\n");
//     }
//     int sum;
//     sum=a[0][2]+a[1][1]+a[2][0]+b[0][2]+b[1][1]+b[2][0];
//     //the sum of all the left diagonals of the matrices
//     printf("The sum of the left diagonals of the matrices:%d",sum);
//     return 0;
// }
//ques=06. Write a program in C to find the sum of rows and columns of a Matrix.
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int a[100][100],i,j,n,m;
//     printf("enter the value of the rows:");
//     scanf("%d",&n);
//     printf("enter the values of the columns:");
//     scanf("%d",&m);
//     printf("enter the values in the first array:\n");
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<m;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//         printf("\n");
//     }
//     int sum=0;
//     //code for the sum of the rows.
//     printf("Sum of the rows:\n");
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<m;j++)
//         {
//           sum=sum+a[i][j];
          
//         }
//         printf("%d",sum);
//         sum=0;
//         printf("\n");
//     }
//      printf("Sum of the columns:\n");
//      for(i=0;i<n;i++)
//     {
//         for(j=0;j<m;j++)
//         {
//           sum=sum+a[j][i];
          
//         }
//         printf("%d",sum);
//         sum=0;
//         printf("\n");
//     }
//     return 0;
// }
//ques-07 . Write a program in C to print or display the lower triangular of a given matrix
// #include<stdio.h>
// #include<conio.h>
// int main()
// { 
//     int a[100][100],i,j,n,m;
//     printf("enter the value of the rows:");
//     scanf("%d",&n);
//     printf("enter the values of the columns:");
//     scanf("%d",&m);
//     printf("enter the values in the array:\n");
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<m;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//         printf("\n");
//     }
//     //code for printing the lower triangular matrix
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<m;j++)
//         {
//             if(j>i)
//             {
//                 a[i][j]=0;
//             }
//         }
//     }
//      printf("Displaying the lower-triangular matrix:\n");
//        for(i=0;i<n;i++)
//     {
//         for(j=0;j<m;j++)
//         {
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//ques-08 Write a program in C to print or display the upper triangular of a given matrix.
// #include<stdio.h>
// #include<conio.h>
// int main()
// { 
//     int a[100][100],i,j,n,m;
//     printf("enter the value of the rows:");
//     scanf("%d",&n);
//     printf("enter the values of the columns:");
//     scanf("%d",&m);
//     printf("enter the values in the array:\n");
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<m;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//         printf("\n");
//     }
//     //code for printing the lower triangular matrix
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<m;j++)
//         {
//             if(i>j)
//             {
//                 a[i][j]=0;
//             }
//         }
//     }
//      printf("Displaying the upper-triangular matrix:\n");
//        for(i=0;i<n;i++)
//     {
//         for(j=0;j<m;j++)
//         {
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
//ques09. Write a program in C to accept a matrix and determine whether it is a sparse matrix.
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int a[100][100],i,j,n,m;
//     printf("enter the value of the rows:");
//     scanf("%d",&n);
//     printf("enter the values of the columns:");
//     scanf("%d",&m);
//     printf("enter the values in the array:\n");
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<m;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//         printf("\n");
//     }
//     int count=0;
//     //code for counting the number of the zeroes.
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<m;j++)
//         {
//             if(a[i][j]==0)
//             {
//                 count++;
//             }
//         }
        
//     }
//     if(count>(m*n)/2)
//     {
//        printf("Sparse matrix");
//     }
//     else
//     {
//         printf("Dense matrix");
//     }
//     return 0;

// }
//ques-10 . Write a program in C to find the row with maximum number of 1s.
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int a[100][100];
//     int n,m,i,j;
//      int p[100][100];
//     printf("enter the number of the rows:");
//     scanf("%d",&n);
//     printf("enter the number of the columns:");
//     scanf("%d",&m);
//     int count=0,max=0,index=0;
//     //insert the elements in the array..
//     printf("enter the values in the array:");
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<m;j++)
//         {
//            scanf("%d",&a[i][j]);
//         }
//         printf("\n");
//     }
//     //code for checking the one's...
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<m;j++)
//         {
//             if(a[i][j]==1)
//             count++;
//             p[i][j]=count;
//         }
//         printf("The number of one's in a row: %d and %d",count,i);
//         count=0;
//         printf("\n");
//     }
//     for(i=0;i<n;i++)
//     {
//     for(j=0;j<m;j++)
//     {
//         if(p[i][j]>max){
//          max=p[i][j];
//          index=i;
//         }

//     }
//    }
//    printf("The maximum number of 1's are: %d and in row :%d",max,index);
//    return 0;
   
// }