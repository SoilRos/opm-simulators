#include <config.h>

#include <opm/simulators/linalg/PreconditionerFactory_impl.hpp>

namespace Opm {

INSTANTIATE_PF(double,double,1)

#if FLOW_INSTANTIATE_FLOAT
INSTANTIATE_PF(float,double,1)
INSTANTIATE_PF(float,float,1)
#endif

}
