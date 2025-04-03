#ifndef ICEMAGE_HPP
# define ICEMAGE_HPP

#include <memory>
#include "ICast.hpp"
#include "IMageCreator.hpp"

class IceMage : public IMageCreator {
public:
    std::unique_ptr<ICast> createCast() const override;
};

#endif