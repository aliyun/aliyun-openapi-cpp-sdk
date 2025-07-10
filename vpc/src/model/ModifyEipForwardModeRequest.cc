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

#include <alibabacloud/vpc/model/ModifyEipForwardModeRequest.h>

using AlibabaCloud::Vpc::Model::ModifyEipForwardModeRequest;

ModifyEipForwardModeRequest::ModifyEipForwardModeRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ModifyEipForwardMode") {
  setMethod(HttpRequest::Method::Post);
}

ModifyEipForwardModeRequest::~ModifyEipForwardModeRequest() {}

long ModifyEipForwardModeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyEipForwardModeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyEipForwardModeRequest::getClientToken() const {
  return clientToken_;
}

void ModifyEipForwardModeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyEipForwardModeRequest::getMode() const {
  return mode_;
}

void ModifyEipForwardModeRequest::setMode(const std::string &mode) {
  mode_ = mode;
  setParameter(std::string("Mode"), mode);
}

std::string ModifyEipForwardModeRequest::getRegionId() const {
  return regionId_;
}

void ModifyEipForwardModeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyEipForwardModeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyEipForwardModeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long ModifyEipForwardModeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyEipForwardModeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyEipForwardModeRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyEipForwardModeRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

