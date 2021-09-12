//WAP to create 10 element array and print in reverse.
#include<iostream.h>
#include<conio.h>
using namespace std;
int main()
{
 int arr[10];
 int i;

 cout<<"Enter the Elements of array :\n";
 for(i=0;i<10;i++)
 {
  cin>>arr[i];
 }
 cout<<"Elements are :";
 for(i=0;i<10;i++)
 {
  cout<<"\n"<<arr[i];
 }
 cout<<"\nReversed Elements are:";
 for(i=9;i>=0;i--)
 {
  cout<<"\n"<<arr[i];
 }
 return 0;
}