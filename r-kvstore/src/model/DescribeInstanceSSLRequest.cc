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

#include <alibabacloud/r-kvstore/model/DescribeInstanceSSLRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeInstanceSSLRequest;

DescribeInstanceSSLRequest::DescribeInstanceSSLRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeInstanceSSL") {
  setMethod(HttpRequest::Method::Post);
}

DescribeInstanceSSLRequest::~DescribeInstanceSSLRequest() {}

long DescribeInstanceSSLRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeInstanceSSLRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeInstanceSSLRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeInstanceSSLRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeInstanceSSLRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeInstanceSSLRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeInstanceSSLRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeInstanceSSLRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeInstanceSSLRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeInstanceSSLRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeInstanceSSLRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeInstanceSSLRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeInstanceSSLRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeInstanceSSLRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

