#include<iostream.h>
#include<conio.h>
int m=10;
void main()
{
clrscr();
int m=20;
{
int k=m;
int m=30;
cout<<"we are inner block \n";
cout<<"k="<<k<<"\n";
cout<<"m="<<m<<"\n";
cout<<": :m="<<: :m<<"\n";
}
cout<<"\n we are in outer block \n";
cout<<"m="<<m<<"\n";
cout<<": :m"<<m<<"\n";
getch();
}