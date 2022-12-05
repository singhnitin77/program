//#include <iostream>
#include <string.h>
//using namespace std; 
int main() 
{
 char a[5][10] = {"printf", "scanf", "if", "else", "break"}; 
 char str[10]; 
 int i, flag; 
 puts("Enter the string ::"); 
 gets(str); 
 for (i = 0; i < 5; i++) 
 { 
 if (strcmp(str, a[i]) == 0) 
 { 
 flag = 1; 
 break; 
 } 
 else
 flag = 0; 
 } 
 if (flag == 1) 
 puts("Keyword"); 
 else
 puts("String"); 
 return 0; 

}
