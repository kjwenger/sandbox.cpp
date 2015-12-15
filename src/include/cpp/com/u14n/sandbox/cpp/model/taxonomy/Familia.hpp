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

class Ordo;
class Genus;

class Familia : public Branch<Ordo, Genus> {
public:
    Familia(Ordo& newOrdo,
           std::string newName = Constants::STRING_EMPTY());
    virtual ~Familia();

    Ordo& getOrdo();

    const std::vector<std::reference_wrapper<Genus> >& getGenera() const;
};

} // namespace taxonomy
} // namespace model
} // namespace cpp
} // namespace sandbox
} // namespace u14n
} // namespace com
