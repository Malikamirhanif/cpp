# include <iostream>
using namespace std;
int main()
{int i ,j,a;
for(i=1;i<23;i++)
{
for(j=2;j<=i;j++)
if(i%j==0)
a++;
if(a==1)
cout<<"prime"<<"\t"<<i<<"\n";
}
system("pause");
return 0;
}
