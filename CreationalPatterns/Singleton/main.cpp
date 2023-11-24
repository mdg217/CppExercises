#include <iostream>
#include "Singleton.h"
#include <vector>

using namespace std;

int main() {
    Singleton<vector<int>>* memory = Singleton<vector<int>>::GetInstance({1, 2, 3});
    
    for(int e: memory->getValue()){
        cout<<e<<endl;
    }

    // Remember to free the memory
    delete memory;

    return 0;
}