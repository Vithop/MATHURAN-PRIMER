#include <array>
#include <numeric>
#include <algorithm>
#include <iostream>

using namespace std;

template<typename T, size_t Size>
void printNonZeroElements(const array<T, Size>& array){
    for(auto elem : array){
        if(elem!=0){
            cout<<elem<<", ";
        }
    }
}

int main() {
    array<int, 500> list;
    iota(list.begin(), list.end(), 2);
    cout<<"Started...";

    for_each(list.begin(), list.end(), [&list](const auto elem){
        if(elem==0){ return; }

        transform(list.begin(), list.end(), list.begin(), [elem](const auto number){
            return (number!=elem && number%elem==0) ? 0 : number;
        });
    });

    printNonZeroElements(list);
    return 0;
}