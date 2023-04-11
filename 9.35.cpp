# include<iostream>
using namespace std;
inline int g (double x,double y)
{if(x>y)
{return x;
}
else
{return y
;
}
}
int main()
{double a,b,m;
cout<<"Enter two numbers\n";
cin>>a>>b;
m=g(a,b);
cout<<"Value is "<<m;
system("pause");
return 0;
}
