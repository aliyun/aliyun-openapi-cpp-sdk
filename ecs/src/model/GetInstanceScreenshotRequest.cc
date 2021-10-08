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

#include <alibabacloud/ecs/model/GetInstanceScreenshotRequest.h>

using AlibabaCloud::Ecs::Model::GetInstanceScreenshotRequest;

GetInstanceScreenshotRequest::GetInstanceScreenshotRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "GetInstanceScreenshot") {
  setMethod(HttpRequest::Method::Post);
}

GetInstanceScreenshotRequest::~GetInstanceScreenshotRequest() {}

long GetInstanceScreenshotRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GetInstanceScreenshotRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string GetInstanceScreenshotRequest::getRegionId() const {
  return regionId_;
}

void GetInstanceScreenshotRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetInstanceScreenshotRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void GetInstanceScreenshotRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

bool GetInstanceScreenshotRequest::getWakeUp() const {
  return wakeUp_;
}

void GetInstanceScreenshotRequest::setWakeUp(bool wakeUp) {
  wakeUp_ = wakeUp;
  setParameter(std::string("WakeUp"), wakeUp ? "true" : "false");
}

std::string GetInstanceScreenshotRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void GetInstanceScreenshotRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long GetInstanceScreenshotRequest::getOwnerId() const {
  return ownerId_;
}

void GetInstanceScreenshotRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string GetInstanceScreenshotRequest::getInstanceId() const {
  return instanceId_;
}

void GetInstanceScreenshotRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

