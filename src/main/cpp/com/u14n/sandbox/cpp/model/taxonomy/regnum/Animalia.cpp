/**
 * @author Klaus Wenger
 * @date 2015-12-14
 */

#include "com/u14n/sandbox/cpp/model/taxonomy/regnum/Animalia.hpp"

namespace com {
namespace u14n {
namespace sandbox {
namespace cpp {
namespace model {
namespace taxonomy {
namespace regnum {

Animalia::Animalia(std::string newName)
        : name(newName) {

}

const std::string& Animalia::getName() const {
    return name;
}

void Animalia::setName(const std::string& newName) {
    name.assign(newName);
}

} // namespace regnum
} // namespace taxonomy
} // namespace model
} // namespace cpp
} // namespace sandbox
} // namespace u14n
} // namespace com

