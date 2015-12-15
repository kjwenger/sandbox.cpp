/**
 * @author Klaus Wenger
 * @date 2015-12-14
 */

#pragma once

#include "com/u14n/sandbox/cpp/Constants.hpp"
#include "com/u14n/sandbox/cpp/model/Branch.hpp"

#include <string>

namespace com {
namespace u14n {
namespace sandbox {
namespace cpp {
namespace model {
namespace taxonomy {

class Classis;
class Familia;

class Ordo : public Branch<Classis, Familia> {
public:
    Ordo(Classis& newClassis,
           std::string newName = Constants::STRING_EMPTY());
    virtual ~Ordo();

    Classis& getClassis();

    const std::vector<std::reference_wrapper<Familia> >& getFamiliae() const;
};

} // namespace taxonomy
} // namespace model
} // namespace cpp
} // namespace sandbox
} // namespace u14n
} // namespace com
