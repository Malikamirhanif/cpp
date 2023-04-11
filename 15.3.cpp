# include<iostream>
using namespace std;
class Teacher
{protected:
	char tn[30];
	int age;
	char adrs[70];
	public:
		void in ();
		void out();
};
void Teacher::in()
{cout<<"\n\tEnter Teacher Name\n";
cin.getline(tn,30);
cout<<"\n\tEnter Address\n";
cin.getline(adrs,70);
cout<<"\n\tEnter Age \n";
cin>>age;
}
void Teacher::out()
{cout<<"\n\tTeacher Name is\t"<<tn;
cout<<"\n\tAge is\t"<<age;
cout<<"\n\tAddress is\t"<<adrs;
}
class Writer
{protected:
	char wn[30];
	int nob;
	char wad[70];
	public:
		void inp();
		void outp();
};
void Writer::inp()
{cout<<"\n\tEnter writer no of books\n";
cin>>nob;
cout<<"\n\tEnter Writer Name\n";
cin.getline(wn,30);
cout<<"\n\tEnter Writer address\n";
cin.getline(wad,70);
}
void Writer::outp()
{cout<<"\n\tWriter Name is\t"<<wn;
cout<<"\n\tWriter Address is\t"<<wad;
cout<<"\n\tNO. of Books\t"<<nob;
}
class Scholar:public Teacher,public Writer
{
};
int main()
{Scholar obj;
obj.in();
obj.out();
obj.inp();
obj.outp();
system("pause");
return 0;
}
