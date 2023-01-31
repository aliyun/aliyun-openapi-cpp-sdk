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

#include <alibabacloud/vpc/model/DescribeEipMonitorDataRequest.h>

using AlibabaCloud::Vpc::Model::DescribeEipMonitorDataRequest;

DescribeEipMonitorDataRequest::DescribeEipMonitorDataRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DescribeEipMonitorData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeEipMonitorDataRequest::~DescribeEipMonitorDataRequest() {}

long DescribeEipMonitorDataRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeEipMonitorDataRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeEipMonitorDataRequest::getAllocationId() const {
  return allocationId_;
}

void DescribeEipMonitorDataRequest::setAllocationId(const std::string &allocationId) {
  allocationId_ = allocationId;
  setParameter(std::string("AllocationId"), allocationId);
}

std::string DescribeEipMonitorDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeEipMonitorDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeEipMonitorDataRequest::getRegionId() const {
  return regionId_;
}

void DescribeEipMonitorDataRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeEipMonitorDataRequest::getPeriod() const {
  return period_;
}

void DescribeEipMonitorDataRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

std::string DescribeEipMonitorDataRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeEipMonitorDataRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeEipMonitorDataRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeEipMonitorDataRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeEipMonitorDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeEipMonitorDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeEipMonitorDataRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeEipMonitorDataRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

