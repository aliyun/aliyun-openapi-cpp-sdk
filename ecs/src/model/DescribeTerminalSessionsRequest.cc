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

#include <alibabacloud/ecs/model/DescribeTerminalSessionsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeTerminalSessionsRequest;

DescribeTerminalSessionsRequest::DescribeTerminalSessionsRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeTerminalSessions") {
  setMethod(HttpRequest::Method::Post);
}

DescribeTerminalSessionsRequest::~DescribeTerminalSessionsRequest() {}

long DescribeTerminalSessionsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeTerminalSessionsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeTerminalSessionsRequest::getSessionId() const {
  return sessionId_;
}

void DescribeTerminalSessionsRequest::setSessionId(const std::string &sessionId) {
  sessionId_ = sessionId;
  setParameter(std::string("SessionId"), sessionId);
}

std::string DescribeTerminalSessionsRequest::getRegionId() const {
  return regionId_;
}

void DescribeTerminalSessionsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeTerminalSessionsRequest::getNextToken() const {
  return nextToken_;
}

void DescribeTerminalSessionsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string DescribeTerminalSessionsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeTerminalSessionsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeTerminalSessionsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeTerminalSessionsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeTerminalSessionsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeTerminalSessionsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeTerminalSessionsRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeTerminalSessionsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int DescribeTerminalSessionsRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeTerminalSessionsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

