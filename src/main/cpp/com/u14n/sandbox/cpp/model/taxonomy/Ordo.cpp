/**
 * @author Klaus Wenger
 * @date 2015-12-14
 */

#include "com/u14n/sandbox/cpp/model/taxonomy/Ordo.hpp"
#include "com/u14n/sandbox/cpp/model/taxonomy/Classis.hpp"
#include "com/u14n/sandbox/cpp/model/taxonomy/Familia.hpp"

namespace com {
namespace u14n {
namespace sandbox {
namespace cpp {
namespace model {
namespace taxonomy {

Ordo::Ordo(Classis& newClassis, std::string newName)
        : Branch<Classis, Familia>(newClassis, newName) {
    getFork().addProng(*this);
}
Ordo::~Ordo() {
    getFork().removeProng(*this);
}

Classis& Ordo::getClassis() {
    return getFork();
}

const std::vector<std::reference_wrapper<Familia> >& Ordo::getFamiliae() const {
    return getProngs();
}

} // namespace taxonomy
} // namespace model
} // namespace cpp
} // namespace sandbox
} // namespace u14n
} // namespace com

