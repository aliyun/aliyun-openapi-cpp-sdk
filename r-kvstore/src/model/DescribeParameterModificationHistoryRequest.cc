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

#include <alibabacloud/r-kvstore/model/DescribeParameterModificationHistoryRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeParameterModificationHistoryRequest;

DescribeParameterModificationHistoryRequest::DescribeParameterModificationHistoryRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeParameterModificationHistory") {
  setMethod(HttpRequest::Method::Post);
}

DescribeParameterModificationHistoryRequest::~DescribeParameterModificationHistoryRequest() {}

long DescribeParameterModificationHistoryRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeParameterModificationHistoryRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeParameterModificationHistoryRequest::getStartTime() const {
  return startTime_;
}

void DescribeParameterModificationHistoryRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeParameterModificationHistoryRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeParameterModificationHistoryRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeParameterModificationHistoryRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeParameterModificationHistoryRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeParameterModificationHistoryRequest::getParameterName() const {
  return parameterName_;
}

void DescribeParameterModificationHistoryRequest::setParameterName(const std::string &parameterName) {
  parameterName_ = parameterName;
  setParameter(std::string("ParameterName"), parameterName);
}

std::string DescribeParameterModificationHistoryRequest::getNodeId() const {
  return nodeId_;
}

void DescribeParameterModificationHistoryRequest::setNodeId(const std::string &nodeId) {
  nodeId_ = nodeId;
  setParameter(std::string("NodeId"), nodeId);
}

std::string DescribeParameterModificationHistoryRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeParameterModificationHistoryRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeParameterModificationHistoryRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeParameterModificationHistoryRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeParameterModificationHistoryRequest::getEndTime() const {
  return endTime_;
}

void DescribeParameterModificationHistoryRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeParameterModificationHistoryRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeParameterModificationHistoryRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeParameterModificationHistoryRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeParameterModificationHistoryRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

