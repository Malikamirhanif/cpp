# include<iostream>
# include<math.h>
using namespace std;
int EQ (int w,int x,int y,int z);
int main()
{int a,b,c,d,e;
cout<<"Enter four Digits\n";
cin>>a>>b>>c>>d;
e=EQ(a,b,c,d);
cout<<e;
system ("pause");
return 0;
}
int EQ (int w,int x,int y,int z)
{if((w*w*w)+(x*x*x)+(y*y*y)==(z*z*z))//we can also use pow key word instead of multiplying numbers three times
return 0;
else
return -1;
}
