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

#include <alibabacloud/dds/model/DescribeDBInstanceEncryptionKeyRequest.h>

using AlibabaCloud::Dds::Model::DescribeDBInstanceEncryptionKeyRequest;

DescribeDBInstanceEncryptionKeyRequest::DescribeDBInstanceEncryptionKeyRequest()
    : RpcServiceRequest("dds", "2015-12-01", "DescribeDBInstanceEncryptionKey") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBInstanceEncryptionKeyRequest::~DescribeDBInstanceEncryptionKeyRequest() {}

long DescribeDBInstanceEncryptionKeyRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDBInstanceEncryptionKeyRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDBInstanceEncryptionKeyRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBInstanceEncryptionKeyRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBInstanceEncryptionKeyRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeDBInstanceEncryptionKeyRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeDBInstanceEncryptionKeyRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDBInstanceEncryptionKeyRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeDBInstanceEncryptionKeyRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeDBInstanceEncryptionKeyRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeDBInstanceEncryptionKeyRequest::getEncryptionKey() const {
  return encryptionKey_;
}

void DescribeDBInstanceEncryptionKeyRequest::setEncryptionKey(const std::string &encryptionKey) {
  encryptionKey_ = encryptionKey;
  setParameter(std::string("EncryptionKey"), encryptionKey);
}

long DescribeDBInstanceEncryptionKeyRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDBInstanceEncryptionKeyRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

