#ifndef ASHAPE_HPP
# define ASHAPE_HPP

#include "IRenderer.hpp"

class AShape {
protected:
    const IRenderer& renderer;
public:
    AShape(const IRenderer& r) : renderer(r) {}
    virtual std::string draw() const = 0;
    virtual ~AShape() {}
};

#endif
