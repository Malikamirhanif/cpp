# include<iostream>
using namespace std;
int main()
{int a,b;
for(a=1,b=2;a<=5,b<=20;a++,b=b+2)// if more then one conditions are applied then loop will execute according to second not first loop ,as we give condition for first a<=5 there should be the value of a upto 5, but it will be 10 because secind condition is b<=20 the value of b should be print upto 20 so with second condition the valu of first will be also print untill condition for second is true

	{cout<<"\n\t"<<a;
	cout<<"\t"<<b;
	}
system("pause");
return 0;
}
