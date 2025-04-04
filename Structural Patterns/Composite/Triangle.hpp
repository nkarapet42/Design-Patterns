#ifndef TRIANGLE_HPP
# define TRIANGLE_HPP

#include "IGraphic.hpp"
#include <iostream>

class Triangle : public IGraphic {
public:
    void draw() const override;
};

#endif