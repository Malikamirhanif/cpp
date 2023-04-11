# include<iostream>
# include<math.h>
# include <iomanip>
using namespace std;
int main()
{int a,b,sum,den,i;
cout<<"Enter number for series\n";
cin>>a;
cout<<"Enter limit";
cin>>b;
sum=a;
for(i=2;i<=b;i++)
{den=(pow(a,i));
sum=sum+den;
}
cout<<"Sum\t"<<sum;
system("pause");
return 0;
}
