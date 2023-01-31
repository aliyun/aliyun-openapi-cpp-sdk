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

#include <alibabacloud/vpc/model/DescribeTagKeysRequest.h>

using AlibabaCloud::Vpc::Model::DescribeTagKeysRequest;

DescribeTagKeysRequest::DescribeTagKeysRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DescribeTagKeys") {
  setMethod(HttpRequest::Method::Post);
}

DescribeTagKeysRequest::~DescribeTagKeysRequest() {}

long DescribeTagKeysRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeTagKeysRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeTagKeysRequest::getRegionId() const {
  return regionId_;
}

void DescribeTagKeysRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeTagKeysRequest::getNextToken() const {
  return nextToken_;
}

void DescribeTagKeysRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string DescribeTagKeysRequest::getKeyword() const {
  return keyword_;
}

void DescribeTagKeysRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

std::vector<std::string> DescribeTagKeysRequest::getResourceId() const {
  return resourceId_;
}

void DescribeTagKeysRequest::setResourceId(const std::vector<std::string> &resourceId) {
  resourceId_ = resourceId;
}

std::string DescribeTagKeysRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeTagKeysRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeTagKeysRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeTagKeysRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeTagKeysRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeTagKeysRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeTagKeysRequest::getResourceType() const {
  return resourceType_;
}

void DescribeTagKeysRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

int DescribeTagKeysRequest::getMaxResult() const {
  return maxResult_;
}

void DescribeTagKeysRequest::setMaxResult(int maxResult) {
  maxResult_ = maxResult;
  setParameter(std::string("MaxResult"), std::to_string(maxResult));
}

