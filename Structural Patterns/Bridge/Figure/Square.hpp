#ifndef SQUARE_HPP
# define SQUARE_HPP

#include "AShape.hpp"

class Square : public AShape {
private:
    float size;
public:
    Square(const IRenderer& r, float s);
    std::string draw() const override;
};

#endif
