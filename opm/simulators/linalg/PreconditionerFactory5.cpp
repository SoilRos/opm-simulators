#include <config.h>

#include <opm/simulators/linalg/PreconditionerFactory_impl.hpp>

namespace Opm {

INSTANTIATE_PF(double,double,5)

#if FLOW_INSTANTIATE_FLOAT
INSTANTIATE_PF(float,double,5)
INSTANTIATE_PF(float,float,5)
#endif

}
