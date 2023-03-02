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

#include <alibabacloud/lto/model/EnableDeviceGroupRequest.h>

using AlibabaCloud::Lto::Model::EnableDeviceGroupRequest;

EnableDeviceGroupRequest::EnableDeviceGroupRequest()
    : RpcServiceRequest("lto", "2021-07-07", "EnableDeviceGroup") {
  setMethod(HttpRequest::Method::Post);
}

EnableDeviceGroupRequest::~EnableDeviceGroupRequest() {}

std::string EnableDeviceGroupRequest::getRegionId() const {
  return regionId_;
}

void EnableDeviceGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string EnableDeviceGroupRequest::getDeviceGroupId() const {
  return deviceGroupId_;
}

void EnableDeviceGroupRequest::setDeviceGroupId(const std::string &deviceGroupId) {
  deviceGroupId_ = deviceGroupId;
  setParameter(std::string("DeviceGroupId"), deviceGroupId);
}

