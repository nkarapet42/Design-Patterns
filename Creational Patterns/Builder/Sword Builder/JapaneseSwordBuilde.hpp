#ifndef JAPANESESWORDBUILDER_HPP
# define JAPANESESWORDBUILDER_HPP

#include "ISwordBuilder.hpp"

class JapaneseSwordBuilde : public ISwordBuilder {
private:
    Sword* sword;

public:
    JapaneseSwordBuilde();

    void buildBlade() override;
    void buildHandle() override;
    void buildLength() override;
    void buildEngraving() override;
    Sword* getResult() override;
};

#endif
