#include "Invoker.h"

Invoker::Invoker(){
    this->current = -1;
}
void Invoker::Compute(Command *cmd){
    cmd->execute();
    this->current++;
    commands.push_back(cmd);
}
void Invoker::Undo(){
    if(this->current >= 0){
        this->commands[current]->unExecute();
        this->current--;
    }
}
