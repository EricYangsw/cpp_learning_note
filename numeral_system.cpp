#include <iostream>
#include <stdio.h>
using namespace std;



void numeral_convert(int decimal, const int convert){
    char binary_result[100];

    int i = 0;
    while (decimal != 0)
    {
        int remainder = 0;
        remainder = decimal % convert;

        if (remainder<10)
            binary_result[i] = remainder + '0';
        else{
            switch(remainder){
                case 10: binary_result[i] = 'A';
                case 11: binary_result[i] = 'B';
                case 12: binary_result[i] = 'C';
                case 13: binary_result[i] = 'D';
                case 14: binary_result[i] = 'E';
                case 15: binary_result[i] = 'F';
            }
        }
        i++;
        decimal = decimal / convert;
    }
    cout << "ANS: ";
    for (int idx = i-1; idx >= 0; idx--)
        cout << binary_result[idx];
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

    return 0;
}