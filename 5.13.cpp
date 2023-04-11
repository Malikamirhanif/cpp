# include<iostream>
# include<math.h>
using namespace std;
int main()
{int a,b,c,v1,v2;
cout<<"Enter values of quadratic equation:   \n     As ax+bx^2+c\n";
cout<<"Enter value of  ax means a\n";
cin>>a;
cout<<"Enter value of bx^2 means b\n";
cin>>b;
cout<<"Enter value of c\n";
cin>>c;
v1=(-b+sqrt(b*b-(4*a*c)))/2*a;
v2=(-b-sqrt(b*b-(4*a*c)))/2*a;
cout<<"solution is\t"<<v1<<"\t"<<v2;
system ("pause");
return 0;
}
