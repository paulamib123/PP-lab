#include <iostream>
using namespace std;

class Complex {
    float real;
    float imaginary;

    public:
        Complex() {
            real = 0;
            imaginary = 0;
        }

        Complex(float a) {
            real = a;
            imaginary = a;
        }

        Complex(float a, float b) {
            real = a;
            imaginary = b;
        }

        void print(){
            cout << "Real part is: " << real << endl;
            cout << "Imaginary part is: " << imaginary << endl;
            cout << "Complex number is: " << real << " + " << imaginary << "i";
            cout << endl;
        }

        friend void add(Complex n1, Complex n2);
};

void add(Complex n1, Complex n2) {
    Complex temp;
    temp.real = n1.real + n2.real;
    temp.imaginary = n1.imaginary + n2.imaginary;
    cout << temp.real << " + " << temp.imaginary << "i" << endl;
}

int main() {
    float n, real, imaginary;

    Complex a;

    cout << "Enter value: ";
    cin >> n;
    cout << endl;
    Complex b(n);
    b.print();
    cout << endl;

    cout << "Enter real part: ";
    cin >> real;
    cout << "Enter Imaginary Part: ";
    cin >> imaginary;
    cout << endl;
    Complex c(real, imaginary);
    cout << "Sum is: ";
    c.print();
    cout << endl;

    add(b, c);
    
    return 0;
}



