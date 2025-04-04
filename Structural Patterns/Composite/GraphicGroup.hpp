#ifndef GRAPHIC_GROUP_HPP
# define GRAPHIC_GROUP_HPP

#include "IGraphic.hpp"
#include <vector>
#include <iostream>

class GraphicGroup : public IGraphic {
private:
    std::vector<IGraphic*> children;
public:
    void add(IGraphic* graphic);

    void draw() const override;
};

#endif