#ifndef FIGURAGEOGRAFICA_H
#define FIGURAGEOGRAFICA_H
#include <sculptor.h>


class figurageografica
{
public:
    figurageografica();
    virtual void draw(sculptor &t)=0;
    virtual ~figurageografica();
};

#endif // FIGURAGEOGRAFICA_H
