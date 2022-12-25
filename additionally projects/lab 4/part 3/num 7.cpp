//
// Created by Роман Князев on 25.12.2022.
//

// Задание: Найти все числа в строке. Каждое число вывести в отдельной строке.

#include <iostream>
#include <string>

using namespace std;

string get_number_from_string(const string &s, int first_index, int last_index) {
    return string(s, first_index, last_index - first_index);
}

int main() {

    setlocale(LC_ALL, "Russian");

    string s;
    cout << "Input string:" << endl;
    getline(cin, s);

    const char DIGITS[11] = "1234567890";

    bool flag_number = false;
    int index_first_digit = 0;

    cout << "Number: " << endl;

    for (int i = 0; i < strlen(s.c_str()); ++i) {
        if (strchr(DIGITS, s[i])) {
            if (!flag_number) {
                flag_number = true;
                index_first_digit = i;
            }
        } else {
            if (flag_number) {
                flag_number = false;
                string temp_number = get_number_from_string(s.c_str(), index_first_digit, i);
                cout << temp_number << endl;
            }
        }
    }

    if (flag_number && strchr(DIGITS, s[strlen(s.c_str()) - 1])) {
        cout << get_number_from_string(s.c_str(), index_first_digit, strlen(s.c_str())) << endl;
    }

    return 0;
}
