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

#include <alibabacloud/alikafka/model/UpdateAllowedIpRequest.h>

using AlibabaCloud::Alikafka::Model::UpdateAllowedIpRequest;

UpdateAllowedIpRequest::UpdateAllowedIpRequest()
    : RpcServiceRequest("alikafka", "2019-09-16", "UpdateAllowedIp") {
  setMethod(HttpRequest::Method::Post);
}

UpdateAllowedIpRequest::~UpdateAllowedIpRequest() {}

std::string UpdateAllowedIpRequest::getPortRange() const {
  return portRange_;
}

void UpdateAllowedIpRequest::setPortRange(const std::string &portRange) {
  portRange_ = portRange;
  setParameter(std::string("PortRange"), portRange);
}

std::string UpdateAllowedIpRequest::getAllowedListIp() const {
  return allowedListIp_;
}

void UpdateAllowedIpRequest::setAllowedListIp(const std::string &allowedListIp) {
  allowedListIp_ = allowedListIp;
  setParameter(std::string("AllowedListIp"), allowedListIp);
}

std::string UpdateAllowedIpRequest::getUpdateType() const {
  return updateType_;
}

void UpdateAllowedIpRequest::setUpdateType(const std::string &updateType) {
  updateType_ = updateType;
  setParameter(std::string("UpdateType"), updateType);
}

std::string UpdateAllowedIpRequest::getAllowedListType() const {
  return allowedListType_;
}

void UpdateAllowedIpRequest::setAllowedListType(const std::string &allowedListType) {
  allowedListType_ = allowedListType;
  setParameter(std::string("AllowedListType"), allowedListType);
}

std::string UpdateAllowedIpRequest::getDescription() const {
  return description_;
}

void UpdateAllowedIpRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdateAllowedIpRequest::getInstanceId() const {
  return instanceId_;
}

void UpdateAllowedIpRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string UpdateAllowedIpRequest::getRegionId() const {
  return regionId_;
}

void UpdateAllowedIpRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

