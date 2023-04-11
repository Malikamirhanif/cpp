# include <iostream>
using namespace std;
int main()
{int a,b,max1,max2,n,i;
cout<<"Enter number of students";
cin>>n;
cout<<"Enter marks of student";
cin>>a;
max1=a;
max2=a;
for(i=1;i<n;i++)
{cout<<"Enter marks of student";
cin>>b;
if(b>max1)
max1=b;
if(b>max2)
max2=b;
}
cout<<"highest"<<max1<<"\n";
cout<<"second highest"<<max2;
system("pause");
return 0;
}
