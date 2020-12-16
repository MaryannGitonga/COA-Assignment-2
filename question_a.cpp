#include <iostream>
using namespace std;
int dec(int n)
{
	int bin=0, i=1;
	while(n!=0)
	{
		bin=bin+(n%2)*i;
		n=n/2;
		i=i*10;
	}
	return bin;
}


int main()
{
	int n,temp,i=1,j,r;
	char hex[50];
	temp=n;
	while(temp!=0)
	{
		r =temp %16;
		if(r<10)
		hex[i++]=r +48;
		else
		hex[i++]=r +55;
		temp=temp/16;
		for(j=i;j>0;j--)
		cout<<hex[j];
		return 0;
		
	}
	cout<<"Decimal(base 10)\t Binary(base 2)\t \t \t Hexadecimal(base 16)";
	cin>>n;
	cout<<"\t \t \t "<<dec(n)<<"\t \t \t"<<"\t \t \t"<<hex[j]<<endl;
}

