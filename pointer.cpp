#include<iostream>
#include<conio.h>

int main()
{
 int arr[5],i;
 int *ptr;
 clrscr();
 cout<<"\nEnter the elements for array:";
 for(i=0;i<5;i++)
 {
  cin>>arr[i];
 }
 ptr =&arr[0];
 cout<<"\nEntered elements\n";
 for(i=0;i<5;i++)
 {
 cout<<"\t"<<*(arr+i);
 }
 cout<<"\nAddress of the entered elements\n";
 for(i=0;i<5;i++)
 {
 cout<<"\t"<<i+1<<" "<<arr[i]<<" "<<(arr+i)<<endl;
 }
 getch();
}
