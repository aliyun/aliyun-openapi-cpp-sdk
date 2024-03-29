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

#include <alibabacloud/r-kvstore/model/DescribeEncryptionKeyRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeEncryptionKeyRequest;

DescribeEncryptionKeyRequest::DescribeEncryptionKeyRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeEncryptionKey") {
  setMethod(HttpRequest::Method::Post);
}

DescribeEncryptionKeyRequest::~DescribeEncryptionKeyRequest() {}

long DescribeEncryptionKeyRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeEncryptionKeyRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeEncryptionKeyRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeEncryptionKeyRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeEncryptionKeyRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeEncryptionKeyRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeEncryptionKeyRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeEncryptionKeyRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeEncryptionKeyRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeEncryptionKeyRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeEncryptionKeyRequest::getEncryptionKey() const {
  return encryptionKey_;
}

void DescribeEncryptionKeyRequest::setEncryptionKey(const std::string &encryptionKey) {
  encryptionKey_ = encryptionKey;
  setParameter(std::string("EncryptionKey"), encryptionKey);
}

long DescribeEncryptionKeyRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeEncryptionKeyRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeEncryptionKeyRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeEncryptionKeyRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

