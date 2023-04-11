# include<iostream>
using namespace std;
int main()
{int a,b=0,c=0,n,i;
cout<<"Enter how many number do you want to enter";
cin>>n;
for(i=1;i<=n;i++)
{cout<<"Enter a number";
cin>>a;
if(a>0)
{b++;
}
else
{c++;
}
}

cout<<"+ve\t"<<b<<"\n";
cout<<"-ve\t"<<c;
system("pause");
return 0;
}
