#include <iostream>
#include "RPG.h"
using namespace std;

RPG::RPG()
{
    name = "NPC";
    hits_taken = 0;
    luck = 0.1;
    exp = 50.0;
    level = 1;
}

RPG::RPG(string name, int hits_taken, float luck, float exp, int level){
    this->name = name;
    this->hits_taken = hits_taken;
    this->luck = luck;
    this->exp = exp;
    this->level = level;
}

string RPG::getName(){
    return name;
}

int RPG::getHitsTaken(){
    return hits_taken;
}

float RPG::getLuck(){
    return luck;
}

float RPG::getExp(){
    return exp;
}

float RPG::getLuck(){
    return level;
}

float RPG::getExp(){
    return exp;
}

int RPG::getLevel(){
    return level;
}

void RPG::setHitsTaken(int new_hits){
    hits_taken = new_hits;
}

bool RPG::isAlive(){
    return hits_taken < MAX_HITS_TAKEN;
}

