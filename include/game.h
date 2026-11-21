#ifndef GAME_H
#define GAME_H

typedef struct {
    char name[32];
    int health;
    int max_health;
    int chakra;
    int attack;
    int defense;
} Character;

typedef struct {
    int id;
    char name[64];
    int completed;
    int reward;
} Mission;

void init_game(void);
void combat_update(void);
void mission_update(void);

#endif
