/**
 * @author Klaus Wenger
 * @date 2015-12-14
 */

#include "com/u14n/sandbox/cpp/model/taxonomy/Familia.hpp"

namespace com {
namespace u14n {
namespace sandbox {
namespace cpp {
namespace model {
namespace taxonomy {

Familia::Familia(Ordo& newOrdo, std::string newName)
        : ordo(newOrdo)
        , name(newName) {

}

const std::string& Familia::getName() const {
    return name;
}

void Familia::setName(const std::string& newName) {
    name.assign(newName);
}

const Ordo& Familia::getOrdo() const {
    return ordo;
}

} // namespace taxonomy
} // namespace model
} // namespace cpp
} // namespace sandbox
} // namespace u14n
} // namespace com

