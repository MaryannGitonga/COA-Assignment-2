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
	
    for (int i = 0; i <= 256; i++)
    {
        cout << "Decimal: " << i << "\t";
        cout << "Binary: " << dec(i) << "\t";
        cout << "Hexadecimal: " << ((i == 0)? "0" : hex(i)) << "\n\n";
    }
    



}

