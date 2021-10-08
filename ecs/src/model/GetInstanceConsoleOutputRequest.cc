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

#include <alibabacloud/ecs/model/GetInstanceConsoleOutputRequest.h>

using AlibabaCloud::Ecs::Model::GetInstanceConsoleOutputRequest;

GetInstanceConsoleOutputRequest::GetInstanceConsoleOutputRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "GetInstanceConsoleOutput") {
  setMethod(HttpRequest::Method::Post);
}

GetInstanceConsoleOutputRequest::~GetInstanceConsoleOutputRequest() {}

long GetInstanceConsoleOutputRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GetInstanceConsoleOutputRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

bool GetInstanceConsoleOutputRequest::getRemoveSymbols() const {
  return removeSymbols_;
}

void GetInstanceConsoleOutputRequest::setRemoveSymbols(bool removeSymbols) {
  removeSymbols_ = removeSymbols;
  setParameter(std::string("RemoveSymbols"), removeSymbols ? "true" : "false");
}

std::string GetInstanceConsoleOutputRequest::getRegionId() const {
  return regionId_;
}

void GetInstanceConsoleOutputRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetInstanceConsoleOutputRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void GetInstanceConsoleOutputRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string GetInstanceConsoleOutputRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void GetInstanceConsoleOutputRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long GetInstanceConsoleOutputRequest::getOwnerId() const {
  return ownerId_;
}

void GetInstanceConsoleOutputRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string GetInstanceConsoleOutputRequest::getInstanceId() const {
  return instanceId_;
}

void GetInstanceConsoleOutputRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

