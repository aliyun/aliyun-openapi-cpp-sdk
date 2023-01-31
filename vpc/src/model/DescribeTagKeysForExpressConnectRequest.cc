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

#include <alibabacloud/vpc/model/DescribeTagKeysForExpressConnectRequest.h>

using AlibabaCloud::Vpc::Model::DescribeTagKeysForExpressConnectRequest;

DescribeTagKeysForExpressConnectRequest::DescribeTagKeysForExpressConnectRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DescribeTagKeysForExpressConnect") {
  setMethod(HttpRequest::Method::Post);
}

DescribeTagKeysForExpressConnectRequest::~DescribeTagKeysForExpressConnectRequest() {}

long DescribeTagKeysForExpressConnectRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeTagKeysForExpressConnectRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeTagKeysForExpressConnectRequest::getRegionId() const {
  return regionId_;
}

void DescribeTagKeysForExpressConnectRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeTagKeysForExpressConnectRequest::getNextToken() const {
  return nextToken_;
}

void DescribeTagKeysForExpressConnectRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string DescribeTagKeysForExpressConnectRequest::getKeyword() const {
  return keyword_;
}

void DescribeTagKeysForExpressConnectRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

std::vector<std::string> DescribeTagKeysForExpressConnectRequest::getResourceId() const {
  return resourceId_;
}

void DescribeTagKeysForExpressConnectRequest::setResourceId(const std::vector<std::string> &resourceId) {
  resourceId_ = resourceId;
}

std::string DescribeTagKeysForExpressConnectRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeTagKeysForExpressConnectRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeTagKeysForExpressConnectRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeTagKeysForExpressConnectRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeTagKeysForExpressConnectRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeTagKeysForExpressConnectRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeTagKeysForExpressConnectRequest::getResourceType() const {
  return resourceType_;
}

void DescribeTagKeysForExpressConnectRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

int DescribeTagKeysForExpressConnectRequest::getMaxResult() const {
  return maxResult_;
}

void DescribeTagKeysForExpressConnectRequest::setMaxResult(int maxResult) {
  maxResult_ = maxResult;
  setParameter(std::string("MaxResult"), std::to_string(maxResult));
}

