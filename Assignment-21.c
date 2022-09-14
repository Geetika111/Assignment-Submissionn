//***********************************Structures**************************************//
//ques-01 Define a structure employee with member variable id,name,salary.
// #include<stdio.h>
// #include<conio.h>
// int main()
// { 
    //local  defintion...S
//     struct employee //defining a structure..
//     {
//         int id;
//         char Name[20];
//         float salary;
//     }e;
// }
//ques-02 Write a function to take the input employee data from the user
// #include<stdio.h>
// #include<conio.h>
// struct employee input();
//  struct employee //global definition..
//     {
//         int id;
//         char Name[20];
//         float salary;
//     };
// int main()
// {
//     struct employee e;
//     e=input();//passing struct as an argument
// }
// struct employee input()
// {
//     struct employee e1;
//     printf("Enter the id,name,and the salary of the employee:");
//     scanf("%d",&e1.id);
//     fflush(stdin);
//     fgets(e1.Name,20,stdin);
//     scanf("%f",&e1.salary);
//     return e1;
// }
//ques-03 Write a function to display employee data .(refer from ques-01)
// #include<stdio.h>
// #include<conio.h>
// struct employee input();
// void display(struct employee e2);
//  struct employee //global definition..
//     {
//         int id;
//         char Name[20];
//         float salary;
//     };
// int main()
// {
//     struct employee e;
//     e=input();//passing struct as an argument
//     display(e);
// }
// struct employee input()
// {
//     struct employee e1;
//     printf("Enter the id,name,and the salary of the employee:");
//     scanf("%d",&e1.id);
//     fflush(stdin);
//     fgets(e1.Name,20,stdin);
//     scanf("%f",&e1.salary);
//     return e1;
// }
// void display(struct employee e2)
// {
//     printf("\n%d %s %f",e2.id,e2.Name,e2.salary);
// }
//ques-04 write a function to find highest salary employee from a given array of 10 employee(refer structure from question 1).

// #include<stdio.h>
// #include<conio.h>
// struct employee input();//global declaration..
// void display(struct employee e2);
//    struct employee //global definition..
//     {
//         int id;
//         char Name[20];
//         float salary;
//     };
//     int main()
//     {
//         struct employee e[10];
//         int i;
//         for(i=0;i<=4;i++)
//         {
//             e[i]=input();
//         }
//         for(i=0;i<=4;i++)
//         {
//             display(e[i]);
//             printf("\n");
//         }
//           int temp=0;
//     temp=e[0].salary;
//     for(i=0;i<5;i++)
//     {
//       if(temp<=e[i+1].salary)
//       {
//         temp=e[i+1].salary;
//       }
//     }
//     printf("The Highest salary is:%d",temp);
//         return 0;
//     }
//      struct employee input()
//    {
//     struct employee e1;
//     printf("Enter the id,name,and the salary of the employee:");
//     scanf("%d",&e1.id);
//     fflush(stdin);
//     fgets(e1.Name,20,stdin);
//     scanf("%f",&e1.salary);
//     return e1;
//    }
// void display(struct employee e2)
// {
//     printf("\n%d %s %f",e2.id,e2.Name,e2.salary);
// }
//ques-05 Write a function to sort employees according to their salaries [ refer structure from
//question 1
// #include<stdio.h>
// #include<conio.h>
// struct employee input();//global declaration..
// void display(struct employee e2);
//    struct employee //global definition..
//     {
//         int id;
//         char Name[20];
//         float salary;
//     };
//     int main()
//     {
//         struct employee e[10];
//         int i;
//         for(i=0;i<=4;i++)
//         {
//             e[i]=input();
//         }
//         for(i=0;i<=4;i++)
//         {
//             display(e[i]);
//             printf("\n");
//         }
//           int r,temp=0;
//           for(r=1;r<=4;r++)
//           {
//             for(i=0;i<=5-1-r;i++)
//             {
//                 if(e[i].salary>e[i+1].salary)
//                 {
//                     temp=e[i].salary;
//                     e[i].salary=e[i+1].salary;
//                     e[i+1].salary=temp;
//                 }
//             }
//           }
//           for(i=0;i<5;i++)
//           {
//             printf("%f ",e[i].salary);
//           }
//     }
//      struct employee input()
//    {
//     struct employee e1;
//     printf("Enter the id,name,and the salary of the employee:");
//     scanf("%d",&e1.id);
//     fflush(stdin);
//     fgets(e1.Name,20,stdin);
//     scanf("%f",&e1.salary);
//     return e1;
//    }
// void display(struct employee e2)
// {
//     printf("\n%d %s %f",e2.id,e2.Name,e2.salary);
// }
//ques-06 Write a function to sort employees according to their names [refer structure from
//question 1]
// #include<string.h>
// #include<stdio.h>        
// #include<conio.h>
// struct employee input();//global declaration..
// void display(struct employee e2);
//    struct employee //global definition..
//     {
//         int id;
//         char Name[20];
//         float salary;
//     };
//     int main()
//     {
//         struct employee e[10],temp;
//         int i;
//         for(i=0;i<=4;i++)
//         {
//             e[i]=input();
//         }
//         for(i=0;i<=4;i++)
//         {
//             display(e[i]);
//             printf("\n");
//         }
//           int j;
//           for(i=0;i<4;i++)
//           {
//             for(j=i;j<5;j++)
//             {
//                 if(strcmp(e[i].Name,e[j].Name))
//                 {
//                     temp=e[i];
//                     e[i]=e[j];
//                     e[j]=temp;
//                 }
//             }
//           }
//           for(i=0;i<5;i++)
//           {
//             printf(" id=%d,name=%s,salary=%f",e[i].id,e[i].Name,e[i].salary);
//           }
//     }
//      struct employee input()
//    {
//     struct employee e1;
//     printf("Enter the id,name,and the salary of the employee:");
//     scanf("%d",&e1.id);
//     fflush(stdin);
//     fgets(e1.Name,20,stdin);
//     scanf("%f",&e1.salary);
//     return e1;
//    }
// void display(struct employee e2)
// {
//     printf("\n%d %s %f",e2.id,e2.Name,e2.salary);
// }
//ques-07 Write a program to calculate the difference between two time periods.
// #include <stdio.h>
// struct TIME {
//    int seconds;
//    int minutes;
//    int hours;
// };

// void differenceBetweenTimePeriod(struct TIME t1,
//                                  struct TIME t2,
//                                  struct TIME *diff);

// int main() {
//    struct TIME startTime, stopTime, diff;

//    printf("Enter the start time. \n");
//    printf("Enter hours, minutes and seconds: ");
//    scanf("%d %d %d", &startTime.hours,
//          &startTime.minutes,
//          &startTime.seconds);

//    printf("Enter the stop time. \n");
//    printf("Enter hours, minutes and seconds: ");
//    scanf("%d %d %d", &stopTime.hours,
//          &stopTime.minutes,
//          &stopTime.seconds);

//    // Difference between start and stop time
//    differenceBetweenTimePeriod(startTime, stopTime, &diff);
//    printf("\nTime Difference: %d:%d:%d - ", startTime.hours,
//           startTime.minutes,
//           startTime.seconds);
//    printf("%d:%d:%d ", stopTime.hours,
//           stopTime.minutes,
//           stopTime.seconds);
//    printf("= %d:%d:%d\n", diff.hours,
//           diff.minutes,
//           diff.seconds);
//    return 0;
// }

// // Computes difference between time periods
// void differenceBetweenTimePeriod(struct TIME start,
//                                  struct TIME stop,
//                                  struct TIME *diff) {
//    while (stop.seconds > start.seconds) {
//       --start.minutes;
//       start.seconds += 60;
//    }
//    diff->seconds = start.seconds - stop.seconds;
//    while (stop.minutes > start.minutes) {
//       --start.hours;
//       start.minutes += 60;
//    }
//    diff->minutes = start.minutes - stop.minutes;
//    diff->hours = start.hours - stop.hours;
// }
//ques-08 Write a program to store information of 10 students and display them using structure.
// #include<string.h>
// #include<stdio.h>
// #include<conio.h>
// struct student input();//global declaration..
// void display(struct student e2);
//    struct student//global definition..
//     {
//         int rollno;
//         char Name[20];
//         int registration;
//     };
//     int main()
//     {
//         struct student e[10],temp;
//         int i;
//         for(i=0;i<=4;i++)
//         {
//             e[i]=input();
//         }
//         for(i=0;i<=4;i++)
//         {
//             display(e[i]);
//             printf("\n");
//         }
//     }
//      struct student input()
//    {
//     struct student e1;
//     printf("Enter the id,name,and the registration of the student:");
//     scanf("%d",&e1.rollno);
//     fflush(stdin);
//     fgets(e1.Name,20,stdin);
//     scanf("%d",&e1.registration);
//     return e1;
//    }
// void display(struct student e2)
// {
//     printf("\n%d %s %d",e2.rollno,e2.Name,e2.registration);
// }
//ques-09 . Write a program to store information of n students and display them using structure..
// #include<stdio.h>
// #include<conio.h>
// struct student input();//global declaration..
// void display(struct student e2);
//    struct student //global definition..
//     {
//         int id;
//         char Name[20];
//         int registration;
//     };
//     int main()
//     {
//         struct student e[10];
//         int i;
//         for(i=0;i<=4;i++)
//         {
//             e[i]=input();
//         }
//         for(i=0;i<=4;i++)
//         {
//             display(e[i]);
//             printf("\n");
//         }     
//     }
//      struct student input()
//    {
//     struct student e1;
//     printf("Enter the id,name,and the salary of the employee:");
//     scanf("%d",&e1.id);
//     fflush(stdin);
//     fgets(e1.Name,20,stdin);
//     scanf("%d",&e1.registration);
//     return e1;
//    }
// void display(struct student e2)
// {
//     printf("\n%d %s %d",e2.id,e2.Name,e2.registration);
// }
//ques-10 Write a program to enter the marks of 5 students in Chemistry, Mathematics and
//Physics (each out of 100) using a structure named Marks having elements roll no.,
//name, chem_marks, maths_marks and phy_marks and then display the percentage
//of each student.
// #include <stdio.h>
// #include<conio.h>
// //defining structure
// struct Marks {
//     int roll_no;
//     char name[30];
//     float chem_marks, maths_marks, phy_marks;
// };

// //main function
// int main() {
	
//     struct Marks marks[5];
    
//     //Getting user input for info of the 5 students
//     for(int i=0; i<4; i++){
// 		printf("Student %d\n",i+1);
//         printf("Enter roll no. :\n");
//         scanf("%d", &marks[i].roll_no);
//         printf("Enter name :\n");
//         scanf("%s",marks[i].name);
//         printf("Enter Chemistry marks :\n");
//         scanf("%f", &marks[i].chem_marks);
//         printf("Enter Maths marks :\n");
//         scanf("%f", &marks[i].maths_marks);
//         printf("Enter Physics marks :\n");
//         scanf("%f", &marks[i].phy_marks);
//     }
    
//     // printing percentage for each student
// 	for(int i=0; i<4; i++) {
// 	    printf("Student %d\n",i+1);
// 	    float percentage = (marks[i].chem_marks + marks[i].maths_marks + marks[i].phy_marks)/300.0*100;
// 	    printf("Percentage : %f\n", percentage);
// 	}
//   return 0;
// }