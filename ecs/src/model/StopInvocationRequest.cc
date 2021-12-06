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

#include <alibabacloud/ecs/model/StopInvocationRequest.h>

using AlibabaCloud::Ecs::Model::StopInvocationRequest;

StopInvocationRequest::StopInvocationRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "StopInvocation") {
  setMethod(HttpRequest::Method::Post);
}

StopInvocationRequest::~StopInvocationRequest() {}

long StopInvocationRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void StopInvocationRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string StopInvocationRequest::getRegionId() const {
  return regionId_;
}

void StopInvocationRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string StopInvocationRequest::getInvokeId() const {
  return invokeId_;
}

void StopInvocationRequest::setInvokeId(const std::string &invokeId) {
  invokeId_ = invokeId;
  setParameter(std::string("InvokeId"), invokeId);
}

std::string StopInvocationRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void StopInvocationRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string StopInvocationRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void StopInvocationRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long StopInvocationRequest::getOwnerId() const {
  return ownerId_;
}

void StopInvocationRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<std::string> StopInvocationRequest::getInstanceId() const {
  return instanceId_;
}

void StopInvocationRequest::setInstanceId(const std::vector<std::string> &instanceId) {
  instanceId_ = instanceId;
}

