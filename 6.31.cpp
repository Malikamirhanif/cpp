# include <iostream>
# include<math.h>
using namespace std;
int main()
{int i,j=1,k=3,f=1;float sum=1, sum1=0,b;
for(i=1;i<=25 && j<=10;i+=4)
{f=1;
do
{f=f*j;
sum=sum*f;
j++;

}
while(j<=k);

b=i/sum;
sum1=sum1+b;

k++;}
cout<<"Sum is\t"<<sum1;
system("pause");
return 0;
}
