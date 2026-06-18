#include <config.h>

#include <opm/simulators/linalg/PreconditionerFactory_impl.hpp>

namespace Opm {

INSTANTIATE_PF(double,double,3)

#if FLOW_INSTANTIATE_FLOAT
INSTANTIATE_PF(float,double,3)
INSTANTIATE_PF(float,float,3)
#endif

}
