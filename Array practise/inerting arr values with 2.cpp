#include <iostream>
using namespace std;

int main() {
    int array[7] = {1, 2, 3, 4, 5, 6, 7};

    for (int i = 0; i < 7 / 2; i++) {
        int temp = array[i];
        array[i] = array[7 - 1 - i];
        array[7 - 1 - i] = temp;
    }

    for (int i = 0; i < 7; i++) {
        cout << array[i] << " ";
    }
    return 0;
}