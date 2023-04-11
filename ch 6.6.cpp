# include<iostream>
using namespace std;
int main()
{int a,x,r,sum=0;
cout<<"Enter a number";
cin>>x;
a=x;
while(x!=0)
{r=x%10;
if(r==0)
sum=sum+x;

else

sum=sum+r;
x=x/10;}

cout<<"digits"<<sum;
system("pause");
return 0;
}
