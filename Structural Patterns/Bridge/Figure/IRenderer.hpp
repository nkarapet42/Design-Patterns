#ifndef IRENDERER_HPP
# define IRENDERER_HPP

#include <string>

class IRenderer {
public:
    virtual std::string renderCircle(float radius) const = 0;
    virtual std::string renderSquare(float size) const = 0;
    virtual ~IRenderer() {}
};

#endif
