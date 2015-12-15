/**
 * @author Klaus Wenger
 * @date 2015-12-14
 */

#include "com/u14n/sandbox/cpp/model/Forked.hpp"
#include "com/u14n/sandbox/cpp/model/taxonomy/Phylum.hpp"
#include "com/u14n/sandbox/cpp/model/taxonomy/Classis.hpp"
#include "com/u14n/sandbox/cpp/model/taxonomy/Ordo.hpp"
#include "com/u14n/sandbox/cpp/model/taxonomy/Familia.hpp"
#include "com/u14n/sandbox/cpp/model/taxonomy/Genus.hpp"
#include "com/u14n/sandbox/cpp/model/taxonomy/Species.hpp"

#include <algorithm>

namespace com {
namespace u14n {
namespace sandbox {
namespace cpp {
namespace model {

template <class Pronged> Forked<Pronged>::Forked()
        : prongs() {

}
template <class Pronged> Forked<Pronged>::~Forked() {

}

template <class Pronged> const std::vector<std::reference_wrapper<Pronged> >&
        Forked<Pronged>::getProngs() const {
    return prongs;
}

template <class Pronged> void Forked<Pronged>::addProng(Pronged& pronged) {
    prongs.push_back(pronged);
}

template <class Pronged> void Forked<Pronged>::removeProng(Pronged& pronged) {
    typename std::vector<std::reference_wrapper<Pronged> >::iterator found =
            std::remove_if(prongs.begin(), prongs.end(),
                [&](const std::reference_wrapper<Pronged>& reference_wrapper) {
                    return &(reference_wrapper.get()) == &pronged;
                });
    if (found != prongs.end()) {
        prongs.erase(found, prongs.end());
    }
}

template class Forked<taxonomy::Phylum>;
template class Forked<taxonomy::Classis>;
template class Forked<taxonomy::Ordo>;
template class Forked<taxonomy::Familia>;
template class Forked<taxonomy::Genus>;
template class Forked<taxonomy::Species>;

} // namespace model
} // namespace cpp
} // namespace sandbox
} // namespace u14n
} // namespace com

