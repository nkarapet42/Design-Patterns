#ifndef IGRAPHIC_HPP
# define IGRAPHIC_HPP

class IGraphic {
public:
    virtual void draw() const = 0;
    virtual ~IGraphic() {}
};

#endif
