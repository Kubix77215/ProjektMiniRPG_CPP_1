#include <iostream>
#include "Entity.h"
class Attack {
    public:
        void Simple(Entity &Attacker, Entity &Victim) {
            if(!Victim.getIsAlive()) {
                std::cout << "Can't attack. Entity is already died" << std::endl;
                return;
            }
            int DAMAGE = 1;
            int VICTIM_HP = Victim.getHP() - DAMAGE;
            std::string ATTACKER_NAME = Attacker.getName();
            std::string VICTIM_NAME = Victim.getName();

            
            if (VICTIM_HP <= 0) {
                Victim.changeIsAlive(false);
                std::cout << VICTIM_NAME << " has died" << std::endl;
                return;
            }
            else {
                std::cout << ATTACKER_NAME << " attacked: " << VICTIM_NAME << " for: " << DAMAGE << " new health: " << VICTIM_HP << std::endl;
                Victim.changeHP(VICTIM_HP);
            }
            
        }
};