# include <iostream>
# include<math.h>
using namespace std;
int main()
{int b,p,r,n,i ; long int a;
cout<<"Enter Origional Amount\n";
cin>>p;
r=p*0.05;
cout<<"Interest IS\t"<<r<<"\n";
cout<<"Enter Number Of Years\n";
cin>>n;
for(i=1;i<=n;i++)
{a=p*pow((1+r),i);
cout<<"Amount After \t"<<i<<"\t Year is\t"<<a<<"\n";
}
system("pause");
return 0;

}
