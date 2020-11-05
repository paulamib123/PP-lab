#include <iostream>
using namespace std;

class Student {
    private:
        int prn;
        string name;
        int subject_no;
        float marks[10];
        float per;

    public:
        void getdata();
        void display_data();
        void calculate_per();
};

void Student :: getdata() {
    cout << "Enter name of student: ";
    cin >> name;
    cout << endl;
    cout << "Enter PRN: ";
    cin >> prn;
    cout << endl;
    cout << "Enter number of subjects: ";
    cin >> subject_no;
    cout << endl;
    for (int i = 0; i < subject_no; i++) {
        cout << "Enter marks for subject " << i + 1 << " : ";
        cin >> marks[i];
        if (marks[i] < 0 || marks[i] > 100) {
            cout << "Please enter marks between 0 - 100" << endl;
            cout << "Enter marks again: ";
            cin >> marks[i];
        }
        
    }
}

void Student :: display_data() {
    cout << "Name: " << name << endl;
    cout << "PRN: " << prn << endl;
    for (int i = 0; i < subject_no; i++) {
        cout << "Marks in subject " << i + 1 << " : " << "is " << marks[i] << endl;
    }
    cout << "Percentage is: " << per << "%" << endl;
    cout << endl;
}

void Student :: calculate_per() {
    float sum = 0, total;
    total = 100 * subject_no;

    for (int i = 0; i < subject_no; i++) {
        sum += marks[i];
    }

    per = (sum / total) * 100;
}

int main() {
    Student s[20];
    int n;
    cout << "Enter no. of students: ";
    cin >> n;
    cout << endl;

    for (int i = 0; i < n; i++) {
        s[i].getdata();
        cout << endl;
    }

    cout << endl;

    cout << "******* DATA **********" << endl;

    for (int i = 0; i < n; i++) {
        s[i].calculate_per();
        s[i].display_data();
        cout << endl;
    }
}
