# include<iostream>
# include<math.h>
using namespace std;
int main()
{int n,i=1,sum=0;
cout<<"Enter Value upto Which do You Want to Sum up Odd Numbers\n";
cin>>n;
do
{if(!(i%2==0))
sum=sum+i;
i++;
}
while(i<n);
cout<<"Sum is \t"<<sum;
system("pause");
return 0;
}
