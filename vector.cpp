#include <iostream>
#include <vector>

int main() {
    std::vector<int> damage_list = {100, 250, 500};

    std::cout << damage_list[0] << ", " << damage_list[1] << ", " << damage_list[2] << "\n";

    for(int i = 0; i < 3; i++) {
    	damage_list[i]+=50;
    }
    
    std::cout << damage_list[0] << ", " << damage_list[1] << ", " << damage_list[2] << "\n";

    return 0;
}
