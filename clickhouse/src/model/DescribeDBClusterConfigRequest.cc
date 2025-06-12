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

#include <alibabacloud/clickhouse/model/DescribeDBClusterConfigRequest.h>

using AlibabaCloud::Clickhouse::Model::DescribeDBClusterConfigRequest;

DescribeDBClusterConfigRequest::DescribeDBClusterConfigRequest()
    : RpcServiceRequest("clickhouse", "2019-11-11", "DescribeDBClusterConfig") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBClusterConfigRequest::~DescribeDBClusterConfigRequest() {}

long DescribeDBClusterConfigRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDBClusterConfigRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDBClusterConfigRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBClusterConfigRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBClusterConfigRequest::getRegionId() const {
  return regionId_;
}

void DescribeDBClusterConfigRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDBClusterConfigRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDBClusterConfigRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeDBClusterConfigRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeDBClusterConfigRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeDBClusterConfigRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeDBClusterConfigRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeDBClusterConfigRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDBClusterConfigRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

