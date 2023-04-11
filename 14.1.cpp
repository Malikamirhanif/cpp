# include<iostream>
using namespace std;
class time
{int h,m,s;
public:
	time()
	{h=12;
	m=34;
	s=15;
	}
	void show(void)
	{cout<<"\n\ttime is\n"<<h<<":"<<m<<":"<<s;
	}
	void operator ++()
	{m=m+1;
	}
	void operator --()
	{m=m-1;
	}
};
int main()
{time obj;
obj.show();
++obj;
obj.show();
--obj;
obj.show();
system("pause");
return 0;
}
