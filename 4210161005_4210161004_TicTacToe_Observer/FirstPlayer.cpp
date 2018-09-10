#include "FirstPlayer.h"

FirstPlayer::FirstPlayer(char turn,Board *mod){
    this->turn = turn;
    model = mod;
}

void FirstPlayer::update(int player){
    if(player == 1)
        model->SetInput(turn);
}
