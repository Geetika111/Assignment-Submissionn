// ques 01 wap to calculate the length of the string
// #include<stdio.h>
// int main()
// {
//     char str[10]="Geetika";
//     int i=0;
//     for(i=0;str[i];i++);
//     printf("Length is %d",i);
//     return 0;
// // }
// ques 02 wap to calculate the occurence of character in a string
// #include<stdio.h>
// int main()
// {
//     char str[10]="Geetiakaa";
//     int count=0,i;
//     for(i=0;str[i];i++){
//       for( int j=0;str[j];j++){
//         if(str[i]==str[j])
//         {
//             count=count+1;
//         }
  
  
//       }
//              printf("The number %c occures %d times",str[i],count);
//     printf("\n");
//     count=0;
//     } 
//     return 0;
// }
// ques -03 write a program to count vowels in given string
// #include<stdio.h>
// int main()
// {
//    char str[10]="Geetikaa";
//    int i=0,count=0;
//    for(i=0;str[i];i++)
//    {
//     if(str[i]=='A'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a')
//     {
//         count++;
//     }
//    } 
//    printf("The number of vowels in the given string are:%d",count);
// }
// ques-04 writea program to convert a given string into upper case
// #include<stdio.h>
// int main()
// {
//     char str[]={"geetika"};
//     for(int i=0;str[i];i++)
//     {
//       str[i]= str[i]-32;
//     }
   
//   printf("\nString in Upper Case = %s", str);
//     return 0;
// }
// ques -05 write a program to convert a string into lower case
// #include<stdio.h>
// int main()
// {
//     char str[]={"PEEEANUUU"};
//     for(int i=0;str[i];i++)
//     {
//       str[i]= str[i]+32;
//     }
   
//   printf("\nString inlowerr Case = %s", str);
//     return 0;
// }
// ques 06 wap to reverse a string.
// #include<stdio.h>
// int main()
// {
//   char str[10]="Geetikash";
//     int i;
//     for(i=8;i>=0;i--)
//     {
//         printf("%c",str[i]);
    
//     }    return 0;
// }
// ques -07 write a program in c to count the total number of alphabets,digits and special characters in a string.
// #include <stdio.h>
// int main()
// {
//     char str[1000];
//     int c=0,d=0,e=0,f=0;
//     fgets(str,1000,stdin);
//     for(int i=0;str[i];i++)
// {
//     if(str[i]>=65&&str[i]<=90)
//     {
//         c++;
//     }
//     else if(str[i]>=97&&str[i]<=122)
//     {
//         d++;
//     }
//     else if(str[i]>=32&&str[i]<=47||str[i]>=58&&str[i]<=64&&str[i]>=91&&str[i]<=96&&str[i]>=123&&str[i<=126])
//     {
//         e++;
//     }// }  (32–47 / 58–64 / 91–96 / 123–126)
//     else if(str[i]>=49&&str[i]<=57)
//     {
//         f++;
//     }
// } 
// printf("The number of uppercase alphabets:%d\n",c);
// printf("The number of lowercase alphabets:%d\n",d);
// printf("The number of specialcase alphabets:%d\n",e);
// printf("The number of digits alphabets:%d\n",f);
// return 0;
// }

// // ques -08 wap to copy a string in the another string
// #include<stdio.h>
// int main()
// {
//     char str[10]="bhopal";
//     char pr[10];
//     int i=0;
//     for(i=0;str[i];i++)
//     {
//         pr[i]=str[i];
//     }
//     printf("The copied array is:");
//     // for(i=0;pr!='\0';i++)
//     // {
//     //    printf("%c",pr[i]);
//     // }
//     // return 0;
//     pr[i]='\n';
//     printf("%s",pr);
// }

// ques -09 write a c program to sort a string array in ascending __ORDER.
// #include<stdio.h>
// int main()
// {
//     char str[10]="palampur";
//     int temp=0,i;
//     for(int i=0;str[i];i++)
//     {
//         for(int j=i+1;str[j]!='\0';j++)
//         {
//             if(str[i]>str[j])
//             {
//                 temp=str[i];
//                 str[i]=str[j];
//                 str[j]=temp;
//             }

//         }
    
//     }
//     for(i=0;str[i]!='\0';i++)
//         {
//             printf("%c",str[i]);
//         }
// }
// ques-10 qrite a program to count the frequency of the character in the string
// #include <stdio.h>
// int main() {
//     char str[1000], ch;
//     int count = 0;

//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);

//     printf("Enter a character to find its frequency: ");
//     scanf("%c", &ch);

//     for (int i = 0; str[i] != '\0'; ++i) {
//         if (ch == str[i])
//             ++count;
//     }

//     printf("Frequency of %c = %d", ch, count);
//     return 0;
// }

