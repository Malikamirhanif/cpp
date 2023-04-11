# include<iostream>
# include<iomanip>
# include<math.h>
using namespace std;
void d_v(void);
void d_h (void);
int main()
{d_h();
cout<<"\n";
d_v();
d_h();
system ("pause");
return 0;
}
void d_h (void)
{int i;
for(i=1;i<=20;i++)
cout<<"-";
}  
void d_v (void)
{int j,k,l,m;
for(j=1;j<=5;j++)
{
for(k=1;k<=1;k++)
{cout<<"-";
}
for(l=1;l<=18;l++)
{cout<<" ";
}
for(m=1;m<=1;m++)
{cout<<"-";
}
cout<<"\n"
;}

}
