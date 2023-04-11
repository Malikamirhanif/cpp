# include<iostream>
using namespace std ;
int main()
{int i,j,a[5][7],x,y;
cout<<"Enter students Dtat\n";
for(i=0;i<5;i++)
for(j=0;j<5;j++)
{cin>>a[i][j];
}
cout<<"Enetr student Row # , and Place #\n";
cout<<"Enter Row Number\n";
cin>>x;
cout<<"Enetr Student #\n";
cin>>y;
x=x-1;y=y-1;
cout<<"Students Marks are\n";
cout<<a[x][y];
system("pause");
return 0;
	
	
	
}
