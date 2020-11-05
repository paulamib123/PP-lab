#include <iostream>

using namespace std;

struct complex {
    float real;
    float imag;
};

struct complex add(struct complex n1, struct complex n2);

int main(){
    struct complex result, n1, n2;
    cout << "For 1st complex number" << endl;
    cout << "Enter the real and imaginary part: ";
    cin >> n1.real >> n1.imag;
    cout << endl;
    cout << "For 2nd complex number" << endl;
    cout << "Enter the real and imaginary part: ";
    cin >> n2.real >> n2.imag;
    cout << endl;
    result = add(n1, n2);
    cout << "Sum = " << result.real << " + (" << result.imag << "i)" << endl;
    return 0;
}

struct complex add (struct complex n1, struct complex n2){
    struct complex result;
    result.real = n1.real + n2.real;
    result.imag = n1.imag + n2.imag;
    return (result);
}
