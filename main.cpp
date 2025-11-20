#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string surname;  // прізвище
    string name;   // ім’я
    string group;  // група
    int data_birth;   // рік народження
};

int main() {
    const int N = 3; 
    Student x[N];

    cout << "Enter information " << N << " students:\n";

    for (int i = 0; i < N; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        cout << "Surname: ";
        cin >> x[i].surname;
        cout << "Name: ";
        cin >> x[i].name;
        cout << "Group: ";
        cin >> x[i].group;
        cout << "Year: ";
        cin >> x[i].data_birth;
    }

    cout << "\nStudents born in 1986:\n";

    for (int i = 0; i < N; i++) {
        if (x[i].data_birth == 1986)
            cout << x[i].surname << endl;
    }

    return 0;
}
