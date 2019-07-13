#ifndef VENDOR_PEYO_SIMPLE_V1_0_SIMPLE_H
#define VENDOR_PEYO_SIMPLE_V1_0_SIMPLE_H

#include <vendor/peyo/simple/1.0/ISimple.h>
#include <hidl/MQDescriptor.h>
#include <hidl/Status.h>

namespace vendor {
namespace peyo {
namespace simple {
namespace V1_0 {
namespace implementation {

using ::android::hardware::hidl_array;
using ::android::hardware::hidl_memory;
using ::android::hardware::hidl_string;
using ::android::hardware::hidl_vec;
using ::android::hardware::Return;
using ::android::hardware::Void;
using ::android::sp;

struct Simple : public ISimple {
    // Methods from ::vendor::peyo::simple::V1_0::ISimple follow.
    Return<int32_t> convert(int32_t valueIn) override;

    // Methods from ::android::hidl::base::V1_0::IBase follow.

};

// FIXME: most likely delete, this is only for passthrough implementations
// extern "C" ISimple* HIDL_FETCH_ISimple(const char* name);

}  // namespace implementation
}  // namespace V1_0
}  // namespace simple
}  // namespace peyo
}  // namespace vendor

#endif  // VENDOR_PEYO_SIMPLE_V1_0_SIMPLE_H
