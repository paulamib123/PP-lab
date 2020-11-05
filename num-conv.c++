#include <iostream>
#include <math.h>

using namespace std;

int bin_to_decimal(long long bin)
{
    int decimal = 0, rem, i = 0;
    string temp = to_string(bin);

    for (int j = 0; j < temp.length(); j++) {
        if (temp[j] != '1' && temp[j] != '0') {
            return 0;
        }
    }
    
    while (bin != 0)
    {
        rem = bin % 10;
        decimal += rem * pow(2, i);
        bin /= 10;
        i++;
    }
    return decimal;
}

long long decimal_to_bin(int decimal)
{
    long long bin = 0;
    int rem, i = 1;
    while (decimal != 0)
    {
        rem = decimal % 2;
        decimal /= 2;
        bin += rem * i;
        i *= 10;
    }
    return bin;
}

int oct_to_decimal(long long oct)
{
    int decimal = 0, rem, i = 0;
    string temp = to_string(oct);

    for (int j = 0; j < temp.length(); j++) {
        if (temp[j] >= '8' || temp[j] < '0') {
            return 0;
        }
    }

    while (oct != 0)
    {
        rem = oct % 10;
        decimal += rem * pow(8, i);
        oct /= 10;
        i++;
    }
    return decimal;
}

long long decimal_to_oct(int decimal)
{
    long long bin = 0;
    int rem, i = 1;
    while (decimal != 0)
    {
        rem = decimal % 8;
        decimal /= 8;
        bin += rem * i;
        i *= 10;
    }
    return bin;
}

void decimal_to_hex(int n)
{
    char hex[100];

    int i = 0;
    while (n != 0)
    {

        int temp = 0;
        temp = n % 16;

        if (temp < 10)
        {
            hex[i] = temp + 48;
            i++;
        }
        else
        {
            hex[i] = temp + 55;
            i++;
        }

        n = n / 16;
    }

    for (int j = i - 1; j >= 0; j--)
        cout << hex[j];

    cout << endl;
}

int hex_to_decimal(char hex[])
{

    int len = strlen(hex);
    int dec = 0;
    int base = 1;

    for (int i = 0; i < len; i++)
    {
        if (hex[i] >= 'G')
        {
            return 0;
        }
    }

    for (int i = len - 1; i >= 0; i--)
    {
        if (hex[i] >= '0' && hex[i] <= '9')
        {
            dec += (hex[i] - 48) * base;
            base = base * 16;
        }
        else if (hex[i] >= 'A' && hex[i] <= 'F')
        {
            dec += (hex[i] - 55) * base;
            base = base * 16;
        }
    }
    return dec;
}

int main()
{
    long long bin, oct;
    int dec, choice, ans;
    char hex[100], ch;

    do
    {
        cout << "Menu" << endl;
        cout << "1. Decimal To Binary" << endl;
        cout << "2. Binary To Decimal" << endl;
        cout << "3. Decimal to Octal" << endl;
        cout << "4. Octal to Decimal" << endl;
        cout << "5. Decimal to Hexadecimal" << endl;
        cout << "6. Hexadecimal to Decimal" << endl;
        cout << "Enter your choice" << endl;
        cin >> choice;

        switch (choice)
        {

        case 1:
            cout << "Enter Decimal Number: ";
            cin >> dec;
            cout << "Binary Number is: " << decimal_to_bin(dec) << endl;
            cout << endl;
            break;

        case 2:
            cout << "Enter Binary Number: ";
            cin >> bin;
            ans = bin_to_decimal(bin);
            if (ans == 0) 
            {
                cout << "Please Enter a Valid Number!" << endl;
            }
            else
            {
                cout << "Decimal Number is: " << ans << endl;
                cout << endl;
            }
            break;

        case 3:
            cout << "Enter Decimal Number: ";
            cin >> dec;
            cout << "Octal Number is: " << decimal_to_oct(dec) << endl;
            cout << endl;
            break;

        case 4:
            cout << "Enter Octal Number: ";
            cin >> oct;
            ans = oct_to_decimal(oct);
            if (ans == 0) 
            {
                cout << "Please Enter a Valid Number!" << endl;
            }
            else
            {
                cout << "Decimal Number is: " << ans << endl;
                cout << endl;
            }
            break;

        case 5:
            cout << "Enter Decimal Number: ";
            cin >> dec;
            cout << "Hexadecimal Number is: ";
            decimal_to_hex(dec);
            cout << endl;
            break;

        case 6:
            cout << "Enter Hexadecimal Number: ";
            cin >> hex;
            ans = hex_to_decimal(hex);
            if (ans == 0) 
            {
                cout << "Please Enter a Valid Number!" << endl;
            }
            else
            {
                cout << "Decimal Number is: " << ans << endl;
                cout << endl;
            }
            break;

        default:
            cout << "Wrong Choice please enter again." << endl;
            break;
        }
        cout << "Do you want to continue ? (y or n)" << endl;
        cin >> ch;
        cout << endl;
    } while (ch == 'y');

    return 0;
}
