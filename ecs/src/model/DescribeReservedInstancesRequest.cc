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

#include <alibabacloud/ecs/model/DescribeReservedInstancesRequest.h>

using AlibabaCloud::Ecs::Model::DescribeReservedInstancesRequest;

DescribeReservedInstancesRequest::DescribeReservedInstancesRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeReservedInstances") {
  setMethod(HttpRequest::Method::Post);
}

DescribeReservedInstancesRequest::~DescribeReservedInstancesRequest() {}

long DescribeReservedInstancesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeReservedInstancesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int DescribeReservedInstancesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeReservedInstancesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeReservedInstancesRequest::getLockReason() const {
  return lockReason_;
}

void DescribeReservedInstancesRequest::setLockReason(const std::string &lockReason) {
  lockReason_ = lockReason;
  setParameter(std::string("LockReason"), lockReason);
}

std::string DescribeReservedInstancesRequest::getRegionId() const {
  return regionId_;
}

void DescribeReservedInstancesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeReservedInstancesRequest::getScope() const {
  return scope_;
}

void DescribeReservedInstancesRequest::setScope(const std::string &scope) {
  scope_ = scope;
  setParameter(std::string("Scope"), scope);
}

int DescribeReservedInstancesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeReservedInstancesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeReservedInstancesRequest::getInstanceType() const {
  return instanceType_;
}

void DescribeReservedInstancesRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::vector<DescribeReservedInstancesRequest::Tag> DescribeReservedInstancesRequest::getTag() const {
  return tag_;
}

void DescribeReservedInstancesRequest::setTag(const std::vector<DescribeReservedInstancesRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

std::string DescribeReservedInstancesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeReservedInstancesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeReservedInstancesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeReservedInstancesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeReservedInstancesRequest::getInstanceTypeFamily() const {
  return instanceTypeFamily_;
}

void DescribeReservedInstancesRequest::setInstanceTypeFamily(const std::string &instanceTypeFamily) {
  instanceTypeFamily_ = instanceTypeFamily;
  setParameter(std::string("InstanceTypeFamily"), instanceTypeFamily);
}

long DescribeReservedInstancesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeReservedInstancesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<std::string> DescribeReservedInstancesRequest::getReservedInstanceId() const {
  return reservedInstanceId_;
}

void DescribeReservedInstancesRequest::setReservedInstanceId(const std::vector<std::string> &reservedInstanceId) {
  reservedInstanceId_ = reservedInstanceId;
}

std::string DescribeReservedInstancesRequest::getOfferingType() const {
  return offeringType_;
}

void DescribeReservedInstancesRequest::setOfferingType(const std::string &offeringType) {
  offeringType_ = offeringType;
  setParameter(std::string("OfferingType"), offeringType);
}

std::string DescribeReservedInstancesRequest::getZoneId() const {
  return zoneId_;
}

void DescribeReservedInstancesRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string DescribeReservedInstancesRequest::getReservedInstanceName() const {
  return reservedInstanceName_;
}

void DescribeReservedInstancesRequest::setReservedInstanceName(const std::string &reservedInstanceName) {
  reservedInstanceName_ = reservedInstanceName;
  setParameter(std::string("ReservedInstanceName"), reservedInstanceName);
}

std::string DescribeReservedInstancesRequest::getAllocationType() const {
  return allocationType_;
}

void DescribeReservedInstancesRequest::setAllocationType(const std::string &allocationType) {
  allocationType_ = allocationType;
  setParameter(std::string("AllocationType"), allocationType);
}

std::vector<std::string> DescribeReservedInstancesRequest::getStatus() const {
  return status_;
}

void DescribeReservedInstancesRequest::setStatus(const std::vector<std::string> &status) {
  status_ = status;
}

