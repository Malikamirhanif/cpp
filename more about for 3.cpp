# include<iostream>
using namespace std;
int main()
{int a,b;
for(a=1,b=2;a<=5 && b<=20;a++,b+=2)//we can use relational operator in conditional part in this way when one of both conditions false for && operator and ome of both remains true  fo "or" operator the loop will execute
{cout<<"\n\t"<<a;
cout<<"\t"<<b;
  }  
  system("pause");
  return 0;
}
