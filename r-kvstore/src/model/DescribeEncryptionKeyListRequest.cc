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

#include <alibabacloud/r-kvstore/model/DescribeEncryptionKeyListRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeEncryptionKeyListRequest;

DescribeEncryptionKeyListRequest::DescribeEncryptionKeyListRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeEncryptionKeyList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeEncryptionKeyListRequest::~DescribeEncryptionKeyListRequest() {}

long DescribeEncryptionKeyListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeEncryptionKeyListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeEncryptionKeyListRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeEncryptionKeyListRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeEncryptionKeyListRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeEncryptionKeyListRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeEncryptionKeyListRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeEncryptionKeyListRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeEncryptionKeyListRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeEncryptionKeyListRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeEncryptionKeyListRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeEncryptionKeyListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeEncryptionKeyListRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeEncryptionKeyListRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

