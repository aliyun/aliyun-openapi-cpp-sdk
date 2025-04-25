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

#include <alibabacloud/ess/model/AttachInstancesRequest.h>

using AlibabaCloud::Ess::Model::AttachInstancesRequest;

AttachInstancesRequest::AttachInstancesRequest()
    : RpcServiceRequest("ess", "2014-08-28", "AttachInstances") {
  setMethod(HttpRequest::Method::Post);
}

AttachInstancesRequest::~AttachInstancesRequest() {}

long AttachInstancesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AttachInstancesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AttachInstancesRequest::getClientToken() const {
  return clientToken_;
}

void AttachInstancesRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AttachInstancesRequest::getScalingGroupId() const {
  return scalingGroupId_;
}

void AttachInstancesRequest::setScalingGroupId(const std::string &scalingGroupId) {
  scalingGroupId_ = scalingGroupId;
  setParameter(std::string("ScalingGroupId"), scalingGroupId);
}

std::string AttachInstancesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void AttachInstancesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string AttachInstancesRequest::getRegionId() const {
  return regionId_;
}

void AttachInstancesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool AttachInstancesRequest::getIgnoreInvalidInstance() const {
  return ignoreInvalidInstance_;
}

void AttachInstancesRequest::setIgnoreInvalidInstance(bool ignoreInvalidInstance) {
  ignoreInvalidInstance_ = ignoreInvalidInstance;
  setParameter(std::string("IgnoreInvalidInstance"), ignoreInvalidInstance ? "true" : "false");
}

std::string AttachInstancesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AttachInstancesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AttachInstancesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AttachInstancesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long AttachInstancesRequest::getOwnerId() const {
  return ownerId_;
}

void AttachInstancesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

bool AttachInstancesRequest::getEntrusted() const {
  return entrusted_;
}

void AttachInstancesRequest::setEntrusted(bool entrusted) {
  entrusted_ = entrusted;
  setParameter(std::string("Entrusted"), entrusted ? "true" : "false");
}

std::vector<std::string> AttachInstancesRequest::getInstanceId() const {
  return instanceId_;
}

void AttachInstancesRequest::setInstanceId(const std::vector<std::string> &instanceId) {
  instanceId_ = instanceId;
}

std::vector<int> AttachInstancesRequest::getLoadBalancerWeight() const {
  return loadBalancerWeight_;
}

void AttachInstancesRequest::setLoadBalancerWeight(const std::vector<int> &loadBalancerWeight) {
  loadBalancerWeight_ = loadBalancerWeight;
}

bool AttachInstancesRequest::getLifecycleHook() const {
  return lifecycleHook_;
}

void AttachInstancesRequest::setLifecycleHook(bool lifecycleHook) {
  lifecycleHook_ = lifecycleHook;
  setParameter(std::string("LifecycleHook"), lifecycleHook ? "true" : "false");
}

