# include<iostream>
# include<math.h>
using namespace std;
int main()
{float i=1,j;
float den=0.0,sum=0.0;
for(j=2;j<=100 && i<j;j++)

{den=i/j;

sum=sum+den;
i++;

}
cout<<"sum is\t"<<sum;
system("pause");
return 0;
}
