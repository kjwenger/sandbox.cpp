/**
 * @author Klaus Wenger
 * @date 2015-12-14
 */

#pragma once

#include "com/u14n/sandbox/cpp/Constants.hpp"
#include "com/u14n/sandbox/cpp/model/Root.hpp"

#include <string>
#include <vector>
#include <functional>

namespace com {
namespace u14n {
namespace sandbox {
namespace cpp {
namespace model {
namespace taxonomy {

class Phylum;

class Regnum : public Root<Phylum> {
public:
    Regnum(std::string newName = Constants::STRING_EMPTY());
    virtual ~Regnum();

    const std::vector<std::reference_wrapper<Phylum> >& getPhyla() const;
};

} // namespace taxonomy
} // namespace model
} // namespace cpp
} // namespace sandbox
} // namespace u14n
} // namespace com
