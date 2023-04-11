# include<iostream>
# include<math.h>
using namespace std;
int Reverse (int n);
int main()
{int a,b;
cout<<"Enter number\n";
cin>>a;
b=Reverse (a);
cout<<"Reverse is\t"<<b;
system ("pause");
return 0;
}
int Reverse (int n)
{int d,rev;
do
{d=n%10;
rev=(rev*10)+d;
n=n/10;
}
while(n !=0);
return rev;
}
