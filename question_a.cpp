#include <iostream>
#include <iterator>
#include <algorithm>
#include <bitset>
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

string hex(int num){
    string hex("");
    while(num > 0){
        int rem = num % 16;
        if(rem > 9){
            switch(rem){
                case 10:
                    hex.append("A");
                    break;
                case 11:
                    hex.append("B");
                    break;
                case 12:
                    hex.append("C");
                    break;
                case 13:
                    hex.append("D");
                    break;
                case 14:
                    hex.append("E");
                    break;
                case 15:
                    hex.append("F");
                    break;
            }
        }else{
            hex.append(to_string(rem));
        }
        num /= 16;
    }
    reverse(hex.begin(),hex.end());
    return move(hex);
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

