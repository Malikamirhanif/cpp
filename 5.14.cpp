# include<iostream>
using namespace std;
int main()
{int s,n,a,b,c,d;
cout<<"Enter Your salary\n";
cin>>s;
if(s>30000)
{a=s*20/100;
n=s-a;
cout<<"salary is\t"<<s;
cout<<"\n Income tax is\t"<<a;
cout<<"\nSalarey after deduction is\t"<<n;
}
else if(s>=20000)
{a=s*15/100;
n=s-a;
cout<<"\nSalary is\t"<<s;
cout<<"\n Income tax is\t"<<a;
cout<<"\nSalary after deduction is\t"<<n;
}
else if(s<20000)
{a=s*10/100;
n=s-a;
cout<<"\n Salary is\t"<<s;
cout<<"\n Income tax is\t"<<a;
cout<<"\n Salary after deduction is\t"<<n;
}
system("pause");
return 0;
}
