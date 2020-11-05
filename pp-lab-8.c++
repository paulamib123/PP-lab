#include <iostream>
using namespace std;

class Complex
{
    int real;
    int imaginary;

public:
    void input(int n) {
        cout << "Enter real and imaginary part for complex number: " << n << endl;
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imaginary;
    }

    void operator ++ ()
    {
        ++real;
    }

    void operator ++ (int)
    {
        real++;
    }

    bool operator < (Complex c)
    {
        if (real == c.real)
        {
            return imaginary < c.imaginary;
        }
        else
        {
            return real < c.real;
        }
    }

    friend Complex operator + (Complex c1, Complex c2) {
        Complex temp;
        temp.real = c1.real + c2.real;
        temp.imaginary = c1.imaginary + c2.imaginary;
        return temp;
    }

    void print(int n)
    {
        cout << "Complex number " << n << " is: " << real << " + " << imaginary << "i" << endl;
    }
};

int main()
{

    int a, b;
    int choice;
    Complex c1;
    Complex c2;
    Complex c3;
    char ch;

    do {

    cout << "Menu" << endl;
    cout << "1. Prefix Increment Operator" << endl;
    cout << "2. Postfix Increment Operator" << endl;
    cout << "3. Compare two complex numbers" << endl;
    cout << "4. Add two complex numbers" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        c1.input(1);
        c1.print(1);
        ++c1;
        c1.print(2);
        break;

    case 2:
        c1.input(1);
        c1.print(1);
        c1++;
        c1.print(2);
        break;

    case 3:
        c1.input(1);
        c2.input(2);
        c1.print(1);
        c2.print(2);
        if (c1 < c2)
        {
            cout << "Complex number 1 is less than Complex number 2" << endl;
        }
        else
        {
            cout << "Complex number 2 is less than Complex number 1" << endl;
        }
        break;

    case 4:
        c1.input(1);
        c2.input(2);
        c1.print(1);
        c2.print(2);
        c3 = c1 + c2;
        c3.print(3);
        break;
    
    default:
        cout << "Wrong Choice!";

    }
    cout << "Do you want to enter again ? (y/n)" << endl;
    cin >> ch;
    } while (ch == 'y');

    return 0;
}