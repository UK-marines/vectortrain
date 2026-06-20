#include <iostream>
#include <vector>

int main() {
    std::vector<int> damage_list = {100, 250, 500};

    std::cout << damage_list[0] << ", " << damage_list[1] << ", " << damage_list[2] << "\n";
	for(int j = 0; j < 4; j++) {
    	for(int i = 0; i < 3; i++) {
    		damage_list[i]-=25;
    		if(damage_list[i] == 0) {
    			damage_list.erase(damage_list.begin() + i);
    			i--; 
    		} 
			
    	}
	}    
    std::cout << damage_list[0] << ", " << damage_list[1] << ", " << "\n";

    return 0;
}
