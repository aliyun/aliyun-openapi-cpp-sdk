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

#include <alibabacloud/polardb/model/DescribeDBClusterProxyRequest.h>

using AlibabaCloud::Polardb::Model::DescribeDBClusterProxyRequest;

DescribeDBClusterProxyRequest::DescribeDBClusterProxyRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeDBClusterProxy") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBClusterProxyRequest::~DescribeDBClusterProxyRequest() {}

long DescribeDBClusterProxyRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDBClusterProxyRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDBClusterProxyRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBClusterProxyRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBClusterProxyRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeDBClusterProxyRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeDBClusterProxyRequest::getRegionId() const {
  return regionId_;
}

void DescribeDBClusterProxyRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDBClusterProxyRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDBClusterProxyRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeDBClusterProxyRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeDBClusterProxyRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeDBClusterProxyRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeDBClusterProxyRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeDBClusterProxyRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDBClusterProxyRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

