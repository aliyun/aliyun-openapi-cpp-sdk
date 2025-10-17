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

#include <alibabacloud/polardb/model/DescribeExtensionsRequest.h>

using AlibabaCloud::Polardb::Model::DescribeExtensionsRequest;

DescribeExtensionsRequest::DescribeExtensionsRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeExtensions") {
  setMethod(HttpRequest::Method::Post);
}

DescribeExtensionsRequest::~DescribeExtensionsRequest() {}

long DescribeExtensionsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeExtensionsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeExtensionsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeExtensionsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeExtensionsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeExtensionsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeExtensionsRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeExtensionsRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeExtensionsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeExtensionsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeExtensionsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeExtensionsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeExtensionsRequest::getDBName() const {
  return dBName_;
}

void DescribeExtensionsRequest::setDBName(const std::string &dBName) {
  dBName_ = dBName;
  setParameter(std::string("DBName"), dBName);
}

