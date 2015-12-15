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

class Regnum;
class Classis;

class Phylum : public Branch<Regnum, Classis> {
public:
    Phylum(Regnum& newRegnum,
           std::string newName = Constants::STRING_EMPTY());
    virtual ~Phylum();

    Regnum& getRegnum();

    const std::vector<std::reference_wrapper<Classis> >& getClasses() const;
};

} // namespace taxonomy
} // namespace model
} // namespace cpp
} // namespace sandbox
} // namespace u14n
} // namespace com
