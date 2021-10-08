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

#include <alibabacloud/ecs/model/DescribeAutoProvisioningGroupHistoryRequest.h>

using AlibabaCloud::Ecs::Model::DescribeAutoProvisioningGroupHistoryRequest;

DescribeAutoProvisioningGroupHistoryRequest::DescribeAutoProvisioningGroupHistoryRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeAutoProvisioningGroupHistory") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAutoProvisioningGroupHistoryRequest::~DescribeAutoProvisioningGroupHistoryRequest() {}

long DescribeAutoProvisioningGroupHistoryRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeAutoProvisioningGroupHistoryRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeAutoProvisioningGroupHistoryRequest::getStartTime() const {
  return startTime_;
}

void DescribeAutoProvisioningGroupHistoryRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int DescribeAutoProvisioningGroupHistoryRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeAutoProvisioningGroupHistoryRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeAutoProvisioningGroupHistoryRequest::getRegionId() const {
  return regionId_;
}

void DescribeAutoProvisioningGroupHistoryRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeAutoProvisioningGroupHistoryRequest::getPageSize() const {
  return pageSize_;
}

void DescribeAutoProvisioningGroupHistoryRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeAutoProvisioningGroupHistoryRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeAutoProvisioningGroupHistoryRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeAutoProvisioningGroupHistoryRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeAutoProvisioningGroupHistoryRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeAutoProvisioningGroupHistoryRequest::getEndTime() const {
  return endTime_;
}

void DescribeAutoProvisioningGroupHistoryRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeAutoProvisioningGroupHistoryRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeAutoProvisioningGroupHistoryRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeAutoProvisioningGroupHistoryRequest::getAutoProvisioningGroupId() const {
  return autoProvisioningGroupId_;
}

void DescribeAutoProvisioningGroupHistoryRequest::setAutoProvisioningGroupId(const std::string &autoProvisioningGroupId) {
  autoProvisioningGroupId_ = autoProvisioningGroupId;
  setParameter(std::string("AutoProvisioningGroupId"), autoProvisioningGroupId);
}

