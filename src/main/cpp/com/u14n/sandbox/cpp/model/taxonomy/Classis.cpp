/**
 * @author Klaus Wenger
 * @date 2015-12-14
 */

#include "com/u14n/sandbox/cpp/model/taxonomy/Classis.hpp"

namespace com {
namespace u14n {
namespace sandbox {
namespace cpp {
namespace model {
namespace taxonomy {

Classis::Classis(Phylum& newPhylum, std::string newName)
        : phylum(newPhylum)
        , name(newName) {

}

const std::string& Classis::getName() const {
    return name;
}

void Classis::setName(const std::string& newName) {
    name.assign(newName);
}

const Phylum& Classis::getPhylum() const {
    return phylum;
}

} // namespace taxonomy
} // namespace model
} // namespace cpp
} // namespace sandbox
} // namespace u14n
} // namespace com

