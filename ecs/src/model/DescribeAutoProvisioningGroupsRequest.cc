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

#include <alibabacloud/ecs/model/DescribeAutoProvisioningGroupsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeAutoProvisioningGroupsRequest;

DescribeAutoProvisioningGroupsRequest::DescribeAutoProvisioningGroupsRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeAutoProvisioningGroups") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAutoProvisioningGroupsRequest::~DescribeAutoProvisioningGroupsRequest() {}

long DescribeAutoProvisioningGroupsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeAutoProvisioningGroupsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int DescribeAutoProvisioningGroupsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeAutoProvisioningGroupsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeAutoProvisioningGroupsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeAutoProvisioningGroupsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeAutoProvisioningGroupsRequest::getRegionId() const {
  return regionId_;
}

void DescribeAutoProvisioningGroupsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeAutoProvisioningGroupsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeAutoProvisioningGroupsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<DescribeAutoProvisioningGroupsRequest::Tag> DescribeAutoProvisioningGroupsRequest::getTag() const {
  return tag_;
}

void DescribeAutoProvisioningGroupsRequest::setTag(const std::vector<DescribeAutoProvisioningGroupsRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

std::vector<std::string> DescribeAutoProvisioningGroupsRequest::getAutoProvisioningGroupStatus() const {
  return autoProvisioningGroupStatus_;
}

void DescribeAutoProvisioningGroupsRequest::setAutoProvisioningGroupStatus(const std::vector<std::string> &autoProvisioningGroupStatus) {
  autoProvisioningGroupStatus_ = autoProvisioningGroupStatus;
}

std::string DescribeAutoProvisioningGroupsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeAutoProvisioningGroupsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeAutoProvisioningGroupsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeAutoProvisioningGroupsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeAutoProvisioningGroupsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeAutoProvisioningGroupsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<std::string> DescribeAutoProvisioningGroupsRequest::getAutoProvisioningGroupId() const {
  return autoProvisioningGroupId_;
}

void DescribeAutoProvisioningGroupsRequest::setAutoProvisioningGroupId(const std::vector<std::string> &autoProvisioningGroupId) {
  autoProvisioningGroupId_ = autoProvisioningGroupId;
}

std::string DescribeAutoProvisioningGroupsRequest::getAutoProvisioningGroupName() const {
  return autoProvisioningGroupName_;
}

void DescribeAutoProvisioningGroupsRequest::setAutoProvisioningGroupName(const std::string &autoProvisioningGroupName) {
  autoProvisioningGroupName_ = autoProvisioningGroupName;
  setParameter(std::string("AutoProvisioningGroupName"), autoProvisioningGroupName);
}

