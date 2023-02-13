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

#include <alibabacloud/ecs/model/DescribeReservedInstanceAutoRenewAttributeRequest.h>

using AlibabaCloud::Ecs::Model::DescribeReservedInstanceAutoRenewAttributeRequest;

DescribeReservedInstanceAutoRenewAttributeRequest::DescribeReservedInstanceAutoRenewAttributeRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeReservedInstanceAutoRenewAttribute") {
  setMethod(HttpRequest::Method::Post);
}

DescribeReservedInstanceAutoRenewAttributeRequest::~DescribeReservedInstanceAutoRenewAttributeRequest() {}

long DescribeReservedInstanceAutoRenewAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeReservedInstanceAutoRenewAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeReservedInstanceAutoRenewAttributeRequest::getRegionId() const {
  return regionId_;
}

void DescribeReservedInstanceAutoRenewAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeReservedInstanceAutoRenewAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeReservedInstanceAutoRenewAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeReservedInstanceAutoRenewAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeReservedInstanceAutoRenewAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeReservedInstanceAutoRenewAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeReservedInstanceAutoRenewAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<std::string> DescribeReservedInstanceAutoRenewAttributeRequest::getReservedInstanceId() const {
  return reservedInstanceId_;
}

void DescribeReservedInstanceAutoRenewAttributeRequest::setReservedInstanceId(const std::vector<std::string> &reservedInstanceId) {
  reservedInstanceId_ = reservedInstanceId;
}

