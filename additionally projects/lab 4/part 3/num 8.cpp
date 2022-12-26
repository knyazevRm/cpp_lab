//
// Created by Роман Князев on 25.12.2022.
//

// Задание: Подсчитать количество слов, начинающихся с буквы “a”.

#include <iostream>
#include <string>

using namespace std;



string::size_type count_words_with_a_at_the_start(const string &s, const char target)
{
    const char *delimiter = " ,.";

    string::size_type count = 0;

    string::size_type pos = 0;
    while ((pos = s.find_first_not_of(delimiter, pos)) != string::npos) {
        string::size_type n = s.find_first_of(delimiter, pos);
        if (n == string::npos) {
            n = s.size();
        }

        if (s[pos] == target) {
            count++;
        }

        pos = n;
    }

    return count;
}

int main() {

    setlocale(LC_ALL, "Russian");

    const char TARGET_CHAR = 'a';

    string s;
    cout << "Input string:" << endl;
    getline(cin, s);

    cout <<"The string has "
         << count_words_with_a_at_the_start(s.c_str(), TARGET_CHAR) << " words, which at the start with "
         << TARGET_CHAR << " character."
         << endl;

    return 0;
}