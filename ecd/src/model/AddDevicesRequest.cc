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

#include <alibabacloud/ecd/model/AddDevicesRequest.h>

using AlibabaCloud::Ecd::Model::AddDevicesRequest;

AddDevicesRequest::AddDevicesRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "AddDevices") {
  setMethod(HttpRequest::Method::Post);
}

AddDevicesRequest::~AddDevicesRequest() {}

int AddDevicesRequest::getClientType() const {
  return clientType_;
}

void AddDevicesRequest::setClientType(int clientType) {
  clientType_ = clientType;
  setParameter(std::string("ClientType"), std::to_string(clientType));
}

std::vector<std::string> AddDevicesRequest::getDeviceIds() const {
  return deviceIds_;
}

void AddDevicesRequest::setDeviceIds(const std::vector<std::string> &deviceIds) {
  deviceIds_ = deviceIds;
}

std::string AddDevicesRequest::getRegionId() const {
  return regionId_;
}

void AddDevicesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

