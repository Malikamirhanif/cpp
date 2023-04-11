# include<iostream>
# include<math.h>
using namespace std;
int main()
{int n,sum=0,a,i=0;
cout<<"Enter how many values do you want to enter\n";
cin>>n;
do
{cout<<"Enter value\n";
cin>>a;
sum=sum+a;
i++;
}
while(i<n);
cout<<"Sum is\n"<<sum;
system("pause");
return 0;
}
