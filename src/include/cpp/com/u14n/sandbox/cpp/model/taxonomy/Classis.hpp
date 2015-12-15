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

class Phylum;
class Ordo;

class Classis : public Branch<Phylum, Ordo> {
public:
    Classis(Phylum& newPhylum,
           std::string newName = Constants::STRING_EMPTY());
    virtual ~Classis();

    Phylum& getPhylum();

    const std::vector<std::reference_wrapper<Ordo> >& getOrdines() const;
};

} // namespace taxonomy
} // namespace model
} // namespace cpp
} // namespace sandbox
} // namespace u14n
} // namespace com
