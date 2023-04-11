# include <iostream>
using namespace std;
int main()
{int i=1,j=0,a=1;
cout<<"Num"<<"\t"<<"Sum"<<"\n";
while(i<=5 && a<=15)
{
cout<<i<<"\t"<<a;
cout<<"\n";
i++;

a+=i;
}
system("pause");
return 0;
}
