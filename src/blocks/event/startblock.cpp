#include "startblock.h"

#include "../../executionhandler.h"
#include "../../statementblock.h"
#include "../../programmodel.h"


void StartBlock::sendSignal(const Signal& signal, Sprite* sprite)
{
    //check pointer and type of signal
    if(sprite == NULL || signal.getType() != Signal::START)
        return;

    //run statements
    sprite->getProgramModel()->getExecutionHandler()->addExecutionThread(getStatement(), sprite->getVarTable(), sprite);
}
