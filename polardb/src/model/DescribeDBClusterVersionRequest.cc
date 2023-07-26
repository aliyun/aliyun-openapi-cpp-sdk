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

#include <alibabacloud/polardb/model/DescribeDBClusterVersionRequest.h>

using AlibabaCloud::Polardb::Model::DescribeDBClusterVersionRequest;

DescribeDBClusterVersionRequest::DescribeDBClusterVersionRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeDBClusterVersion") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBClusterVersionRequest::~DescribeDBClusterVersionRequest() {}

long DescribeDBClusterVersionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDBClusterVersionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDBClusterVersionRequest::getDescribeType() const {
  return describeType_;
}

void DescribeDBClusterVersionRequest::setDescribeType(const std::string &describeType) {
  describeType_ = describeType;
  setParameter(std::string("DescribeType"), describeType);
}

std::string DescribeDBClusterVersionRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBClusterVersionRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBClusterVersionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDBClusterVersionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeDBClusterVersionRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeDBClusterVersionRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeDBClusterVersionRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeDBClusterVersionRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeDBClusterVersionRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDBClusterVersionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

