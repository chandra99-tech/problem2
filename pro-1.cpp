#include <iostream>
#include <string.h> 
#include<stdexcept>
#include<fstream>
using namespace std;

// Items class
class items {
public:
    int itemID;
    string itemName;
    double price;
    int stockQuantity;

    // Default constructor
    items() {
        itemID = 0;
        itemName = "";
        price = 0.0;
        stockQuantity = 0;
    }

    // Parameterized constructor
    items(int id, string name, double p, int sq) {
        itemID = id;
        itemName = name;
        price = p;
        stockQuantity = sq;
    }
    void input(){
        cout<<"Enter Iteam ID : "<<endl;
        cin>>itemID;
        cin.ignore();
        cout<<"Enter The Item Name: "<<endl;
        getline(cin,itemName);
        cout<<"Enter the Price of Item: "<<endl;
        cin>>price;
        cout<<"Stock Quantity : "<<endl;
        cin>>stockQuantity;
    }

    void display() {
        cout << "Item ID: " << itemID << ", Item Name: " << itemName 
             << ", Price: " << price << ", Quantity: " << stockQuantity << endl;
    }
};

// Bill class (no inheritance from items)
class bill {
public:
    int billID;
    string customerName;
    double totalPrice; // To store the total price of items
    items purchasedItem; // Composition: bill contains an item

    // Default constructor
    bill() {
        billID = 0;
        customerName = "";
        totalPrice = 0.0;
    }

    // Parameterized constructor
    bill(int b, string cname) {
        billID = b;
        customerName = cname;
        totalPrice = 0.0;
    }

    void input(){
        cout<<"Bill Id : ";
        cin>>billID;
        cin.ignore();
        cout<<"Enter Customer Name : ";
        getline(cin, customerName);
    }

    // Display bill details
    void display() {
        cout << "Bill ID: " << billID << endl;
        cout << "Customer Name: " << customerName << endl;
        if (purchasedItem.itemID != 0) { 
            cout << "Purchased Item: ";
            purchasedItem.display();
        }
        try
        {
            if(totalPrice<0)
            throw(runtime_error("Price Should Always Be Positive"));
             cout << "Total Price: " << totalPrice << endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
       
    }

    // Operator+ to add an item to the bill
    bill operator+( items& obj) {
        bill temp = *this; 
        temp.purchasedItem = obj; 
        //temp.totalPrice += obj.price;
        temp.totalPrice=obj.price*obj.stockQuantity;
        return temp; 
    }

    void saveToFile() {
        ofstream outFile("bill.txt", ios::app); // Open file in append mode
        if (outFile.is_open()) {
            outFile << "Bill ID: " << billID << endl;
            outFile << "Customer Name: " << customerName << endl;
            outFile << "Total Price: " << totalPrice << endl;
            if (purchasedItem.itemID != 0) {
                outFile << "Purchased Item: ID: " << purchasedItem.itemID 
                        << ", Name: " << purchasedItem.itemName 
                        << ", Price: " << purchasedItem.price 
                        << ", Stock Quantity: " << purchasedItem.stockQuantity << endl;
            } else {
                outFile << "No items in the bill." << endl;
            }
            outFile << "------------------------" << endl; // Separator for readability
            outFile.close();
            cout << "Bill details saved to bill.txt" << endl;
        } else {
            cout << "Error: Unable to open file for writing!" << endl;
        }
    }
};


int main() {
    // Create an item with meaningful values
    items i/*(1, "Pen", 10.0, 5)*/;
    cout<<"Enter Items Detail :\n";
    i.input();

    // Create a bill
    bill b/*(1001, "Ayush Ankush Jadhav")*/;
    b.input();

    // Display the original bill
    cout << "Original Bill:" << endl;
    b.display();

    // Add an item to the bill using operator+
    bill b2 = b + i;

    // Display the updated bill
    cout << "\nBill after adding item:" << endl;
    b2.display();

    //Save To files
    b2.saveToFile();

    return 0;
}