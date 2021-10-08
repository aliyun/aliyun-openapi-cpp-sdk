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

#include <alibabacloud/ecs/model/DescribeDedicatedHostAutoRenewRequest.h>

using AlibabaCloud::Ecs::Model::DescribeDedicatedHostAutoRenewRequest;

DescribeDedicatedHostAutoRenewRequest::DescribeDedicatedHostAutoRenewRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeDedicatedHostAutoRenew") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDedicatedHostAutoRenewRequest::~DescribeDedicatedHostAutoRenewRequest() {}

std::string DescribeDedicatedHostAutoRenewRequest::getDedicatedHostIds() const {
  return dedicatedHostIds_;
}

void DescribeDedicatedHostAutoRenewRequest::setDedicatedHostIds(const std::string &dedicatedHostIds) {
  dedicatedHostIds_ = dedicatedHostIds;
  setParameter(std::string("DedicatedHostIds"), dedicatedHostIds);
}

long DescribeDedicatedHostAutoRenewRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDedicatedHostAutoRenewRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDedicatedHostAutoRenewRequest::getRegionId() const {
  return regionId_;
}

void DescribeDedicatedHostAutoRenewRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDedicatedHostAutoRenewRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDedicatedHostAutoRenewRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeDedicatedHostAutoRenewRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeDedicatedHostAutoRenewRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeDedicatedHostAutoRenewRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDedicatedHostAutoRenewRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

