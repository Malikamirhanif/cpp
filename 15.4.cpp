# include<iostream>
using namespace std;
int i;
class Book
{protected:
	int bid;
	char bn[15];
	float p;
	public:
		void in();
		void out();
};
void Book::in()
{cout<<"\n\tEnter Book Name\n";
cin.getline(bn,15);
cout<<"\n\tEnter Book id\n";
cin>>bid;
cout<<"\n\tEnter price\n";
cin>>p;
}
void Book::out()
{cout<<"\n\tBook Name is\t"<<bn<<"\n\tBook id\t"<<bid<<"\n\tBook Price\t"<<p;
}
class writer 
{protected:
	char wn[20];
	int nob;
	char adrs[50];
	Book obj[5];
	public:
		void inp();
		void outp();
};
void writer::inp()
{cout<<"\n\tEnter Writer Name\n";
cin.getline(wn,20);
cout<<"\n\tEnter No of Books\n";
cin>>nob;
cout<<"\n\tEnter Address\n";
cin.getline(adrs,50);
cout<<"\n\tEnter Record of 5 Books\n";
for(i=0;i<5;i++)
{obj[i].in();
}
}
void writer::outp()
{cout<<"\n\tWriter Name\t"<<wn<<"\n\tNo of Books\t"<<nob<<"\n\tAddress\t"<<adrs;
cout<<"\n\tRecord of 5 Books\n";
for(i=0;i<5;i++)
{obj[i].out();
}
for(i=0;i<5;i++)
{obj[i].out();
}
}
int main()
{writer n;
n.inp();
n.outp();
system("pause");
return 0;
}
