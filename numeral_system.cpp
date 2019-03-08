#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

/*
void quick_tobinary(int n){
    string r;
    while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
    cout << "quick_tobinary：" << r << endl;
}
*/

void numeral_convert(int decimal, const int convert){
    string r;
    int i = 0;
    
    while (decimal != 0)
    {
        int remainder = 0;
        remainder = decimal % convert;

        if (remainder<10)
            r = to_string(remainder) + r;
        else
        {
            r = (char)(remainder + 45);
        }
        i++;
        decimal = decimal / convert;
    }
    cout << "ANS: " << r << endl;
}


int main(){
    int decimal = 0;
    int c = 0;
    cout << "input a integer number: ___ (decimal)" << endl;
    cin >> decimal;

    cout << "Choice a numeral system to converted: __" << "\n"
            << "  -Input  2 : Binary     !" << "\n"
            << "  -Input  8 : Octal      !" << "\n"
            << "  -Input 16 : Hexadecimal!" << endl;
    cin >> c;
    numeral_convert(decimal, c);
    //quick_tobinary(decimal);
    return 0;
}

