# include<iostream>
using namespace std;
int main()
{int as[10],i,net[10],loc;
char an[10][20]; char ch[20];
cout<<"Enter Name & Salary\n";
for(i=0;i<10;i++)

{cout<<"Enter Name\n";
cin>>(an[i]);
cout<<"Enter Salary\n";
cin>>as[i];
}
for(i=0;i<10;i++)
{as[i]=as[i]*12;
}
for(i=0;i<10;i++)
{if(as[i]>250000)
{
loc=i;
cout<<"Name is\t"<<an[loc]<<"\tsalary is\t"<<as[loc]<<"\tTax pay"<<"\n";
}
else
{cout<<" Name is\t"<<an[i]<<"\tsalary is\t"<<as[i]<<"\t no tax"<<"\n"
;}


}
system("pause");
return 0;


}
