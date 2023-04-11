# include<iostream>
# include<math.h>
using namespace std;
void pf (void);
int p=0,n,i,j,k,l,m;
int main()
{pf ();
system ("pause");
return 0;
 } 
 void pf (void)
 {cout<<"Enter a Number\n";
 cin>>n;
 m=n;
 for (i=2;i<=m/2;i++)
 {p=0;
 for(j=2;j<=i;j++)
 {if(i%j==0)
 {p++;
 }
 if(p==1)
 if(n%i==0)
 {do
 {if(n%i==0)
 {n=n/i;
 cout<<i<<"  ";
 }
 }while(n%i==0)
 ;}
 }
 }
 }
