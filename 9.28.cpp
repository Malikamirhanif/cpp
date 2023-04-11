# include<iostream>
using namespace std;
int Large (int &x,int &y);
int Sum (int z);
int main()
{int a,b,c,d,e;
cout<<"Enter Two Values to find Square of Larger  number\n";
cin>>a;
cin>>b;
cout<<"Enter Number to find sum of its digits\n";
cin>>d;
c=Large(a,b);
e=Sum(d);
cout<<"Square of larger number is\t"<<c<<"\n";
cout<<"Sum of digits is\t"<<e;
system("pause");
return 0;
}
int Large(int &x,int &y)
{
if(x>y)
{return x*x;
}
else
{return y*y;
}
}
int Sum(int z)
{int f,g,j=0,i;
for(i=1;z>=1;i++)
{
f=z%10;
j=j+f;
z=z/10;}
return j;

}
