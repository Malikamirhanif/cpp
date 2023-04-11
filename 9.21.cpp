# include<iostream>
# include <math.h>
# include<iomanip>
using namespace std;
int avg (int a, int b);
int main()
{int r,t,m;
cout<<"Enter Total Runs \n ";
cin>>r;
cout<<"Enter Balls\n";
cin>>t;
m=avg (r,t);
cout<<"Average is    \t"<<m;
system("pause");
return 0;

}
int avg (int a,int b)
{return (a*60)/b;
}
