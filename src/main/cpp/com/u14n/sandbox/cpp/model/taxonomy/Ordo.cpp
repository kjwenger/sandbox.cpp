/**
 * @author Klaus Wenger
 * @date 2015-12-14
 */

#include "com/u14n/sandbox/cpp/model/taxonomy/Ordo.hpp"

namespace com {
namespace u14n {
namespace sandbox {
namespace cpp {
namespace model {
namespace taxonomy {

Ordo::Ordo(Classis& newClassis, std::string newName)
        : classis(newClassis)
        , name(newName) {

}

const std::string& Ordo::getName() const {
    return name;
}

void Ordo::setName(const std::string& newName) {
    name.assign(newName);
}

const Classis& Ordo::getClassis() const {
    return classis;
}

} // namespace taxonomy
} // namespace model
} // namespace cpp
} // namespace sandbox
} // namespace u14n
} // namespace com

