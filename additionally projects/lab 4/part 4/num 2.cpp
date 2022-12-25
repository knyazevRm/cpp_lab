//
// Created by Роман Князев on 25.12.2022.
//

// Задание: Список товаров, имеющихся на складе, включает в себя наименование товара,
// количество единиц товара, цену единицы и дату поступления товара на склад.
// Вывести список товаров, стоимость которых превышает 100 000 рублей.

#include <iostream>
#include <string>

using namespace std;

const double COST_ALL_PRODUCT = 100000;

struct product {
public:
    void set_type(string type) {
        this->type = type;
    }

    void set_number(double number) {
        this->number = number;
    }

    void set_cost_of_one_product(double cost_of_one_product) {
        this->cost_of_one_product = cost_of_one_product;
    }

    void set_date(string date) {
        this->date = date;
    }

    string get_type() {
        return type;
    }

    double get_number() {
        return number;
    }

    double get_cost_of_one_product() {
        return cost_of_one_product;
    }

    string get_date() {
        return date;
    }

    bool checking_that_all_product_over_const() {
        return COST_ALL_PRODUCT < get_number() * get_cost_of_one_product();
    }

private:
    string type;
    double number;
    double cost_of_one_product;
    string date;
} products[100];

int main() {

    setlocale(LC_CTYPE, "Russian");

    int num_of_product;

    cout << "Input num of product." << endl;
    cin >> num_of_product;

    cin.get();

    for (int i = 0; i < num_of_product; ++i) {
        string type;
        double number;
        double cost_of_one_product;
        string date;

        cout << "Input type: ";
        getline(cin, type);

        cout << "Input number. Over 0 : ";
        cin >> number;

        cout << "Input cost of one product. Over 0 : ";
        cin >> cost_of_one_product;

        cin.clear();
        cin.get();

        cout << "Input date: ";
        getline(cin, date);

        cout << endl;

        products[i].set_type(type);
        products[i].set_number(number);
        products[i].set_cost_of_one_product(cost_of_one_product);
        products[i].set_date(date);
    }

    cout << "Product, which have cost over then 100_000." << endl;

    for (int i = 0; i < num_of_product; ++i) {
        if (products[i].checking_that_all_product_over_const()) {
            cout << "Type: " << products[i].get_type() << endl;
            cout << "Number: " << products[i].get_number() << endl;
            cout << "Cost of one product: " << products[i].get_cost_of_one_product() << endl;
            cout << "Date: " << products[i].get_date() << endl;

            cout << endl;
        }
    }

    return 0;
}
