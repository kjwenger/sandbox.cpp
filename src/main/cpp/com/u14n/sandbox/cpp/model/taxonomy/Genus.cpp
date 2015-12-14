/**
 * @author Klaus Wenger
 * @date 2015-12-14
 */

#include "com/u14n/sandbox/cpp/model/taxonomy/Genus.hpp"

namespace com {
namespace u14n {
namespace sandbox {
namespace cpp {
namespace model {
namespace taxonomy {

Genus::Genus(Familia& newFamilia, std::string newName)
        : familia(newFamilia)
        , name(newName) {

}

const std::string& Genus::getName() const {
    return name;
}

void Genus::setName(const std::string& newName) {
    name.assign(newName);
}

const Familia& Genus::getFamilia() const {
    return familia;
}

} // namespace taxonomy
} // namespace model
} // namespace cpp
} // namespace sandbox
} // namespace u14n
} // namespace com

