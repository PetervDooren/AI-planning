#include "planner.h"

Plan& PSP(const Plan& p)
{
    flaws = getFlaws(p);
    if (flaws == empty)
        return p;

    // deterministically select a flaw from the list of flaws
    flaw = selectFlaw(flaws, p);

    resolvers = getResolvers(flaw, p);
    if (resolvers == empty)
        return nullptr;

    // nondeterministically select a resolver to use
    resolver = selectResolver(resolvers, p);

    p_refined = Refine(resolver, p);
    return PSP(p_refined);
}
