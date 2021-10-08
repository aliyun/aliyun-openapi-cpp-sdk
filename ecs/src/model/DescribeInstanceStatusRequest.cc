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

#include <alibabacloud/ecs/model/DescribeInstanceStatusRequest.h>

using AlibabaCloud::Ecs::Model::DescribeInstanceStatusRequest;

DescribeInstanceStatusRequest::DescribeInstanceStatusRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeInstanceStatus") {
  setMethod(HttpRequest::Method::Post);
}

DescribeInstanceStatusRequest::~DescribeInstanceStatusRequest() {}

long DescribeInstanceStatusRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeInstanceStatusRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int DescribeInstanceStatusRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeInstanceStatusRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeInstanceStatusRequest::getRegionId() const {
  return regionId_;
}

void DescribeInstanceStatusRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeInstanceStatusRequest::getPageSize() const {
  return pageSize_;
}

void DescribeInstanceStatusRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeInstanceStatusRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeInstanceStatusRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeInstanceStatusRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeInstanceStatusRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeInstanceStatusRequest::getClusterId() const {
  return clusterId_;
}

void DescribeInstanceStatusRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

long DescribeInstanceStatusRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeInstanceStatusRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<std::string> DescribeInstanceStatusRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeInstanceStatusRequest::setInstanceId(const std::vector<std::string> &instanceId) {
  instanceId_ = instanceId;
}

std::string DescribeInstanceStatusRequest::getZoneId() const {
  return zoneId_;
}

void DescribeInstanceStatusRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

