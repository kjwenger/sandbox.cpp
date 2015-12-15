/**
 * @author Klaus Wenger
 * @date 2015-12-14
 */

#include "com/u14n/sandbox/cpp/model/taxonomy/Species.hpp"
#include "com/u14n/sandbox/cpp/model/taxonomy/Genus.hpp"

namespace com {
namespace u14n {
namespace sandbox {
namespace cpp {
namespace model {
namespace taxonomy {

Species::Species(Genus& newGenus, std::string newName)
        : Leaf<Genus>(newGenus, newName) {
    getFork().addProng(*this);
}
Species::~Species() {
    getFork().removeProng(*this);
}

Genus& Species::getGenus() {
    return getFork();
}

} // namespace taxonomy
} // namespace model
} // namespace cpp
} // namespace sandbox
} // namespace u14n
} // namespace com

