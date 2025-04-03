#ifndef WOODEN_HOUSE_HPP
# define WOODEN_HOUSE_HPP

#include "IHouse.hpp"

class WoodenHouse : public IHouse {
private:
    int floors;
    bool hasFireplace;

public:
    WoodenHouse(int floors, bool hasFireplace);

    IHouse* clone() const override;

    void display() const override;
};

#endif
