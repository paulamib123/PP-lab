#include <iostream>
using namespace std;

class Cart
{
private:
    int count;
    int code[100];
    float price[100];
    float sum;
    int quantity[100];

public:
    void set_initial();
    void add_item();
    void display_item();
    void display_sum();
    void delete_item();
};

void Cart :: set_initial()
{
    count = 0;
    sum = 0;
}

void Cart :: add_item()
{   
    cout << "Enter Item Code: ";
    cin >> code[count];
    cout << "Enter Item Price: ";
    cin >> price[count];
    cout << "Enter Item Quantity: ";
    cin >> quantity[count];
    count++;
    

}

void Cart :: display_sum() 
{
    for (int i = 0; i < count; i++) {
        sum += price[i] * quantity[i];
    }

    cout << "The total price of items is: " << sum;
}

void Cart :: delete_item()
{
    int c, flag = 0, index;
    cout << "Enter code to delete item: ";
    cin >> c;

    for (int i = 0; i < count; i++) {
        if (code[i] == c) {
            index = i;
            flag = 1;
            break;
        } 
    }

    if (flag == 0) {
        cout << "Item with code " << c << " is not found!";
        return;
    }

    else {

        for (int i = index; i <= count; i++) {
            code[i] = code[i + 1];
            price[i] = price[i + 1];
            quantity[i] = quantity[i + 1];
        }
        count--;
    }
    
}

void Cart ::display_item()
{   
    for (int i = 0; i < count; i++) {
        cout << code[i] << "   " << price[i] << "   " << quantity[i] << endl;
    }
    
}

int main()
{
    Cart item;
    int choice;
    char ch;

    item.set_initial();

    do
    {
        cout << "\n Menu";
        cout << "\n 1. Add Item";
        cout << "\n 2. Display Items";
        cout << "\n 3. Display Sum";
        cout << "\n Enter your choice: ";
        cin >> choice;
        cout << endl;
        
        switch (choice)
        {
        case 1:
            item.add_item();
            cout << endl;
            break;

        case 2:
            cout << "Code" << " " << "Price" << " " << "Quantity" << endl;
            item.display_item();
            cout << endl;
            break;

        case 3:
            item.display_sum();
            cout << endl;
            break;
        
        case 4:
            item.delete_item();
            cout << endl;
            break;

        default:
            cout << "Wrong choice!";
        }

        cout << "Do you want to enter again? (y/n)";
        cin >> ch;

    } while (ch == 'y');

        return 0;
}