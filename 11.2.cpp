# include<iostream>
using namespace std;
void ex (int *,int*);
int main()
{int a,b;
cout<<"Enter two numbers\n";
cin>>a>>b;
cout<<"Values before swapping\n";
cout<<a<<"\t"<<b;
ex (&a,&b);
cout<<"\nValues after swapping\n";
cout<<a<<"\t"<<b;
system("pause");
return 0;
}
void ex (int *t,int *s)
{int temp;
temp=*t;
*t=*s;
*s=temp;
}
