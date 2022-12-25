//
// Created by Роман Князев on 25.12.2022.
//

// Задание: Ведомость абитуриентов, сдавших вступительные экзамены в университет,
// содержит ФИО абитуриента и его оценки. Определить средний балл по университету
// и вывести список абитуриентов,
// средний балл которых выше среднего балла по университету.

#include <iostream>
#include <string>

using namespace std;

struct student {
public:
    void set_fio(string fio) {
        this->fio = fio;
    }

    void set_assessment(double assessment) {
        this->assessment = assessment;
    }

    string get_fio() {
        return fio;
    }


    double get_assessment() {
        return assessment;
    }

    bool compare_assessments(double avg_assessment) {
        return get_assessment() > avg_assessment;
    }

private:
    string fio;
    double assessment;
} students[100];

int main() {

    setlocale(LC_CTYPE, "Russian");

    int num_of_students;

    cout << "Input number of students." << endl;
    cin >> num_of_students;

    for (int i = 0; i < num_of_students; ++i) {
        string fio;
        double assessment;

        cin.get();

        cout << "Input FIO: ";
        getline(cin, fio);

        cout << "Input assessment. Over 0 : ";
        cin >> assessment;

        cout << endl;

        students[i].set_fio(fio);
        students[i].set_assessment(assessment);
    }

    double sum_of_assessments = 0;

    for (int i = 0; i < num_of_students; ++i) {
        sum_of_assessments += students[i].get_assessment();
    }

    double avg_assessments = sum_of_assessments / num_of_students;

    cout << "Avg assessments = " << avg_assessments << endl;

    cout << "Students, who have assessment over then avg assessments." << endl;

    for (int i = 0; i < num_of_students; ++i) {
        if (students[i].compare_assessments(avg_assessments)) {
            cout << "FIO: " << students[i].get_fio() << endl;
            cout << "Assessment: " << students[i].get_assessment() << endl;
            cout << endl;
        }
    }

    return 0;
}