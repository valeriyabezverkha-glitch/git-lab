#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string prizv;  // прізвище
    string imya;   // ім’я
    string grupa;  // група
    int rik_nar;   // рік народження
};

int main() {
    const int N = 3; 
    Student x[N];

    cout << "Enter the details for " << N << " students:\n";

    for (int i = 0; i < N; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        cout << "Surname: ";
        cin >> x[i].prizv;
        cout << "Name: ";
        cin >> x[i].imya;
        cout << "Group: ";
        cin >> x[i].grupa;
        cout << "Year: ";
        cin >> x[i].rik_nar;
    }

    cout << "\nStudents born in 1986:\n";

    for (int i = 0; i < N; i++) {
        if (x[i].rik_nar == 1986)
            cout << x[i].prizv << endl;
    }

    return 0;
}
