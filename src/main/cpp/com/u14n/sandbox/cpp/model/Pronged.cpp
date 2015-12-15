/**
 * @author Klaus Wenger
 * @date 2015-12-14
 */

#include "com/u14n/sandbox/cpp/model/Pronged.hpp"
#include "com/u14n/sandbox/cpp/model/taxonomy/Regnum.hpp"
#include "com/u14n/sandbox/cpp/model/taxonomy/Phylum.hpp"
#include "com/u14n/sandbox/cpp/model/taxonomy/Classis.hpp"
#include "com/u14n/sandbox/cpp/model/taxonomy/Ordo.hpp"
#include "com/u14n/sandbox/cpp/model/taxonomy/Familia.hpp"
#include "com/u14n/sandbox/cpp/model/taxonomy/Genus.hpp"

namespace com {
namespace u14n {
namespace sandbox {
namespace cpp {
namespace model {

template <class Forked> Pronged<Forked>::Pronged(Forked& newForked)
        : fork(newForked) {

}
template <class Forked> Pronged<Forked>::~Pronged() {

}

template <class Forked> Forked& Pronged<Forked>::getFork() {
    return fork;
}

template class Pronged<taxonomy::Regnum>;
template class Pronged<taxonomy::Phylum>;
template class Pronged<taxonomy::Classis>;
template class Pronged<taxonomy::Ordo>;
template class Pronged<taxonomy::Familia>;
template class Pronged<taxonomy::Genus>;

} // namespace model
} // namespace cpp
} // namespace sandbox
} // namespace u14n
} // namespace com

