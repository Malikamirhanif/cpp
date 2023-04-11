# include<iostream>
void ex (int*,int*);
using namespace std;
int main()
{int a,b,*p,*o;
cout<<"\nEnter two values\n";
cin>>a>>b;
ex (&a,&b);
cout<<"Values after swapping\t"<<a<<"\t"<<b;
system ("pause");
return 0;
}
void ex (int *m,int *n)
{int t;
t=*m;
*m=*n;
*n=t;
}
