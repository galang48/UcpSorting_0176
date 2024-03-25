//Soal Type 2
// 1. Compare the element stored at index 0 with the element stored at index 1
// 2. -Improve insertion sort by comparing the elements separated by a distance of several positions to form multiple sublist
//    -Applies insertion sort on each sublist to move the elements towards their correct position
//    -Helps an element to take a bigger step towards its correct position, thereby reducing the number of comparisons
// 3. Insertion sort because when the elements are already in the sorted order, Insertion sort needs to make very few comparisons
// 4.1.

#include <iostream>
using namespace std;

int galang[76];
int n;

void input() {
    while (true) {
        cout << "Masukan banyanknya Array: ";
        cin >> n;

        if (n <= 56)
            break;
        else {
            cout << "\nmaksimal panjang array yang dapat dimuat adalah 56\n";

        }

    }
    cout << endl;
    cout << "==============" << endl;
    cout << "masukkan array" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << (i + 1) << " : ";
        cin >> galang[i];
    }
    cout << endl;
}

void display() {
    cout << endl;
    cout << "=========================" << endl;
    cout << "Array yang telah tersusun" << endl;

    for (int j = 0; j < n; j++) {
        cout << galang[j] << endl;
    }
}

void BubleSort() {
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (galang[j] > galang[j + 1]) {
                int temp = galang[j];
                galang[j] = galang[j + 1];
                galang[j + 1] = temp;
            }
        }
    }


}


int main()
{
    input();
    display();
    BubleSort();
    return 0;
}