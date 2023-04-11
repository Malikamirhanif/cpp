# include <iostream>
using namespace std;
int main()
{int n,r, a,num=0,sum=0; 
cout<<"Enter a num";
cin>>num;
a=num;
n=num;
while(num>0)
{r=n%10;
sum=sum+(r*r*r);
n=n/10;
num--;
}
cout<<sum;
if(a==sum)
cout<<"yes";
else
cout<<"no armstrong";
system("pause");
return 0;
}

