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

#include <alibabacloud/ess/model/DetachInstancesRequest.h>

using AlibabaCloud::Ess::Model::DetachInstancesRequest;

DetachInstancesRequest::DetachInstancesRequest()
    : RpcServiceRequest("ess", "2014-08-28", "DetachInstances") {
  setMethod(HttpRequest::Method::Post);
}

DetachInstancesRequest::~DetachInstancesRequest() {}

long DetachInstancesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DetachInstancesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DetachInstancesRequest::getClientToken() const {
  return clientToken_;
}

void DetachInstancesRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DetachInstancesRequest::getScalingGroupId() const {
  return scalingGroupId_;
}

void DetachInstancesRequest::setScalingGroupId(const std::string &scalingGroupId) {
  scalingGroupId_ = scalingGroupId;
  setParameter(std::string("ScalingGroupId"), scalingGroupId);
}

std::string DetachInstancesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DetachInstancesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

bool DetachInstancesRequest::getDecreaseDesiredCapacity() const {
  return decreaseDesiredCapacity_;
}

void DetachInstancesRequest::setDecreaseDesiredCapacity(bool decreaseDesiredCapacity) {
  decreaseDesiredCapacity_ = decreaseDesiredCapacity;
  setParameter(std::string("DecreaseDesiredCapacity"), decreaseDesiredCapacity ? "true" : "false");
}

bool DetachInstancesRequest::getIgnoreInvalidInstance() const {
  return ignoreInvalidInstance_;
}

void DetachInstancesRequest::setIgnoreInvalidInstance(bool ignoreInvalidInstance) {
  ignoreInvalidInstance_ = ignoreInvalidInstance;
  setParameter(std::string("IgnoreInvalidInstance"), ignoreInvalidInstance ? "true" : "false");
}

std::string DetachInstancesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DetachInstancesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DetachInstancesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DetachInstancesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DetachInstancesRequest::getOwnerId() const {
  return ownerId_;
}

void DetachInstancesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DetachInstancesRequest::getDetachOption() const {
  return detachOption_;
}

void DetachInstancesRequest::setDetachOption(const std::string &detachOption) {
  detachOption_ = detachOption;
  setParameter(std::string("DetachOption"), detachOption);
}

std::vector<std::string> DetachInstancesRequest::getInstanceId() const {
  return instanceId_;
}

void DetachInstancesRequest::setInstanceId(const std::vector<std::string> &instanceId) {
  instanceId_ = instanceId;
}

bool DetachInstancesRequest::getLifecycleHook() const {
  return lifecycleHook_;
}

void DetachInstancesRequest::setLifecycleHook(bool lifecycleHook) {
  lifecycleHook_ = lifecycleHook;
  setParameter(std::string("LifecycleHook"), lifecycleHook ? "true" : "false");
}

