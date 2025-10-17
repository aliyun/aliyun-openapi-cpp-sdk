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

#include <alibabacloud/polardb/model/DescribeDBClusterVersionZonalRequest.h>

using AlibabaCloud::Polardb::Model::DescribeDBClusterVersionZonalRequest;

DescribeDBClusterVersionZonalRequest::DescribeDBClusterVersionZonalRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeDBClusterVersionZonal") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBClusterVersionZonalRequest::~DescribeDBClusterVersionZonalRequest() {}

long DescribeDBClusterVersionZonalRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDBClusterVersionZonalRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDBClusterVersionZonalRequest::getDescribeType() const {
  return describeType_;
}

void DescribeDBClusterVersionZonalRequest::setDescribeType(const std::string &describeType) {
  describeType_ = describeType;
  setParameter(std::string("DescribeType"), describeType);
}

std::string DescribeDBClusterVersionZonalRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBClusterVersionZonalRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBClusterVersionZonalRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDBClusterVersionZonalRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeDBClusterVersionZonalRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeDBClusterVersionZonalRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeDBClusterVersionZonalRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeDBClusterVersionZonalRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeDBClusterVersionZonalRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDBClusterVersionZonalRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

