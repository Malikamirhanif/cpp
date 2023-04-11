# include<iostream>
# include<math.h>
using namespace std;
int main()
{int i=2,j,den=0,den1=1,sum=1,a,l;
cout<<"Enter number for series\n";
cin>>a;


for(j=1;j<5 && i<=5;j++)
{
den=pow(a,j);
den1=den*i;
sum=sum+den1;
i++;
}
while(i<=5);
cout<<"sum is\t"<<sum;
system("pause");
return 0;
}
