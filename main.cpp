#include <array>
#include <numeric>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    array<int, 500000> list;
    iota(list.begin(), list.end(), 2);
    cout<<"Started...";

    for_each(list.begin(), list.end(), [&list](const auto elem){
        if(elem==0){ return; }

        transform(list.begin(), list.end(), list.begin(), [elem](const auto number){
            return (number!=elem && number%elem==0) ? 0 : number;
        });
    });

    for(auto elem : list){
        if(elem!=0){
            cout<<elem<<", ";
        }
    }
    return 0;
}