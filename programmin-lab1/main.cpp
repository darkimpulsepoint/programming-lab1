#include <iostream>
#include <cmath>
#include <string>

using namespace std;

const int days_number = 7;

void task1() {
    double v, u, t1, t2;

    cout << "Enter boat speed: (km/h)" << endl;
    cin >> v;

    cout << "Enter river speed: (km/h)" << endl;
    cin >> u;

    cout << "Enter T1 (h.)" << endl;
    cin >> t1;

    cout << "Enter T2 (h.)" << endl;
    cin >> t2;

    double s = v * t1 + (v - u) * t2;
    cout << "S: " << s << " km" << endl;
}


void task2() {
    double v1, v2, s, t;

    cout << "Enter speed of car 1: (km/h) " << endl;
    cin >> v1;

    cout << "Enter speed of car 2: (km/h) " << endl;
    cin >> v2;

    cout << "Enter start distance between cars (km): " << endl;
    cin >> s;

    cout << "Enter time t (h): " << endl;
    cin >> t;

    double s_after = abs(s - (v1 + v2) * t);

    cout << "Distance after " << t << " h: " << s_after << " km" << endl;
}


void task3() {
    /*
    При решение СЛУ был использован Метод Крамера
    */

    double a1, b1, c1, a2, b2, c2;

    cout << "Linear equation: a*x+b*y=c" << endl;

    cout << "Enter a, b and c of first equation: " << endl;
    cin >> a1 >> b1 >> c1;

    cout << "Enter a, b and c of second equation: " << endl;
    cin >> a2 >> b2 >> c2;

    double determinant = a1 * b2 - a2 * b1;

    if (determinant != 0) {
        double detX = c1 * b2 - b1 * c2;
        double detY = a1 * c2 - a2 * c1;

        double X = detX / determinant;
        double Y = detY / determinant;

        cout << "Solution is: (" << X << ", " << Y << ")" << endl;

    }
    else {
        cout << "The system has no or an infinite number of solutions" << endl;
    }
}


void task4() {
    cout << "Enter day (от 1 до 365)" << endl;

    int day;
    cin >> day;

    if (day > 365 || day < 1) {
        cout << "Incorrect day!" << endl;
    }
    else {
        string days[] = { "monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday" };

        cout << day << " day of year was " << days[(day + 5) % 7] << endl;
    }

}


void task5() {
    int a, b, c, square_number, free_square;

    cout << "Enter A, B and C" << endl;
    cin >> a >> b >> c;

    square_number = (a / c) * (b / c);
    free_square = (a * b) - square_number * c * c;

    cout << "Number of squares: " << square_number << "\nFree left square: " << free_square << endl;

}


int main() {
   // setlocale(LC_ALL, "rus");

    int taskNumber;

    while (true) {
        system("cls");

        cout << "Enter task number" << endl;
        cout << "1 - task about boat\n2 - task about distance between cars\n3 - solve system of 2 linear equations\n4 - task about determining the day of the week\n5 - task about squares\n\n0 - exit" << endl;
        cin >> taskNumber;

        switch (taskNumber)
        {
        case 0:
            exit(0);

        case 1:
            task1();
            system("pause");
            break;

        case 2:
            task2();
            system("pause");
            break;

        case 3:
            task3();
            system("pause");
            break;

        case 4:
            task4();
            system("pause");
            break;

        case 5:
            task5();
            system("pause");
            break;

        default:
            cout << "Incorrect number" << endl;
            system("pause");
            break;
        }
    }


}