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

#include <alibabacloud/ecs/model/DescribeSecurityGroupAttributeRequest.h>

using AlibabaCloud::Ecs::Model::DescribeSecurityGroupAttributeRequest;

DescribeSecurityGroupAttributeRequest::DescribeSecurityGroupAttributeRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeSecurityGroupAttribute") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSecurityGroupAttributeRequest::~DescribeSecurityGroupAttributeRequest() {}

std::string DescribeSecurityGroupAttributeRequest::getNicType() const {
  return nicType_;
}

void DescribeSecurityGroupAttributeRequest::setNicType(const std::string &nicType) {
  nicType_ = nicType;
  setParameter(std::string("NicType"), nicType);
}

long DescribeSecurityGroupAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeSecurityGroupAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeSecurityGroupAttributeRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void DescribeSecurityGroupAttributeRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

std::string DescribeSecurityGroupAttributeRequest::getRegionId() const {
  return regionId_;
}

void DescribeSecurityGroupAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeSecurityGroupAttributeRequest::getNextToken() const {
  return nextToken_;
}

void DescribeSecurityGroupAttributeRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string DescribeSecurityGroupAttributeRequest::getDirection() const {
  return direction_;
}

void DescribeSecurityGroupAttributeRequest::setDirection(const std::string &direction) {
  direction_ = direction;
  setParameter(std::string("Direction"), direction);
}

std::string DescribeSecurityGroupAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeSecurityGroupAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeSecurityGroupAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeSecurityGroupAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeSecurityGroupAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeSecurityGroupAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int DescribeSecurityGroupAttributeRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeSecurityGroupAttributeRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

