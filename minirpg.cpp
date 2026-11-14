#include <iostream>
#include <string>
#include "Mobs.h"
#include "Player.h"
#include <format>
int main() {
    Player gracz;
    bool IS_RUNNING = false;
    initalizeMobs();
    std::cout <<"Mobs loaded!" << std::endl;
    std::string PLAYER_NAME;
    std::string START;
    std::getline(std::cin, PLAYER_NAME);
    if (PLAYER_NAME.size() < 2 || PLAYER_NAME.size() > 24) {
        std::cout << "Invalid length of characters.";
        std::getline(std::cin, PLAYER_NAME);
    }
    std::cout << std::format("Hello {}!", PLAYER_NAME);
    std::cout << "Press enter to start..." << std::endl;
    
    std::getline(std::cin, START);
    IS_RUNNING = true;
    while (IS_RUNNING) {
        
    }
    

}