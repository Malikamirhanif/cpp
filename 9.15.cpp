# include<iostream>
# include<math.h>
using namespace std;
void m (int w,int x,int y,int z);
int main()
{int a,b,c,d;
cout<<"Enter X1 & X2\n";
cin>>a>>b;
cout<<"Enter Y1 & Y2\n";
cin>>c>>d;
m(a,b,c,d);
system ("pause");
return 0;
}
void m (int w,int x,int y,int z)
{int e,f,g,h;
e=sqrt(pow((x-w),2)-pow((z-y),2));
cout<<"Distance is\t"<<e;
}
