/**
 * @author Klaus Wenger
 * @date 2015-12-14
 */

#include "com/u14n/sandbox/cpp/model/taxonomy/genus/Canis.hpp"

namespace com {
namespace u14n {
namespace sandbox {
namespace cpp {
namespace model {
namespace taxonomy {
namespace genus {

Canis::Canis(std::string newName)
        : name(newName) {

}

const std::string& Canis::getName() const {
    return name;
}

void Canis::setName(const std::string& newName) {
    name.assign(newName);
}

} // namespace genus
} // namespace taxonomy
} // namespace model
} // namespace cpp
} // namespace sandbox
} // namespace u14n
} // namespace com

