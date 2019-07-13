#include "Simple.h"

namespace vendor {
namespace peyo {
namespace simple {
namespace V1_0 {
namespace implementation {

// Methods from ::vendor::peyo::simple::V1_0::ISimple follow.
Return<int32_t> Simple::convert(int32_t valueIn) {
    // TODO implement
    return int32_t {};
}


// Methods from ::android::hidl::base::V1_0::IBase follow.

//ISimple* HIDL_FETCH_ISimple(const char* /* name */) {
    //return new Simple();
//}
//
}  // namespace implementation
}  // namespace V1_0
}  // namespace simple
}  // namespace peyo
}  // namespace vendor
