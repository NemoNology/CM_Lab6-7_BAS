#include <iostream>
#include <vector>
#include <iomanip>
#include "Array_Unit.h"


using namespace std;


// ������� ��� ������ 2D �������;
void Show_Matrix(const vector<vector<double>>& a) {
    cout << "\n\n";
    for (unsigned short i = 0; i < a.size(); i++) {
        cout << "\t";
        for (unsigned short j = 0; j < a[i].size(); j++) {

            cout << setw(14) << setprecision(8) << a[i][j];

        }
        cout << endl;
    }
    cout << "\n\n";
}

// ������� ��� ������ 1D �������
void Show_Matrix(const vector<double>& a) {
    cout << "\n\n";
    for (unsigned short i = 0; i < a.size(); i++) {

        cout << setprecision(8) << "\t" << setw(10) << a[i] << "\n";

    }
    cout << "\n\n";
}


