#include <iostream>
#include <string>
class Entity { // klasa glownych stworzen zawiera klase attack i statystyki oraz statusy
    private:
        //-------ZMIENNE------
        int hp = 10;
        std::string name;
        bool isAlive = true;
        //------SETTERY------
        void setHP(int newValue) {
            if (newValue <= 0) {
                std::cout << "Deafult HP can't be negative." << std::endl;
                return;
            }
            this->hp = newValue;
        }
        void setName(std::string newName) {
            this->name = newName;
        }
        void setIsAlive(bool alive) {
            try {
                this->isAlive = alive;
            }
            catch (const char &e) {
                std::cout << "Invalid value for isAlive status.";
                std::cout << "Error message" << e << std::endl;
                return;
            }
        }
    public:
        //-------SETTERY-------
        void setStats(std::string Name, int HP) {
            this->setHP(HP);
            this->setName(Name);
        }
        void changeHP(int newValue) {
            setHP(newValue);
        }
        void changeIsAlive(bool alive) {
            setIsAlive(alive);
        }
        //-------GETTERY--------
        const std::string getName() {
            return this->name;
        }
        const int getHP() {
            return this->hp;
        }
        const bool getIsAlive() {
            return this->isAlive;
        }
};
class Player : public Entity { // dziedziczenie po entity i tworzenie playera
    private:
        int gold = 0;
    public:
        //-----------SETTERY-----------
        void setGold(int newValue) {
            if (newValue < 0) {
                std::cout << "Can't set. This value isn't positive.";
                return;
            }
            this->gold = newValue;
        }
        //-----------GETTERY-----------
        int getGold() {
            return this->gold;
        }
};
class mob : public Entity {
};
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
int main() {
    bool IS_RUNNING = true;
    Player gracz;
    gracz.setStats("test", 20);

    mob zombie;
    zombie.setStats("zombie", 10);

}