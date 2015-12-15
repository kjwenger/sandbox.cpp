/**
 * @author Klaus Wenger
 * @date 2015-12-14
 */

#pragma once

#include "com/u14n/sandbox/cpp/Constants.hpp"
#include "com/u14n/sandbox/cpp/model/Forked.hpp"
#include "com/u14n/sandbox/cpp/model/Named.hpp"

#include <string>

namespace com {
namespace u14n {
namespace sandbox {
namespace cpp {
namespace model {

template <class Child> class Root : public Named, public Forked<Child> {
public:
    Root(std::string newName = Constants::STRING_EMPTY());
    virtual ~Root();
};

} // namespace model
} // namespace cpp
} // namespace sandbox
} // namespace u14n
} // namespace com
