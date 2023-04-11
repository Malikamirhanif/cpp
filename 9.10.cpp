# include<iostream>
# include<math.h>
void prime (int n);
using namespace std;
int main()
{int a;
cout<<"Enter a number to check prime\n";
cin>>a;
prime (a);
system ("pause");
return 0;
}
void prime (int n)
{int i,p=0;
for(i=2;i<=n;i++)
{if(n%i==0)
{p++;
}}
if(p==1)
{cout<<"Number is prime\n";
}
else
{cout<<"Not";
}

}
