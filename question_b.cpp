#include <iostream>
#include <iterator>
#include <algorithm>
#include <bitset>
#include<iomanip>

using namespace std;

double fRand(double fMin, double fMax)
{
    double f = (double)rand() / RAND_MAX;
    return fMin + f * (fMax - fMin);
}

double convert_to_binary(double num){
    string binary_num = "";
    string remark = "";
    int decimal_counter = 0;

    int whole_num = num;
    double fraction_num = num - whole_num;

    while (whole_num > 0)
    {
        int rem = whole_num % 2;
        binary_num.push_back(rem + '0');
        whole_num /= 2;
    }

    reverse(binary_num.begin(), binary_num.end());
    
    binary_num.push_back('.');

    while(decimal_counter < 6)
    {
        if (fraction_num == 0.0)
        {
            remark = "Exactly";
            break;
        }else
        {
            fraction_num *= 2;

            int fraction_binary = fraction_num;

            if (fraction_binary == 1)
            {
                fraction_num -= fraction_binary;
                binary_num.push_back(1 + '0');
            }else
            {
                binary_num.push_back(0 + '0');
            }
            remark = "Approximate";
        }
        decimal_counter++;
    }

    cout <<"\t" <<num << "\t\t\t";
    cout << binary_num << "\t\t\t";
    cout << remark << "\n\n";    
    
}

int main(){    
    double numbers[30];
      for (int i=0; i < 30; i++) 
      {
        double n= fRand(1,200);
        numbers[i] = n;
        //cout <<numbers[i]<<"\n";
      }
    cout<< "Index\t"<<"Decimal Number\t\t" <<"Binary Number\t\t\t" <<"Remark";
    //looping all the numbers
    double n;
    for(int k=0; k < 30; k++) 
    { 
        cout<<"\n";
        n= numbers[k];
        cout<<k+1<<". ";
        double num=convert_to_binary(n);  
    }
    return 0;
}