#include "Mobs.h"

mob zombie, skeleton, dragon, witch, knight;

void initalizeMobs() {
    zombie.setStats("Zombie", 15, 5);
    skeleton.setStats("Skeleton", 8, 5);
    dragon.setStats("Dragon", 25, 20);
    witch.setStats("Witch", 12, 10);
    knight.setStats("Knight", 30, 30);
}