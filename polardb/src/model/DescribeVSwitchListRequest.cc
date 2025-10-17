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

#include <alibabacloud/polardb/model/DescribeVSwitchListRequest.h>

using AlibabaCloud::Polardb::Model::DescribeVSwitchListRequest;

DescribeVSwitchListRequest::DescribeVSwitchListRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeVSwitchList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeVSwitchListRequest::~DescribeVSwitchListRequest() {}

long DescribeVSwitchListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeVSwitchListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::vector<std::string> DescribeVSwitchListRequest::getVSwitchIds() const {
  return vSwitchIds_;
}

void DescribeVSwitchListRequest::setVSwitchIds(const std::vector<std::string> &vSwitchIds) {
  vSwitchIds_ = vSwitchIds;
}

int DescribeVSwitchListRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeVSwitchListRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeVSwitchListRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeVSwitchListRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeVSwitchListRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeVSwitchListRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeVSwitchListRequest::getRegionId() const {
  return regionId_;
}

void DescribeVSwitchListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeVSwitchListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeVSwitchListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeVSwitchListRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeVSwitchListRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeVSwitchListRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeVSwitchListRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeVSwitchListRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeVSwitchListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeVSwitchListRequest::getVpcId() const {
  return vpcId_;
}

void DescribeVSwitchListRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string DescribeVSwitchListRequest::getZoneId() const {
  return zoneId_;
}

void DescribeVSwitchListRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

