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

#include <alibabacloud/rds/model/DescribeDedicatedHostsRequest.h>

using AlibabaCloud::Rds::Model::DescribeDedicatedHostsRequest;

DescribeDedicatedHostsRequest::DescribeDedicatedHostsRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeDedicatedHosts") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDedicatedHostsRequest::~DescribeDedicatedHostsRequest() {}

long DescribeDedicatedHostsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDedicatedHostsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDedicatedHostsRequest::getHostType() const {
  return hostType_;
}

void DescribeDedicatedHostsRequest::setHostType(const std::string &hostType) {
  hostType_ = hostType;
  setParameter(std::string("HostType"), hostType);
}

std::string DescribeDedicatedHostsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDedicatedHostsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDedicatedHostsRequest::getHostStatus() const {
  return hostStatus_;
}

void DescribeDedicatedHostsRequest::setHostStatus(const std::string &hostStatus) {
  hostStatus_ = hostStatus;
  setParameter(std::string("HostStatus"), hostStatus);
}

std::string DescribeDedicatedHostsRequest::getRegionId() const {
  return regionId_;
}

void DescribeDedicatedHostsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDedicatedHostsRequest::getAllocationStatus() const {
  return allocationStatus_;
}

void DescribeDedicatedHostsRequest::setAllocationStatus(const std::string &allocationStatus) {
  allocationStatus_ = allocationStatus;
  setParameter(std::string("AllocationStatus"), allocationStatus);
}

std::string DescribeDedicatedHostsRequest::getDedicatedHostGroupId() const {
  return dedicatedHostGroupId_;
}

void DescribeDedicatedHostsRequest::setDedicatedHostGroupId(const std::string &dedicatedHostGroupId) {
  dedicatedHostGroupId_ = dedicatedHostGroupId;
  setParameter(std::string("DedicatedHostGroupId"), dedicatedHostGroupId);
}

std::string DescribeDedicatedHostsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDedicatedHostsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long DescribeDedicatedHostsRequest::getOrderId() const {
  return orderId_;
}

void DescribeDedicatedHostsRequest::setOrderId(long orderId) {
  orderId_ = orderId;
  setParameter(std::string("OrderId"), std::to_string(orderId));
}

std::string DescribeDedicatedHostsRequest::getDedicatedHostId() const {
  return dedicatedHostId_;
}

void DescribeDedicatedHostsRequest::setDedicatedHostId(const std::string &dedicatedHostId) {
  dedicatedHostId_ = dedicatedHostId;
  setParameter(std::string("DedicatedHostId"), dedicatedHostId);
}

long DescribeDedicatedHostsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDedicatedHostsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeDedicatedHostsRequest::getZoneId() const {
  return zoneId_;
}

void DescribeDedicatedHostsRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

