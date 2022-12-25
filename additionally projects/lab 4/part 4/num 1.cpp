//
// Created by Роман Князев on 25.12.2022.
//

// Задание: В магазине сформирован список постоянных клиентов,
// который включает ФИО, домашний адрес покупателя и размер предоставляемой скидки.
// Вывести всех покупателей, имеющих 5 % - ную скидку.

#include <iostream>
#include <string>

using namespace std;

const double DISCOUNT = 5;

struct client {
public:
    void set_fio(string fio) {
        this->fio = fio;
    }

    void set_address(string address) {
        this->address = address;
    }

    void set_discount(double discount) {
        this->discount = discount;
    }

    string get_fio() {
        return fio;
    }

    string get_address() {
        return address;
    }

    double get_discount() {
        return discount;
    }

    bool checking_that_discount_eq_const() {
        return DISCOUNT == get_discount();
    }

private:
    string fio;
    string address;
    double discount;
} clients[100];

int main() {

    setlocale(LC_CTYPE, "Russian");

    int num_of_client;

    cout << "Input number of client." << endl;
    cin >> num_of_client;

    cin.get();

    for (int i = 0; i < num_of_client; ++i) {
        string fio;
        string address;
        double discount;

        cout << "Input FIO: ";
        getline(cin, fio);

        cout << "Input discount. Over 0 : ";
        cin >> discount;

        cin.clear();
        cin.get();

        cout << "Input address: ";
        getline(cin, address);

        cout << endl;

        clients[i].set_fio(fio);
        clients[i].set_address(address);
        clients[i].set_discount(discount);
    }

    cout << "Clients, who have discount equals 5." << endl;

    for (int i = 0; i < num_of_client; ++i) {
        if (clients[i].checking_that_discount_eq_const()) {
            cout << "FIO: " << clients[i].get_fio() << endl;
            cout << "Discount: " << clients[i].get_discount() << endl;
            cout << "Address: " << clients[i].get_address() << endl;

            cout << endl;
        }
    }

    return 0;
}
