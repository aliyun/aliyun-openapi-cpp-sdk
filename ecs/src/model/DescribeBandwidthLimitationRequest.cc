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

#include <alibabacloud/ecs/model/DescribeBandwidthLimitationRequest.h>

using AlibabaCloud::Ecs::Model::DescribeBandwidthLimitationRequest;

DescribeBandwidthLimitationRequest::DescribeBandwidthLimitationRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeBandwidthLimitation") {
  setMethod(HttpRequest::Method::Post);
}

DescribeBandwidthLimitationRequest::~DescribeBandwidthLimitationRequest() {}

long DescribeBandwidthLimitationRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeBandwidthLimitationRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeBandwidthLimitationRequest::getRegionId() const {
  return regionId_;
}

void DescribeBandwidthLimitationRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeBandwidthLimitationRequest::getInstanceType() const {
  return instanceType_;
}

void DescribeBandwidthLimitationRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string DescribeBandwidthLimitationRequest::getInstanceChargeType() const {
  return instanceChargeType_;
}

void DescribeBandwidthLimitationRequest::setInstanceChargeType(const std::string &instanceChargeType) {
  instanceChargeType_ = instanceChargeType;
  setParameter(std::string("InstanceChargeType"), instanceChargeType);
}

std::string DescribeBandwidthLimitationRequest::getResourceId() const {
  return resourceId_;
}

void DescribeBandwidthLimitationRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

std::string DescribeBandwidthLimitationRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeBandwidthLimitationRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeBandwidthLimitationRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeBandwidthLimitationRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeBandwidthLimitationRequest::getOperationType() const {
  return operationType_;
}

void DescribeBandwidthLimitationRequest::setOperationType(const std::string &operationType) {
  operationType_ = operationType;
  setParameter(std::string("OperationType"), operationType);
}

long DescribeBandwidthLimitationRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeBandwidthLimitationRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeBandwidthLimitationRequest::getSpotStrategy() const {
  return spotStrategy_;
}

void DescribeBandwidthLimitationRequest::setSpotStrategy(const std::string &spotStrategy) {
  spotStrategy_ = spotStrategy;
  setParameter(std::string("SpotStrategy"), spotStrategy);
}

