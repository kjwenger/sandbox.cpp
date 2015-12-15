/**
 * @author Klaus Wenger
 * @date 2015-12-14
 */

#pragma once

#include "com/u14n/sandbox/cpp/Constants.hpp"

#include <string>
#include <vector>
#include <functional>

namespace com {
namespace u14n {
namespace sandbox {
namespace cpp {
namespace model {

template <class Pronged> class Forked {
public:
    Forked();
    virtual ~Forked();

    const std::vector<std::reference_wrapper<Pronged> >& getProngs() const;

    void addProng(Pronged& pronged);

    void removeProng(Pronged& pronged);
private:
    std::vector<std::reference_wrapper<Pronged> > prongs;
};

} // namespace model
} // namespace cpp
} // namespace sandbox
} // namespace u14n
} // namespace com
