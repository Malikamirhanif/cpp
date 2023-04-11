# include<iostream>
using namespace std;
class locphone
{protected:
	unsigned long ltn;
	public:
		void in ();
		void out ();
};
void locphone::in()
{cout<<"\n\tEnter Local Phone Number without code\n";
cin>>ltn;
}
void locphone::out()
{cout<<"\n\tLocal Phone Number is\t"<<ltn;
}
class Natphone:public locphone
{protected:
	long c;
	public:
		void in ();
		void out ();
	
};
void Natphone::in()
{locphone::in();
cout<<"\n\tEnter City code\n";
cin>>c;
}
void Natphone::out()
{locphone::out();
cout<<"\n\tPhone Number With City Code is\t"<<c<<"  "<<ltn;
}
class Intphone:public Natphone
{protected:
	long nc;
	public:
		void in ();
		void out();
};
void Intphone::in()
{Natphone::in();
cout<<"\n\tEnter National Phone Code\n";
cin>>nc;
}
void Intphone::out()
{
cout<<"\n\tPhone Number With International Code  is\t"<<nc;
Natphone::out();
}
int main()
{Intphone obj;
obj.in();
obj.out();
system("pause");
return 0;
}
