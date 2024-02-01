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

#include <alibabacloud/ecs/model/DescribeCloudAssistantStatusRequest.h>

using AlibabaCloud::Ecs::Model::DescribeCloudAssistantStatusRequest;

DescribeCloudAssistantStatusRequest::DescribeCloudAssistantStatusRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeCloudAssistantStatus") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCloudAssistantStatusRequest::~DescribeCloudAssistantStatusRequest() {}

long DescribeCloudAssistantStatusRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeCloudAssistantStatusRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

long DescribeCloudAssistantStatusRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeCloudAssistantStatusRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeCloudAssistantStatusRequest::getRegionId() const {
  return regionId_;
}

void DescribeCloudAssistantStatusRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeCloudAssistantStatusRequest::getNextToken() const {
  return nextToken_;
}

void DescribeCloudAssistantStatusRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

long DescribeCloudAssistantStatusRequest::getPageSize() const {
  return pageSize_;
}

void DescribeCloudAssistantStatusRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeCloudAssistantStatusRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeCloudAssistantStatusRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeCloudAssistantStatusRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeCloudAssistantStatusRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeCloudAssistantStatusRequest::getOSType() const {
  return oSType_;
}

void DescribeCloudAssistantStatusRequest::setOSType(const std::string &oSType) {
  oSType_ = oSType;
  setParameter(std::string("OSType"), oSType);
}

long DescribeCloudAssistantStatusRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeCloudAssistantStatusRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<std::string> DescribeCloudAssistantStatusRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeCloudAssistantStatusRequest::setInstanceId(const std::vector<std::string> &instanceId) {
  instanceId_ = instanceId;
}

int DescribeCloudAssistantStatusRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeCloudAssistantStatusRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

