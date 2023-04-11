# include<iostream>
using namespace std;
class bu
{int a,b;
public:
	int sum (int,int);
};
int bu ::sum(int x,int y)
{return x+y;
}
int main()
{bu obj;
int a,b,c;
cout<<"Enter two numbers";
cin>>a>>b;
c=obj.sum(a,b);
cout<<c;
system ("pause");
return 0;
}
