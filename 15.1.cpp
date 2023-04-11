# include<iostream>
# include<stdio.h>
using namespace std;
class Employee
{protected:
	int eid;
	int es;
	public:
		void in ()
		{cout<<"\n\tEnter Employee id\n";
		cin>>eid;
		cout<<"\n\tEnter Empoloyee Scale\n";
		cin>>es;
		}
		void show ();
};
void Employee::show()
{cout<<"\n\tData of Employee is\n";
cout<<"\n\tEmployee id is\t"<<eid<<"\nEmployee Scale is\t"<<es;
}
class Manager:public Employee
{protected:
int	mid;
char dept [5];
public:
	void input ();
	void out ();
};
void Manager::input()
{cout<<"\n\t Enter Manager id\n";
cin>>mid;
cout<<"\n\t Enter Manager Department\n";
cin>>dept[5];
}
void Manager::out()
{cout<<"\n\tManager id is\t"<<mid<<"\n\tManager Departmentis\t"<<dept[5];
}
int main()
{Manager obj;
cout<<"\n\tEmploy object data\n";
obj.in();
obj.show();
cout<<"Manager object data\n";
obj.input();
obj.out();
system("pause");
return 0;
}
