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

#include <alibabacloud/ecs/model/DescribeDedicatedHostTypesRequest.h>

using AlibabaCloud::Ecs::Model::DescribeDedicatedHostTypesRequest;

DescribeDedicatedHostTypesRequest::DescribeDedicatedHostTypesRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeDedicatedHostTypes") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDedicatedHostTypesRequest::~DescribeDedicatedHostTypesRequest() {}

long DescribeDedicatedHostTypesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDedicatedHostTypesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDedicatedHostTypesRequest::getSupportedInstanceTypeFamily() const {
  return supportedInstanceTypeFamily_;
}

void DescribeDedicatedHostTypesRequest::setSupportedInstanceTypeFamily(const std::string &supportedInstanceTypeFamily) {
  supportedInstanceTypeFamily_ = supportedInstanceTypeFamily;
  setParameter(std::string("SupportedInstanceTypeFamily"), supportedInstanceTypeFamily);
}

std::string DescribeDedicatedHostTypesRequest::getRegionId() const {
  return regionId_;
}

void DescribeDedicatedHostTypesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDedicatedHostTypesRequest::getDedicatedHostType() const {
  return dedicatedHostType_;
}

void DescribeDedicatedHostTypesRequest::setDedicatedHostType(const std::string &dedicatedHostType) {
  dedicatedHostType_ = dedicatedHostType;
  setParameter(std::string("DedicatedHostType"), dedicatedHostType);
}

std::string DescribeDedicatedHostTypesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDedicatedHostTypesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeDedicatedHostTypesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeDedicatedHostTypesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeDedicatedHostTypesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDedicatedHostTypesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

