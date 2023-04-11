# include<iostream>
using namespace std;
int main()
{int i=4;float sum=1.0;
do
{sum=sum+1/i;
i=i*2;}
while(i<=100);
cout<<sum;
system("pause");
return 0;
}
