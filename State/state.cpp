#include "state.h"
#include "context.h"

State::State() {}

State::~State() {}

int State::Handle(Context *context)
{
    int duration = doSomething();
    context->setState(m_nextState);
    return duration;
}

void State::setNextState(State *state)
{
    m_nextState = state;
}
