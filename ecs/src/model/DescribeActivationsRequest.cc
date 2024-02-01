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

#include <alibabacloud/ecs/model/DescribeActivationsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeActivationsRequest;

DescribeActivationsRequest::DescribeActivationsRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeActivations") {
  setMethod(HttpRequest::Method::Post);
}

DescribeActivationsRequest::~DescribeActivationsRequest() {}

long DescribeActivationsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeActivationsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

long DescribeActivationsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeActivationsRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeActivationsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeActivationsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeActivationsRequest::getRegionId() const {
  return regionId_;
}

void DescribeActivationsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeActivationsRequest::getNextToken() const {
  return nextToken_;
}

void DescribeActivationsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

long DescribeActivationsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeActivationsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<DescribeActivationsRequest::Tag> DescribeActivationsRequest::getTag() const {
  return tag_;
}

void DescribeActivationsRequest::setTag(const std::vector<DescribeActivationsRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

std::string DescribeActivationsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeActivationsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeActivationsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeActivationsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeActivationsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeActivationsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeActivationsRequest::getInstanceName() const {
  return instanceName_;
}

void DescribeActivationsRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setParameter(std::string("InstanceName"), instanceName);
}

int DescribeActivationsRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeActivationsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string DescribeActivationsRequest::getActivationId() const {
  return activationId_;
}

void DescribeActivationsRequest::setActivationId(const std::string &activationId) {
  activationId_ = activationId;
  setParameter(std::string("ActivationId"), activationId);
}

