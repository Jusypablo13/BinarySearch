#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> vec, int target) {
    int low = 0;
    int high = vec.size() - 1;

    while (low <= high) {
        int mid  = low + (high - low) / 2;

        // Caso base: el elemento está en el medio
        if (vec[mid] == target) {
            return mid;
        }
        // Si el target es mayor, ignorar la mitad izquierda
        else if (vec[mid] < target) {
            low = mid + 1;
        }
        // Si el target es menor, ignorar la mitad derecha
        else {
            high = mid - 1;
        }
    }

    return -1; // Elemento no encontrado
}

int main() {
    vector<int> vec = {2, 5, 8, 12, 16, 23, 38, 45, 56, 67, 78}; 
    int target = 78;

    int result = binarySearch(vec, target);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    }
    else {
        cout << "Element not found in the array" << endl;
    }
    return 0;
}