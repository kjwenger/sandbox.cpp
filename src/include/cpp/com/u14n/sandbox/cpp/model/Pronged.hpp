/**
 * @author Klaus Wenger
 * @date 2015-12-14
 */

#pragma once

#include "com/u14n/sandbox/cpp/Constants.hpp"

#include <string>

namespace com {
namespace u14n {
namespace sandbox {
namespace cpp {
namespace model {

template <class Forked> class Pronged {
public:
    Pronged(Forked& newForked);
    virtual ~Pronged();

    Forked& getFork();
private:
    Forked& fork;
};

} // namespace model
} // namespace cpp
} // namespace sandbox
} // namespace u14n
} // namespace com
