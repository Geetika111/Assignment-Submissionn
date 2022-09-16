// ques-01 write a function to calculate the length of the string
// void length(char s[]);
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     char str[100];
//     fgets(str,100,stdin);
//     length(str);
//     return 0;
// }
// void length(char s[])
// {
//     int i;
    
//     for(i=0;s[i]!='\0';i++);
//         printf("%d",i);
    
// }
// #include <stdio.h>
// void length(char s[]);
// int main()
// {
//     char str[100];
//     fgets(str,100,stdin);
//     length(str);
//     return 0;
// }
// void length(char s[])
// {
//     int i,p=0;
//     for(i=0;s[i]!='\0';i++){
//         p++;
//     }
//     printf("The length is :%d",p-1);
    
// }

// ques -02 write a function to reverse a string
// void reverse(char str[]);
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char s[100];
//     fgets(s,100,stdin);
//     reverse(s);
//     return 0;
// }
// void reverse(char str[])
// {
//     int p;
//     p=strlen(str);
//     for(str[p];p>=0;p--)
//     {
//         printf("%c",str[p]);
//     }
// }
// ques -03 write a function to compare two strings...
// #include <stdio.h>
// void compare(char*x,char*y);
// int main()
// {
//    //given string
//    char s1[20]="geetika";
//    char s2[20]="bhavay";
//    //function call
//    compare(s1,s2);
//    return 0;
// }
// void compare(char*x,char*y)
// {
//     int flag=0;
//     //iterate a loop till the end of both the string
//     while(*x!='\0'||*y!='\0')
//     {
//         if(*x==*y)
//         {
//             x++;
//             y++;
//         }
//         //if two characters are not same print the difference and explicit
//         else if((*x=='\0'||*y!='\0')||(*x!='\0'||*y=='\0')||(*x!=*y))
//         {
//             flag=1;
//             printf("unequal strings");
//             break;
//         }
        
//     }
//     if(flag==0)
//         {
//            printf("equal strings\n"); 
//         }
    
// }

 
// ques -04 write a function to transform a string into uppercase
// void uppercase( char s[]);
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     char str[100];
//     fgets(str,100,stdin);
//     uppercase(str);
//     return 0;
// }
// void uppercase( char s[])
// {
//     int i;
//     for(i=0;s[i];i++)
//     {
//         s[i]=s[i]-32;
//     }
//     // for(i=0;s[i];i++)
//     // {
//     //     printf("%c",s[i]);
//     // }
//     printf("%s",s);
// }

// ques -05 write a function to transform a string into lowercase
// void lowercase( char s[]);
// #include<stdio.h>
// #include<conio.h>//extra symbols in the output just like@ etc..
// int main()
// {
//     char str[100];
//     fgets(str,100,stdin);
//     lowercase(str);
//     return 0;
// }
// void lowercase(char s[])
// {
//     int i;
//     for(i=0;s[i];i++)
//     {
//         s[i]=s[i]+32;
//     }
//     // for(i=0;s[i];i++)
//     // {
//     //     printf("%c",s[i]);
//     // }
//     printf("%s",s);
// }

// // ques06 write function to check whether a string is an alphaneumeric string or not.
// #include <stdio.h>
// #include<string.h>
// void alphaneumeric(char s[]);
// int main()
// {
//     char str[]="geetika678";
//     alphaneumeric(str);
//     return 0;
// }
// void alphaneumeric(char s[])
// {
//     int i,flag ,p ;
//     for(i=0;s[i];i++)
//     {
//         if(s[i]>=65&&s[i]<=90||s[i]>=97&&s[i]<=122||s[i]>=48&&s[i]<=57)
//         {
//             flag=1;
//             if(s[i]>=48&&s[i]<=57)
//             p=1;
//         }
//     }
//     if(flag==1&p==1)
//     {
//         printf("It is a alphaneumeric number");
//     }
//     else
//     {
//         printf("It is not an alphaneumeric number.");
//     }
// }
//ques-07 Write a function to check whether a given string is palindrome or not.
// #include<stdio.h>
// #include<string.h>
// void Pallindrome();
// int main()
// {
//      Pallindrome();
//     return 0;
// }
// void Pallindrome()
// {
//     char string[20];
//     int i,length;
//     int flag=0;
//     printf("enter a string:");
//     scanf("%s",string);
//     length=strlen(string);
//     for(i=0;i<length;i++)
//     {
//       if(string[i]!=string[length-i-1])
//       {
//          flag=1;
//          break;
//       }
//     }
//     if(flag)
//     {
//       printf("it is not a pallindrome");
//     }
//     else
//     {
//        printf("it is  a pallindrome");
//     }
   
// }
// ques 08 write a function to count words in a given string...
// void countwords(char str[]);
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char s[100];
//     fgets(s,100,stdin);
//     countwords(s);
//     return 0;
    
// }
// void countwords(char str[])
// {
//     int i,count=1;
//     for(i=0;str[i];i++)
//     {
//        if(str[i]!=' ' && str[i+1]==' ')
//        count++;
//     }
//     printf("The number of words are:%d ",count);
// }
//ques-9. Write a function to reverse a string word wise. (For example if the given string is 
//“Mysirg Education Services” then the resulting string should be “Services Education 
//Mysirg” )
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     char a[20]="my  name is geetika";
//     int i=0,start=0,end=0,flag=0;
//     while(a[i]!='\0')
//     {
//         while(a[i]!=' ')
//         {
//             if(a[i]=='\0')
//             {
//                 flag=1;
//                 break;
//             }
//             end++;
//             i++;
//         }
//         swap(a,start,end-1);
//         if(flag==1)
//         {
//             break;
//         }
//         start=end++;
//         i++;
//     }
//     swap(a,0,i-1);
//     printf("%s",a);
//     return 0;

// }
// void swap(char a[],int i,int j)
// {
//     char temp;
//     while(i<=j)
//     {
//         temp=a[i];
//         a[i]=a[j];
//         a[j]=temp;
//         i++;
//         j--;
//     }
// }
//ques-10. Write a function to find the repeated character in a given string.
// #include <stdio.h> 
// #include <string.h> 
// int main() 
// { 
//   char string[100]; 
//   int count; 
//   printf("Enter the string : \n"); 
//   scanf("%[^\n]*c",string);

//   printf("Duplicate characters in a given string: \n"); 

//   //Counts each character present in the string 
//   for(int i = 0; i < strlen(string); i++) { 
//   count = 1; //Updates thecount again to 1 for every new character

//   for(int j = i+1; j < strlen(string); j++) { 
//       if(string[i] == string[j] && string[i] != ' ') { 
//     count++; 
//    //Set string[j] to 0 to avoid printing visited character 
//    string[j] = '0'; 
//   } 
//  } 

//   //A character is considered as duplicate if count is greater than 1 

//  if(count > 1 && string[i] != '0') 
//  printf("%c\n", string[i]); 
//   } 

//  return 0; 
// } 