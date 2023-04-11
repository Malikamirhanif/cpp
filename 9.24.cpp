# include<iostream>
using namespace std;
void d (int x,int &y);
int main()
{int a,b,c;
cout<<"Enter value\n";
cin>>a;
cout<<"Enter value\n";
cin>>b;
d(a,b);
system ("pause");
return 0;
}
void d (int x,int &y)
{cout<<"The Number call by value is\t"<<x<<"\n";
cout<<"The Number call by Address is\t"<<y;
}
