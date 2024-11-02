#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string model;
    string country;
    int year;
    double price;

public:
   
    Car() : model(""), country(""), year(0), price(0.0) {}

    
    Car(const string& m, const string& c, int y, double p) : model(m), country(c), year(y), price(p) {}

    string getModel() const { return model; }
    void setModel(const string& m) { model = m; }

    string getCountry() const { return country; }
    void setCountry(const string& c) { country = c; }

    int getYear() const { return year; }
    void setYear(int y) { year = y; }

    double getPrice() const { return price; }
    void setPrice(double p) { price = p; }

    void input() {
        cout << "Enter model: ";
        cin >> model;
        cout << "Enter country: ";
        cin >> country;
        cout << "Enter year: ";
        cin >> year;
        cout << "Enter price: ";
        cin >> price;
    }

    void print() const {
        cout << "Model: " << model << endl;
        cout << "Country: " << country << endl;
        cout << "Year: " << year << endl;
        cout << "Price: $" << price << endl;
    }
};

int main() {
    Car car1;
    car1.input();
    cout << "Car 1 details:" << endl;
    car1.print();
    Car car2("Tesla Model S", "USA", 2021, 79999.99);
    cout << "\nCar 2 details:" << endl;
    car2.print();

    return 0;
}
