#ifndef PLAN_H
#define PLAN_H

#include action.h

struct Condition{

};

struct CausalLink{
    Action& source;
    Condition& effect;
    Action& sink;
};

struct OrderingConstraint{
    Action& first;
    Action& second;
};


class Plan
{
public:
    Plan();
    bool set_goal();
    bool set_initial_state();
    bool plan();

private:
    std::vector<Action> _actions;
    std::vector<CausalLinks> _causal_links;
    std::vector<OrderingConstraints> _ordering_constraints;
    //std::vector<ParameterBindings> _parameter_bindings;
    //std::vector<Parameter> _parameters;
};

#endif // PLAN_H
