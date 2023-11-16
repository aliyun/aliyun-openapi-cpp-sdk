/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/csas/model/UpdateUserDevicesStatusRequest.h>

using AlibabaCloud::Csas::Model::UpdateUserDevicesStatusRequest;

UpdateUserDevicesStatusRequest::UpdateUserDevicesStatusRequest()
    : RpcServiceRequest("csas", "2023-01-20", "UpdateUserDevicesStatus") {
  setMethod(HttpRequest::Method::Post);
}

UpdateUserDevicesStatusRequest::~UpdateUserDevicesStatusRequest() {}

std::string UpdateUserDevicesStatusRequest::getDeviceAction() const {
  return deviceAction_;
}

void UpdateUserDevicesStatusRequest::setDeviceAction(const std::string &deviceAction) {
  deviceAction_ = deviceAction;
  setBodyParameter(std::string("DeviceAction"), deviceAction);
}

std::vector<UpdateUserDevicesStatusRequest::std::string> UpdateUserDevicesStatusRequest::getDeviceTags() const {
  return deviceTags_;
}

void UpdateUserDevicesStatusRequest::setDeviceTags(const std::vector<UpdateUserDevicesStatusRequest::std::string> &deviceTags) {
  deviceTags_ = deviceTags;
  for(int dep1 = 0; dep1 != deviceTags.size(); dep1++) {
    setBodyParameter(std::string("DeviceTags") + "." + std::to_string(dep1 + 1), deviceTags[dep1]);
  }
}

std::string UpdateUserDevicesStatusRequest::getSourceIp() const {
  return sourceIp_;
}

void UpdateUserDevicesStatusRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

