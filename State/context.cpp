#include "context.h"
#include "state.h"

#include "concretestate.h"


template <typename Iterator>
void DeleteElement(Iterator begin, Iterator end)
{
    while (begin != end) {
        delete *begin;
        ++begin;
    }
}

template <typename Container>
inline void DeleteAll(const Container &c)
{
    DeleteElement(c.begin(), c.end());
}

Context::Context()
{
    RedState *red_state = new RedState;
    GreenState *green_state = new GreenState;
    YellowState *rtog_state = new YellowState;
    YellowState *gtor_state = new YellowState;

    red_state->setNextState(rtog_state);
    green_state->setNextState(gtor_state);
    rtog_state->setNextState(green_state);
    gtor_state->setNextState(red_state);

    m_allStates.push_back(red_state);
    m_allStates.push_back(green_state);
    m_allStates.push_back(rtog_state);
    m_allStates.push_back(gtor_state);

    m_currentState = red_state;
}

Context::~Context()
{
    DeleteAll(m_allStates);
}

void Context::setState(State *state)
{
    m_currentState = state;
}

int Context::Handle()
{
    return m_currentState->Handle(this);
}
