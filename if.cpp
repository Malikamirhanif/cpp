# include<iostream>
using namespace std;
int main()
{int sal;
float b;
cout<<"Enter salary ";
cin>>sal;
if(sal>=10000)
{b=(sal*10)/100;
cout<<"bonus is:"<<b;
sal=sal+b;
}
cout<<"salary is"<<sal;
system("pause");
return 0;}
