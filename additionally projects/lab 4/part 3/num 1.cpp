//
// Created by Роман Князев on 25.12.2022.
//

// Задание: Найти количество слов, состоящих из пяти символов.

#include <iostream>
#include <string>

using namespace std;

const string::size_type TARGET_LENGTH = 5;

string::size_type count_words(const string &s, string::size_type length = TARGET_LENGTH)
{
    const char *delimiter = " ,.";

    string::size_type count = 0;

    string::size_type pos = 0;
    while ((pos = s.find_first_not_of(delimiter, pos)) != string::npos) {
        string::size_type n = s.find_first_of(delimiter, pos);
        if (n == string::npos) {
            n = s.size();
        }

        count += n - pos == length;

        pos = n;
    }

    return count;
}

int main() {

    setlocale(LC_ALL, "Russian");

    string s;
    cout << "Input string:" << endl;
    getline(cin, s);

    cout <<"The string has "
        << count_words(s.c_str()) << " words of "
        << TARGET_LENGTH << " characters."
        << endl;

    return 0;
}