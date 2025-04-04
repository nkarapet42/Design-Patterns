#include "GraphicGroup.hpp"

void GraphicGroup::add(IGraphic* graphic) {
    children.push_back(graphic);
}

void GraphicGroup::draw() const {
    std::cout << "Group contains:\n";
    for (const auto& g : children) {
        g->draw();
    }
}
