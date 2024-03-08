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

#include <alibabacloud/dds/model/DescribeUserEncryptionKeyListRequest.h>

using AlibabaCloud::Dds::Model::DescribeUserEncryptionKeyListRequest;

DescribeUserEncryptionKeyListRequest::DescribeUserEncryptionKeyListRequest()
    : RpcServiceRequest("dds", "2015-12-01", "DescribeUserEncryptionKeyList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeUserEncryptionKeyListRequest::~DescribeUserEncryptionKeyListRequest() {}

long DescribeUserEncryptionKeyListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeUserEncryptionKeyListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeUserEncryptionKeyListRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeUserEncryptionKeyListRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeUserEncryptionKeyListRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeUserEncryptionKeyListRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeUserEncryptionKeyListRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeUserEncryptionKeyListRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeUserEncryptionKeyListRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeUserEncryptionKeyListRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeUserEncryptionKeyListRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeUserEncryptionKeyListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeUserEncryptionKeyListRequest::getTargetRegionId() const {
  return targetRegionId_;
}

void DescribeUserEncryptionKeyListRequest::setTargetRegionId(const std::string &targetRegionId) {
  targetRegionId_ = targetRegionId;
  setParameter(std::string("TargetRegionId"), targetRegionId);
}

