# include<iostream>
# include<math.h>
using namespace std;
float fun (float a,int b);
int main()
{int y,e; float x;
cout<<"Enter Decimal Numbers\n";
cin>>x;
cout<<"Enter digit\n";
cin>>y;
e=fun(x,y);
cout<<"Answer is\t"<<e;
system("pause");
return 0;
}
float fun (float a,int b)
{int i; float f=1.0;
for(i=1;i<=b;i++)
{f=f*a;
}
return f;

}
