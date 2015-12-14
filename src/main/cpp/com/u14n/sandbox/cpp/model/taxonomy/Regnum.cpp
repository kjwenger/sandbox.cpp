/**
 * @author Klaus Wenger
 * @date 2015-12-14
 */

#include "com/u14n/sandbox/cpp/model/taxonomy/Regnum.hpp"

namespace com {
namespace u14n {
namespace sandbox {
namespace cpp {
namespace model {
namespace taxonomy {

Regnum::Regnum(std::string newName)
    : name(newName) {

}

const std::string& Regnum::getName() const {
    return name;
}

void Regnum::setName(const std::string& newName) {
    name.assign(newName);
}

} // namespace taxonomy
} // namespace model
} // namespace cpp
} // namespace sandbox
} // namespace u14n
} // namespace com

