#define LOG_TAG "vendor.peyo.simple@1.0-test"
#include <android-base/logging.h>

#include <vendor/peyo/simple/1.0/ISimple.h>

using android::sp;

using vendor::peyo::simple::V1_0::ISimple;

int main() {
  LOG(INFO) << "Simple service 1.0 testing...";

  sp<ISimple> service = ISimple::getService();

  LOG(INFO) << "calling convert(200)";

  int valueOut = service->convert(200);

  LOG(INFO) << "valueOut convert(200) is " <<  valueOut;


  return 0;
}
