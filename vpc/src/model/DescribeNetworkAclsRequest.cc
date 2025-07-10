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

#include <alibabacloud/vpc/model/DescribeNetworkAclsRequest.h>

using AlibabaCloud::Vpc::Model::DescribeNetworkAclsRequest;

DescribeNetworkAclsRequest::DescribeNetworkAclsRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DescribeNetworkAcls") {
  setMethod(HttpRequest::Method::Post);
}

DescribeNetworkAclsRequest::~DescribeNetworkAclsRequest() {}

long DescribeNetworkAclsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeNetworkAclsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeNetworkAclsRequest::getClientToken() const {
  return clientToken_;
}

void DescribeNetworkAclsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

int DescribeNetworkAclsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeNetworkAclsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeNetworkAclsRequest::getRegionId() const {
  return regionId_;
}

void DescribeNetworkAclsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeNetworkAclsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeNetworkAclsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeNetworkAclsRequest::getNetworkAclId() const {
  return networkAclId_;
}

void DescribeNetworkAclsRequest::setNetworkAclId(const std::string &networkAclId) {
  networkAclId_ = networkAclId;
  setParameter(std::string("NetworkAclId"), networkAclId);
}

std::string DescribeNetworkAclsRequest::getResourceId() const {
  return resourceId_;
}

void DescribeNetworkAclsRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

std::string DescribeNetworkAclsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeNetworkAclsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeNetworkAclsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeNetworkAclsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeNetworkAclsRequest::getNetworkAclName() const {
  return networkAclName_;
}

void DescribeNetworkAclsRequest::setNetworkAclName(const std::string &networkAclName) {
  networkAclName_ = networkAclName;
  setParameter(std::string("NetworkAclName"), networkAclName);
}

long DescribeNetworkAclsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeNetworkAclsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeNetworkAclsRequest::getResourceType() const {
  return resourceType_;
}

void DescribeNetworkAclsRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::vector<DescribeNetworkAclsRequest::Tags> DescribeNetworkAclsRequest::getTags() const {
  return tags_;
}

void DescribeNetworkAclsRequest::setTags(const std::vector<DescribeNetworkAclsRequest::Tags> &tags) {
  tags_ = tags;
  for(int dep1 = 0; dep1 != tags.size(); dep1++) {
  auto tagsObj = tags.at(dep1);
  std::string tagsObjStr = std::string("Tags") + "." + std::to_string(dep1 + 1);
    setParameter(tagsObjStr + ".Key", tagsObj.key);
    setParameter(tagsObjStr + ".Value", tagsObj.value);
  }
}

std::string DescribeNetworkAclsRequest::getVpcId() const {
  return vpcId_;
}

void DescribeNetworkAclsRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

