# include<iostream>
using namespace std;
struct employee
{int cn;
float sal;
char g;
};
int main()
{employee e[10];int a,loc,m,i;
cout<<"Enter how many employers are \n";
cin>>a;
cout<<"Enter data of employres\n";
for(i=1;i<=a;i++)
{cout<<"Enter Employee code\n";
cin>>e[i].cn;
cout<<"Enter salary\n";
cin>>e[i].sal;
cout<<"Enter grade\n";
cin>>e[i].g;
}
m=e[0].sal;
for(i=1;i<=a;i++)
{if(e[i].sal>m)
{m=e[i].sal;
loc=i;
}
}
cout<<"Heighest Salary Record is\n";
cout<<"Code is\t"<<"\t"<<e[loc].cn<<"\n";
cout<<"Salary is\t"<<m<<"\n";
cout<<"Grade is\t"<<e[loc].g<<"\n";
system ("pause");
return 0;



}
