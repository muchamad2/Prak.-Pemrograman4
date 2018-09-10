#include "SecondPlayer.h"

SecondPlayer::SecondPlayer(char turn,Board *mod){
    this->turn = turn;
    model = mod;
}
void SecondPlayer::update(int player){
    if(player == 2)
        model->SetInput(turn);
}
