# include<iostream>
# include<math.h>
using namespace std;
void s (float x,float y,float z);
int main()
{float a,b,c;
cout<<"Enter Three Decimal Number\n";
cin>>a>>b>>c;
s (a,b,c);
system ("pause");
return 0;
}
void s (float x,float y,float z)
{float min;
min=x;
if(y<min)
min=y;
if(z<min)
min=z;
cout<<"Minimum Number is \t"<<min;
}
