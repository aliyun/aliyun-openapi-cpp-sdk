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

#include <alibabacloud/polardb/model/DescribeDBClusterParametersRequest.h>

using AlibabaCloud::Polardb::Model::DescribeDBClusterParametersRequest;

DescribeDBClusterParametersRequest::DescribeDBClusterParametersRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeDBClusterParameters") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBClusterParametersRequest::~DescribeDBClusterParametersRequest() {}

long DescribeDBClusterParametersRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDBClusterParametersRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDBClusterParametersRequest::getDescribeType() const {
  return describeType_;
}

void DescribeDBClusterParametersRequest::setDescribeType(const std::string &describeType) {
  describeType_ = describeType;
  setParameter(std::string("DescribeType"), describeType);
}

std::string DescribeDBClusterParametersRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBClusterParametersRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBClusterParametersRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDBClusterParametersRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeDBClusterParametersRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeDBClusterParametersRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeDBClusterParametersRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeDBClusterParametersRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeDBClusterParametersRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDBClusterParametersRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

