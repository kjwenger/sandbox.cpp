/**
 * @author Klaus Wenger
 * @date 2015-12-14
 */

#include "com/u14n/sandbox/cpp/model/taxonomy/Familia.hpp"
#include "com/u14n/sandbox/cpp/model/taxonomy/Ordo.hpp"
#include "com/u14n/sandbox/cpp/model/taxonomy/Genus.hpp"

namespace com {
namespace u14n {
namespace sandbox {
namespace cpp {
namespace model {
namespace taxonomy {

Familia::Familia(Ordo& newOrdo, std::string newName)
        : Branch<Ordo, Genus>(newOrdo, newName) {
    Pronged<Ordo>::getFork().addProng(*this);
}
Familia::~Familia() {
    Pronged<Ordo>::getFork().addProng(*this);
}

Ordo& Familia::getOrdo() {
    return getFork();
}

const std::vector<std::reference_wrapper<Genus> >& Familia::getGenera() const {
    return getProngs();
}

} // namespace taxonomy
} // namespace model
} // namespace cpp
} // namespace sandbox
} // namespace u14n
} // namespace com

