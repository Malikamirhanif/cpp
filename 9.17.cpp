# include<iostream>
# include<math.h>
using namespace std;
float tax (float a);
int main()
{float sal,e;
cout<<"Enter Salary\n";
cin>>sal;
e=tax(sal);
cout<<"Tax is\t"<<e;
system ("pause");
return 0;
}
float tax (float a)
{if(a<=1000)
cout<<"No tax";
else if (a<=2000)
return (a*0.05);
else if (a<=3000)
return (a*0.04);
else if (a>3000)
return (a*0.03);
}
