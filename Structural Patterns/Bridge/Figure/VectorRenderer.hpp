#ifndef VECTOR_RENDERER_HPP
#define VECTOR_RENDERER_HPP

#include "IRenderer.hpp"
#include <string>

class VectorRenderer : public IRenderer {
public:
    std::string renderCircle(float radius) const override;

    std::string renderSquare(float size) const override;
};

#endif
