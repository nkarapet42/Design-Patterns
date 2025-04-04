#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "AShape.hpp"

class Circle : public AShape {
private:
    float radius;
public:
    Circle(const IRenderer& r, float rad);
    std::string draw() const override;
};

#endif
