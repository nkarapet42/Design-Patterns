#ifndef CIRCLE_HPP
# define CIRCLE_HPP

#include "IGraphic.hpp"
#include <iostream>

class Circle : public IGraphic {
public:
    void draw() const override;
};

#endif