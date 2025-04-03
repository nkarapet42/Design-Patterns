#ifndef ISWORDBUILDER_HPP
# define ISWORDBUILDER_HPP

#include "Sword.hpp"

class ISwordBuilder {
public:
    virtual ~ISwordBuilder() = default;
    virtual void buildBlade() = 0;
    virtual void buildHandle() = 0;
    virtual void buildLength() = 0;
    virtual void buildEngraving() = 0;
    virtual Sword* getResult() = 0;
};

#endif
