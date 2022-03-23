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

#include <alibabacloud/r-kvstore/model/DescribeEngineVersionRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeEngineVersionRequest;

DescribeEngineVersionRequest::DescribeEngineVersionRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeEngineVersion") {
  setMethod(HttpRequest::Method::Post);
}

DescribeEngineVersionRequest::~DescribeEngineVersionRequest() {}

long DescribeEngineVersionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeEngineVersionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeEngineVersionRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeEngineVersionRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeEngineVersionRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeEngineVersionRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeEngineVersionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeEngineVersionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeEngineVersionRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeEngineVersionRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeEngineVersionRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeEngineVersionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeEngineVersionRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeEngineVersionRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeEngineVersionRequest::getParameters() const {
  return parameters_;
}

void DescribeEngineVersionRequest::setParameters(const std::string &parameters) {
  parameters_ = parameters;
  setParameter(std::string("Parameters"), parameters);
}

