/**
 * @author Klaus Wenger
 * @date 2015-12-14
 */

#include "com/u14n/sandbox/cpp/model/taxonomy/classis/Mammalia.hpp"

namespace com {
namespace u14n {
namespace sandbox {
namespace cpp {
namespace model {
namespace taxonomy {
namespace classis {

Mammalia::Mammalia(std::string newName)
        : name(newName) {

}

const std::string& Mammalia::getName() const {
    return name;
}

void Mammalia::setName(const std::string& newName) {
    name.assign(newName);
}

} // namespace classis
} // namespace taxonomy
} // namespace model
} // namespace cpp
} // namespace sandbox
} // namespace u14n
} // namespace com

