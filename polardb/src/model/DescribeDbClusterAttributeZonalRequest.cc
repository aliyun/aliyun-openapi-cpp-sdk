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

#include <alibabacloud/polardb/model/DescribeDbClusterAttributeZonalRequest.h>

using AlibabaCloud::Polardb::Model::DescribeDbClusterAttributeZonalRequest;

DescribeDbClusterAttributeZonalRequest::DescribeDbClusterAttributeZonalRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeDbClusterAttributeZonal") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDbClusterAttributeZonalRequest::~DescribeDbClusterAttributeZonalRequest() {}

long DescribeDbClusterAttributeZonalRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDbClusterAttributeZonalRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDbClusterAttributeZonalRequest::getDescribeType() const {
  return describeType_;
}

void DescribeDbClusterAttributeZonalRequest::setDescribeType(const std::string &describeType) {
  describeType_ = describeType;
  setParameter(std::string("DescribeType"), describeType);
}

std::string DescribeDbClusterAttributeZonalRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDbClusterAttributeZonalRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDbClusterAttributeZonalRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDbClusterAttributeZonalRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeDbClusterAttributeZonalRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeDbClusterAttributeZonalRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeDbClusterAttributeZonalRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeDbClusterAttributeZonalRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeDbClusterAttributeZonalRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDbClusterAttributeZonalRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

