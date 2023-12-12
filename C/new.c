#include<stdio.h> // header file , library
#include<string.h> // library for string

// string in detail
// array : collection of multiple value of same datatype
// 2d array : collection of multiple array

// string = collection of multiple character , 
// char a; 'a',akhil
// int a = 10;
// int a[10] = 10,20,....

// char a = 'a';
// char a[10] = "akhil";
// char b[10] = {'A','K','H','I','L'};


int main()
{
    char name[20] = "\0"; // fie
    char name2[20];
    int a[500] = {1,2,3,4,5}; // 20 bytes / 4 bytes = 5


    for(int i=0; a[i]!="\0"; i++)
    {

    }

    // int size = sizeof(); //  its return size of datatype in integer
    // printf("%d",sizeof(a)/sizeof(a[0]));
    // null
    // puts(name);

    
    

    // puts("Enter your name : "); // to print string
    // gets(name);// to take user input in string
    // //strcpy(name2,name); // to copy string from one variable to another variable
    // //puts(name2); // to print only string variable
    // puts("Enter your name : ");
    // gets(name2);

    // int username = "Akhil";
    // // retry:
    // puts("Enter password : password must be 8 bigger thane 8 digit and smaller than 16 digit : ");
    // gets(name);
    // int x = strlen(name); // to find length of string
    
    // if(x>=8 && x<=16)
    // {
    //     puts("password set successfully");
    // }
    // else if(x<8)
    // {
    //     puts("Enter more than 8 digit");
    // }
    // else if(x>16)
    // {
    //     puts("Enter less than 16 digit");
    // }
    

    
    // int x = strcmp(name,username);
    // // true = 0
    // // false = -1,-4
    // if(x==0)
    // {
    //     puts("Login successful");
    // }
    // else
    // {
    //     goto retry;
    // }


    



    return 0;
}