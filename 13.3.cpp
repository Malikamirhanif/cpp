# include<iostream>
using namespace std;
class DB;
class DM
{float dm;
public:
	
	DM()
	{dm=10.6;
	};
	
	friend void add(DM,DB);
	
};
class DB
{float db;
public:
	
	DB()
	{db=5.6;
	}
friend void add(DM,DB);
 
};
void add(DM x,DB y)
{float r=x.dm+y.db;
cout<<"Sum is\t"<<r;

}
int main()
{DM a;
DB b;
add (a,b);
system ("pause");
return 0;
}
