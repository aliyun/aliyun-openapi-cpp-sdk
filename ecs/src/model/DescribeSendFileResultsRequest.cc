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

#include <alibabacloud/ecs/model/DescribeSendFileResultsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeSendFileResultsRequest;

DescribeSendFileResultsRequest::DescribeSendFileResultsRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeSendFileResults") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSendFileResultsRequest::~DescribeSendFileResultsRequest() {}

long DescribeSendFileResultsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeSendFileResultsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

long DescribeSendFileResultsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeSendFileResultsRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeSendFileResultsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeSendFileResultsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeSendFileResultsRequest::getRegionId() const {
  return regionId_;
}

void DescribeSendFileResultsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeSendFileResultsRequest::getNextToken() const {
  return nextToken_;
}

void DescribeSendFileResultsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

long DescribeSendFileResultsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeSendFileResultsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<DescribeSendFileResultsRequest::Tag> DescribeSendFileResultsRequest::getTag() const {
  return tag_;
}

void DescribeSendFileResultsRequest::setTag(const std::vector<DescribeSendFileResultsRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

std::string DescribeSendFileResultsRequest::getInvokeId() const {
  return invokeId_;
}

void DescribeSendFileResultsRequest::setInvokeId(const std::string &invokeId) {
  invokeId_ = invokeId;
  setParameter(std::string("InvokeId"), invokeId);
}

std::string DescribeSendFileResultsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeSendFileResultsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeSendFileResultsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeSendFileResultsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeSendFileResultsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeSendFileResultsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeSendFileResultsRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeSendFileResultsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeSendFileResultsRequest::getInvocationStatus() const {
  return invocationStatus_;
}

void DescribeSendFileResultsRequest::setInvocationStatus(const std::string &invocationStatus) {
  invocationStatus_ = invocationStatus;
  setParameter(std::string("InvocationStatus"), invocationStatus);
}

std::string DescribeSendFileResultsRequest::getName() const {
  return name_;
}

void DescribeSendFileResultsRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

int DescribeSendFileResultsRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeSendFileResultsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

