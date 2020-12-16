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
	
    for (int i = 0; i <= 256; i++)
    {
        cout << "Decimal: " << i << "\t";
        cout << "Binary: " << dec(i) << "\t";
        cout << "Hexadecimal: " << ((i == 0)? "0" : hex(i)) << "\n\n";
    }
    



}

