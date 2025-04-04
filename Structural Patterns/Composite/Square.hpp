#ifndef SQUARE_HPP
# define SQUARE_HPP

#include "IGraphic.hpp"
#include <iostream>

class Square : public IGraphic {
public:
    void draw() const override;
};

#endif