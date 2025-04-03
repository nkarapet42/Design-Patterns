#ifndef NORWEGIAN_SWORD_HPP
# define NORWEGIAN_SWORD_HPP

#include "ISword.hpp"

class NorwegianSword : public ISword {
private:
    std::string material;

public:
    NorwegianSword(const std::string& material);

    ISword* clone() const override;

    void display() const override;
};

#endif
