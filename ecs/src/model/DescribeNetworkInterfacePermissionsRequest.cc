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

#include <alibabacloud/ecs/model/DescribeNetworkInterfacePermissionsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeNetworkInterfacePermissionsRequest;

DescribeNetworkInterfacePermissionsRequest::DescribeNetworkInterfacePermissionsRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeNetworkInterfacePermissions") {
  setMethod(HttpRequest::Method::Post);
}

DescribeNetworkInterfacePermissionsRequest::~DescribeNetworkInterfacePermissionsRequest() {}

long DescribeNetworkInterfacePermissionsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeNetworkInterfacePermissionsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int DescribeNetworkInterfacePermissionsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeNetworkInterfacePermissionsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeNetworkInterfacePermissionsRequest::getRegionId() const {
  return regionId_;
}

void DescribeNetworkInterfacePermissionsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeNetworkInterfacePermissionsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeNetworkInterfacePermissionsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<std::string> DescribeNetworkInterfacePermissionsRequest::getNetworkInterfacePermissionId() const {
  return networkInterfacePermissionId_;
}

void DescribeNetworkInterfacePermissionsRequest::setNetworkInterfacePermissionId(const std::vector<std::string> &networkInterfacePermissionId) {
  networkInterfacePermissionId_ = networkInterfacePermissionId;
}

std::string DescribeNetworkInterfacePermissionsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeNetworkInterfacePermissionsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeNetworkInterfacePermissionsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeNetworkInterfacePermissionsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeNetworkInterfacePermissionsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeNetworkInterfacePermissionsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeNetworkInterfacePermissionsRequest::getNetworkInterfaceId() const {
  return networkInterfaceId_;
}

void DescribeNetworkInterfacePermissionsRequest::setNetworkInterfaceId(const std::string &networkInterfaceId) {
  networkInterfaceId_ = networkInterfaceId;
  setParameter(std::string("NetworkInterfaceId"), networkInterfaceId);
}

