#include "BlackSmith.hpp"

Sword* BlackSmith::construct(ISwordBuilder& builder) {
    builder.buildBlade();
    builder.buildHandle();
    builder.buildLength();
    builder.buildEngraving();
    return builder.getResult();
}