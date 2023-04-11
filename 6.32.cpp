# include<iostream>
# include<math.h>
using namespace std;
int main()
{int i=1,j,k=1;float b=0.0, sum=0.0;
for(j=3;j<=99 && i<=97 && k<=97;j+=2)
{
	do{b=i/j;
	sum=sum+b;
	i+=2;
	}
	while(i<=j);
}
cout<<"Sum is\t"<<sum;
system ("pause");
return 0;
}
