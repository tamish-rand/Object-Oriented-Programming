#include "Game.h"
#include <random>
using namespace std;

Game::Game(){
}

void Game::generatePlayers(int n)
{
    for(int i=0; i<n; i++)
    {
        players.push_back(new RPG());

        //rename players
        string new_name = "NPC_"+to_string(i);
        players[i]->setName(new_name);
        live_players.insert(i);

    }
}

int Game::selectPlayer(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(0, live_players.begin());

    //pick random index
    int randomIndex= dist(gen);

    // Advance iterator to that index
    set<int>::iterator it = live_players.begin();
    advance(it, randomIndex);

    int selectedIndex = *it;
    return selectedIndex;
}

void Game::endRound(RPG *winner, RPG *loser, int loserIndex){
    winner ->setHitsTaken(0);
    live_players.erase(loserIndex);
    winner->updateExpLevel();

    cout << winner->getName()<<" won against " << loser->getName();


}

void Game::battleRound(){

}

void Game::gameLoop(){

}

void Game::printFinalResults(){

}

Game::~Game(){

}