#ifndef RASTER_RENDERER_HPP
#define RASTER_RENDERER_HPP

#include "IRenderer.hpp"
#include <string>

class RasterRenderer : public IRenderer {
public:
    std::string renderCircle(float radius) const override;
    std::string renderSquare(float size) const override;
};

#endif
