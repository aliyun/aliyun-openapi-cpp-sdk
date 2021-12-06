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

#include <alibabacloud/ecs/model/DescribeVSwitchesRequest.h>

using AlibabaCloud::Ecs::Model::DescribeVSwitchesRequest;

DescribeVSwitchesRequest::DescribeVSwitchesRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeVSwitches") {
  setMethod(HttpRequest::Method::Post);
}

DescribeVSwitchesRequest::~DescribeVSwitchesRequest() {}

long DescribeVSwitchesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeVSwitchesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int DescribeVSwitchesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeVSwitchesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeVSwitchesRequest::getRegionId() const {
  return regionId_;
}

void DescribeVSwitchesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeVSwitchesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeVSwitchesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

bool DescribeVSwitchesRequest::getIsDefault() const {
  return isDefault_;
}

void DescribeVSwitchesRequest::setIsDefault(bool isDefault) {
  isDefault_ = isDefault;
  setParameter(std::string("IsDefault"), isDefault ? "true" : "false");
}

std::string DescribeVSwitchesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeVSwitchesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeVSwitchesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeVSwitchesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeVSwitchesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeVSwitchesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeVSwitchesRequest::getVSwitchId() const {
  return vSwitchId_;
}

void DescribeVSwitchesRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string DescribeVSwitchesRequest::getVpcId() const {
  return vpcId_;
}

void DescribeVSwitchesRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string DescribeVSwitchesRequest::getZoneId() const {
  return zoneId_;
}

void DescribeVSwitchesRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

