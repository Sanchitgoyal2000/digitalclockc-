#include<iostream>
#include<windows.h>
#include<conio.h>
#include<iomanip>
#include<dos.h>
using namespace std;
#include <ctime>
int main()
{
 int h,m,s;
  cout<<"\n\n\n\n\n";
  x:
   cout<<setw(110)<<"Enter Hours\n";
   cout<<setw(102)<<"  :";
   cin>>h;
   if(h>23)
   {
    system("cls");
    cout<<setw(111)<<"Invalid Hours\n";
    goto x;
   }
   y:
 cout<<setw(110)<<"Enter Minutes\n";
  cout<<setw(102)<<"  :";
   cin>>m;
   if(m>59)
   {
    system("cls");
    cout<<setw(111)<<"Invalid Minutes\n";
    goto y;
   }
   z:
   cout<<setw(110)<<"Enter Seconds\n";
    cout<<setw(102)<<"  :";
   cin>>s;
   if(s>59)
   {
    system("cls");
    cout<<setw(111)<<"Invalid Seconds\n";
    goto z;
   }
   system("CLS");
  while(!kbhit())
   {
    cout<<"\n\n\n\n\n\n\n\n\n";
    cout<<setw(123)<<"________________________\n";
    cout<<setw(110)<<h<<":"<<m<<":";
    cout<<s<<"\n";
    cout<<setw(123)<<"________________________\n";
    cout<<"Press any key to stop";
    s++;
    if(s==60)
    {
     s=0;
     m++;
    }
    if(m==60)
    {
     m=0;
     h++;
    }
    if(h==24)
    {
     h=0;
     m=0;
     s=0;
    }
    Sleep(1000);
    system("CLS");
   }
}
