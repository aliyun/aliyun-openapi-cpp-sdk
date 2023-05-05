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

#include <alibabacloud/ecd/model/DeleteDevicesRequest.h>

using AlibabaCloud::Ecd::Model::DeleteDevicesRequest;

DeleteDevicesRequest::DeleteDevicesRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "DeleteDevices") {
  setMethod(HttpRequest::Method::Post);
}

DeleteDevicesRequest::~DeleteDevicesRequest() {}

int DeleteDevicesRequest::getClientType() const {
  return clientType_;
}

void DeleteDevicesRequest::setClientType(int clientType) {
  clientType_ = clientType;
  setParameter(std::string("ClientType"), std::to_string(clientType));
}

std::vector<std::string> DeleteDevicesRequest::getDeviceIds() const {
  return deviceIds_;
}

void DeleteDevicesRequest::setDeviceIds(const std::vector<std::string> &deviceIds) {
  deviceIds_ = deviceIds;
}

std::string DeleteDevicesRequest::getRegionId() const {
  return regionId_;
}

void DeleteDevicesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DeleteDevicesRequest::getForce() const {
  return force_;
}

void DeleteDevicesRequest::setForce(int force) {
  force_ = force;
  setParameter(std::string("Force"), std::to_string(force));
}

