#define LOG_TAG "vendor.peyo.simple@1.0-service"
#include <android-base/logging.h>
#include <hidl/HidlTransportSupport.h>

#include "Simple.h"

using android::hardware::configureRpcThreadpool;
using android::hardware::joinRpcThreadpool;
using android::status_t;
using android::sp;
using android::OK;

using vendor::peyo::simple::V1_0::ISimple;
using vendor::peyo::simple::V1_0::implementation::Simple;

static int shutdown() {
  LOG(INFO) << "Simple service is shutting down.";
  return 1;
}

int main() {
  LOG(INFO) << "Simple service 1.0 starting...";

  sp<ISimple> service = new Simple;
  if (service == nullptr) {
    LOG(ERROR) << "Error creating an instance of LED HAL.  Exiting...";
    return shutdown();
  }

  configureRpcThreadpool(1, true);
  status_t status = service->registerAsService();
  if (status != OK) {
    LOG(ERROR) << "Could not register service("
	       << status << ")";
    return shutdown();
  }

  LOG(INFO) << "Simple services started successfully.";
  joinRpcThreadpool();

  // We should not get past the joinRpcThreadpool().
  return shutdown();
}
