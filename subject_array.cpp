#include<iostream>
#include<conio.h>
void main()
{
 clrscr();
 int i;
 cout<<"\nSubjects  in Third Sem in SVVV\:-\n";
 char *sub_arr[7] = {"Discrete Structures.","Data Communication.","Data Structure & Algorithm.","Cloud Computing: Project Based Learning.","Web Development -II(PHP/JSP).","Unix and Shell Programming.","Application Development using: Java Programming."};
 cout<<endl;

 for(i=0;i<=7;i++)
 {
  cout<<sub_arr[i]<<endl;
 }
 getch();
}
