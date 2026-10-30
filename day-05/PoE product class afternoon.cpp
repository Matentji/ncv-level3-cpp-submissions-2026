
#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
using namespace std;

// Create Product class
class Product {

private:
    string productName;
    double price;
    int quantityInStock;

public:

    // Default constructor
    Product() {
        productName = "";
        price = 0.0;
        quantityInStock = 0;
    }

    // Setter methods
    void setProductName(string name) {
        if (name != "") {
            productName = name;
        }
        else {
            cout << "Product name cannot be empty!" << endl;
        }
    }

    void setPrice(double p) {
        if (p >= 0) {
            price = p;
        }
        else {
            cout << "Price cannot be negative!" << endl;
        }
    }

    void setQuantityInStock(int quantity) {
        if (quantity >= 0) {
            quantityInStock = quantity;
        }
        else {
            cout << "Quantity cannot be negative!" << endl;
        }
    }

    // Getter methods
    string getProductName() {
        return productName;
    }

    double getPrice() {
        return price;
    }

    int getQuantityInStock() {
        return quantityInStock;
    }

};

// =====================================
// NON-MEMBER FUNCTION 1
// GetProductData()
// =====================================

void GetProductData(Product &product) {

    string name;
    double price;
    int quantity;

    cout << "Enter product name: ";
    getline(cin, name);

    product.setProductName(name);

    cout << "Enter product price: R";
    cin >> price;

    product.setPrice(price);

    cout << "Enter quantity in stock: ";
    cin >> quantity;

    product.setQuantityInStock(quantity);

    cin.ignore(1000, '\n');
}

// =====================================
// NON-MEMBER FUNCTION 2
// DisplayProduct()
// =====================================

void DisplayProduct(Product product) {

    cout << "Product Name: "
         << product.getProductName() << endl;

    cout << "Price: R"
         << product.getPrice() << endl;

    cout << "Quantity in Stock: "
         << product.getQuantityInStock() << endl;
}

// =====================================
// NON-MEMBER FUNCTION 3
// ProductCompare()
// =====================================

void ProductCompare(Product product1, Product product2) {

    string name1 = product1.getProductName();
    string name2 = product2.getProductName();

    if (!name1.empty() && !name2.empty() &&
        toupper(static_cast<unsigned char>(name1[0])) ==
        toupper(static_cast<unsigned char>(name2[0]))) {

        cout << "Both product names start with the same character."
             << endl;
    }
    else {
        cout << "The product names start with different characters."
             << endl;
    }
}

// =====================================
// MAIN PROGRAM
// =====================================

int main() {

    // Create two product objects
    Product product1;
    Product product2;

    // Get data for first product
    cout << "===== ENTER PRODUCT 1 DETAILS =====" << endl;
    GetProductData(product1);

    // Get data for second product
    cout << "\n===== ENTER PRODUCT 2 DETAILS =====" << endl;
    GetProductData(product2);

    // Display product information
    cout << fixed << setprecision(2);

    cout << "\n===== PRODUCT 1 =====" << endl;
    DisplayProduct(product1);

    cout << "\n===== PRODUCT 2 =====" << endl;
    DisplayProduct(product2);

    // Compare product names
    cout << "\n===== PRODUCT COMPARISON =====" << endl;
    ProductCompare(product1, product2);

    return 0;
}
