#include <iostream>
using namespace std;

int main() {
    int array1[7] = {1, 2, 3, 4, 5, 6, 7};
    int array2[7] = {3, 4, 5, 6, 7, 8, 9};
    int inter[7];
    int count = 0;

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            if (array1[i] == array2[j]) {
                inter[count] = array1[i];
                count++;
                break;
            }
        }
    }

    for (int i = 0; i < count; i++) {
        cout << inter[i] << " ";
    }
    return 0;
}
