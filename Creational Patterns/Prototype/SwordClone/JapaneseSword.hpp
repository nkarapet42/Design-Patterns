#ifndef JAPANESE_SWORD_HPP
# define JAPANESE_SWORD_HPP

#include "ISword.hpp"

class JapaneseSword : public ISword {
private:
    std::string material;

public:
    JapaneseSword(const std::string& material);
    ISword* clone() const override;
    void display() const override;
};

#endif
