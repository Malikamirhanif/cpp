# include<iostream>
# include <math.h>
using namespace std;
int main()
{int a=4,b=5,c=7,i,s=8;
for(i=1;s<=100;i++)
{cout<<s<<"\t";
s=s+a;
cout<<s<<"\t";
s=s+b;
cout<<s<<"\t";
s=s+c;
cout<<s<<"\t";
}
system("pause");
return 0;
}
