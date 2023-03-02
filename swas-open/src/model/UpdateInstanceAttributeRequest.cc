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

#include <alibabacloud/swas-open/model/UpdateInstanceAttributeRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::UpdateInstanceAttributeRequest;

UpdateInstanceAttributeRequest::UpdateInstanceAttributeRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "UpdateInstanceAttribute") {
  setMethod(HttpRequest::Method::Post);
}

UpdateInstanceAttributeRequest::~UpdateInstanceAttributeRequest() {}

std::string UpdateInstanceAttributeRequest::getClientToken() const {
  return clientToken_;
}

void UpdateInstanceAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateInstanceAttributeRequest::getPassword() const {
  return password_;
}

void UpdateInstanceAttributeRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

std::string UpdateInstanceAttributeRequest::getInstanceId() const {
  return instanceId_;
}

void UpdateInstanceAttributeRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string UpdateInstanceAttributeRequest::getInstanceName() const {
  return instanceName_;
}

void UpdateInstanceAttributeRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setParameter(std::string("InstanceName"), instanceName);
}

std::string UpdateInstanceAttributeRequest::getRegionId() const {
  return regionId_;
}

void UpdateInstanceAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

