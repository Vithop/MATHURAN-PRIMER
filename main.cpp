#include <iostream>
#include <vector>
#include <array>

using namespace std;
int main() {
    const auto size = 10;
    auto increment = 2;
    auto previncrement = 0;
    array<int, size> list;

    for (int x = 0 ; x < size; x++){
        list[x] = x + 2;
    }
    while (previncrement != increment) {
        previncrement = increment;
        for (int x = 0; x < size;) {
            if (list[x] != increment) {
                list[x] = 0;
            }
            x = x + increment;
        }
        for (int x = 0; x < size; x++) {
            if (x > increment - 2) {
                if (list[x] != 0) {
                    increment = list[x];
                }

            }
        }
    }
    for (int x = 0 ; x < size; x++){
        cout << list[x];
    }
    return 0;
}