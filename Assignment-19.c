// //ques-01 write a program to find number of vowels in each of 5 strings stored in 2-d arrays.take input from the user.
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     char str[5][10];
//     printf("Enter the string(maximum-05)");
//     for(int i=0;i<5;i++)
//     {
//         fgets(str[i],10,stdin);//because str[0]==str[0][0]
//     }
//     int count=0;
//     for(int i=0;i<5;i++)
//     {
//         for(int j=0;str[i][j];j++)
//         {
//             if(str[i][j]=='A'||str[i][j]=='E'||str[i][j]=='I'||str[i][j]=='O'||str[i][j]=='U'||str[i][j]=='a'||str[i][j]=='e'||str[i][j]=='i'||str[i][j]=='o'||str[i][j]=='u')
//             count++;
//         }
//     }
//     printf("The number of vowels in the 5 strings are:%d",count);
//     return 0;

// }
//ques-02 . Write a program to sort 10 city names stored in two dimensional arrays, taken from 
//the user.
// #include<stdio.h>//gets(): the gets() function enables the user to enter some characters followed by the enter key.
// //all the characters entered by the user gets stored in a character array .the null characters are added to the array to make it a string.The gets function does not fo the bound checking.
// #include<string.h>
// #include<conio.h>
// int main()
// {
//     char a[10][20],t[20];
//     int i,j;
//     printf("enter the values in the string:");
//     for(i=0;i<3;i++)
//     {
//         gets(a[i]);
//     }
//     for(i=0;i<2;i++)
//     {
//         for(j=i+1;j<3;j++)
//         {
//             if(strcmp(a[i],a[j])>0)
//             {
//                 strcpy(t,a[i]);
//                 strcpy(a[i],a[j]);
//                 strcpy(a[j],t);

//             }
//         }
//     }
//     for(i=0;i<3;i++)
//     {
//         printf("%s ",a[i]);
//     }
//     return 0;
// }
//ques-03 Write a program to read and display a 2-d array of strings in c language.
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     char s[5][10];
//     printf("enter 5 strings:");
//     for(int i=0;i<5;i++)
//     fgets(s[i],10,stdin);
//     //code for displaying the array.
//     printf("Here are all the strings:");
//     for( int i=0;i<5;i++)
//     {
//         printf("%s\n",s[i]);
//     }
//     return 0;
// }
//ques-04 write a program to search a string in the list of strings.
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     char s[5][10],str[0][10];
//     printf("enter the 5 strings:");
//     for(int i=0;i<5;i++)
//     fgets(s[i],10,stdin);
//     printf("Enter the string that you wan to find out:");
//     fgets(str[0],10,stdin);
//     int count=0,d;
//     for(int i=0;i<5;i++)
//     {
//         for(int j=0;str[i][j];j++)
//         {
//             if(str[i][j]==str[0][j])
//             d=i;
//         }
//     }
//     if(d==0)
//     {
//         printf("we can not find the string");
//     }
//     else
//     {
//         printf("The position of the string that you are finding :%d",d);
//     }
//     return 0;
// }
//ques-05 suppose we have a list of email addresses, check whether all email addresses have @ in it.print the odd one out.
// #include<stdio.h>
// #include<conio.h>
// #include<string.h>
// int main()
// {
//     char a[10][30]  ;
//     int i,j,vowels;
//     for(i=0;i<3;i++)
//     {
//         gets(a[i]);
//     }
//     for(i=0;i<3;i++)
//     {
//         if(strchr(a[i],'@')!=0)
//         {
//             printf("%s\n",a[i]);
//         }
//     }
//     return 0;
// }
//ques-6 Write a program to print the strings which are palindrome in the list of strings.
// #include <stdio.h>
// #include <string.h>
 
// int main()
// {
//     char s[1000];  
//     int i,n,c=0;
 
//     printf("Enter  the string : ");
//     gets(s);
//     n=strlen(s);
 
//     for(i=0;i<n/2;i++)  
//     {
//     	if(s[i]==s[n-i-1])
//     	c++;
 
//  	}
//  	if(c==i)
//  	    printf("string is palindrome");
//     else
//         printf("string is not palindrome");
 
 	 
     
//     return 0;
// }
//ques-07. From the list of IP addresses, check whether all ip addresses are valid.
// #include<stdio.h>
// #include<conio.h>
// #include<string.h>
// int main()
// {
//     char ip[]="20.134.10.13";

//     char *a=strtok(ip,".");
//     while(a!=NULL)
//     {
//         int x=atoi(a);
//         if((x>=0)&&(x<=255))
//         {
//             printf("%d",x);
//             a=strtok(NULL,".");
//         }
//     }
//     return 0;
// }
//ques-08 Given a list of words followed by two words, the task is to find the minimum distance 
//between the given two words in the list of words.
//(Example : s = {“the”,”quick”,”brown”,”fox”,”quick”}
 //word1 = “the”, word2 = “fox”, OUTPUT : 2 )
//  #include<stdio.h>
//  #include<conio.h>
//  #include<string.h>
//  int main()
//  {
//     char words[4][20]={"my","name","is","geetika"};
//     char word1[]="my";
//     char word2[]="geetika";
//     int i,w1=-1,w2=-1,min=1000,temp;
//     for(i=0;i<4;i++)
//     {
//         if(strcmp(word[i],word1)==0)
//         w1=i;
//         if(strcmp(word[i],word2)==0)
//         w2=i;
//         if(w1!=-1&&w2!=-1)
//         {
//             temp=abs(w2-w1);
//             if(temp<min)
//             min=temp;
//         }
//     }
//     printf("%d",min-1);
//     return 0;

//  }
//ques-09 . Write a program that asks the user to enter a username. If the username entered is 
//one of the names in the list then the user is allowed to calculate the factorial of a 
//number. Otherwise, an error message is displayed.
// #include<stdio.h>
// #include<conio.h>
// int main()
// {

// }
//ques 10. Create an authentication system. It should be menu driven
// #include<stdio.h>
// #include<conio.h>
// #include<string.h>
// int main()
// {
//     int i,flag=0;
//     char a[3][2][20]={
//         {"Mysirg"," 123"},
//         {"geetika"," 456"},
//         {"aditya"," 321"}
//     };
//     char username[]="prateek";
//     char password[]="123";
//     for(i=0;i<3;i++)
//     {
//         if(strcmp(username,a[i][0]==0&&strcmp(password,a[i][1]))==0)
//        {
//          printf("login successfully!!");
//          flag=1;
//        }
//     }
//     if(flag==0)
//     {
//         printf("username and password not matched.");
//     }
//    return 0;
// }