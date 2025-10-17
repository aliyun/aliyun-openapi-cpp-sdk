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

#include <alibabacloud/polardb/model/DescribeDBClusterEndpointsZonalRequest.h>

using AlibabaCloud::Polardb::Model::DescribeDBClusterEndpointsZonalRequest;

DescribeDBClusterEndpointsZonalRequest::DescribeDBClusterEndpointsZonalRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeDBClusterEndpointsZonal") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBClusterEndpointsZonalRequest::~DescribeDBClusterEndpointsZonalRequest() {}

long DescribeDBClusterEndpointsZonalRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDBClusterEndpointsZonalRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDBClusterEndpointsZonalRequest::getDBEndpointId() const {
  return dBEndpointId_;
}

void DescribeDBClusterEndpointsZonalRequest::setDBEndpointId(const std::string &dBEndpointId) {
  dBEndpointId_ = dBEndpointId;
  setParameter(std::string("DBEndpointId"), dBEndpointId);
}

std::string DescribeDBClusterEndpointsZonalRequest::getDescribeType() const {
  return describeType_;
}

void DescribeDBClusterEndpointsZonalRequest::setDescribeType(const std::string &describeType) {
  describeType_ = describeType;
  setParameter(std::string("DescribeType"), describeType);
}

std::string DescribeDBClusterEndpointsZonalRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBClusterEndpointsZonalRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBClusterEndpointsZonalRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDBClusterEndpointsZonalRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeDBClusterEndpointsZonalRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeDBClusterEndpointsZonalRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeDBClusterEndpointsZonalRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeDBClusterEndpointsZonalRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeDBClusterEndpointsZonalRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDBClusterEndpointsZonalRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

