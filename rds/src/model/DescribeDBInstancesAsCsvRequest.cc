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

#include <alibabacloud/rds/model/DescribeDBInstancesAsCsvRequest.h>

using AlibabaCloud::Rds::Model::DescribeDBInstancesAsCsvRequest;

DescribeDBInstancesAsCsvRequest::DescribeDBInstancesAsCsvRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeDBInstancesAsCsv") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBInstancesAsCsvRequest::~DescribeDBInstancesAsCsvRequest() {}

long DescribeDBInstancesAsCsvRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDBInstancesAsCsvRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDBInstancesAsCsvRequest::getExportKey() const {
  return exportKey_;
}

void DescribeDBInstancesAsCsvRequest::setExportKey(const std::string &exportKey) {
  exportKey_ = exportKey;
  setParameter(std::string("ExportKey"), exportKey);
}

std::string DescribeDBInstancesAsCsvRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBInstancesAsCsvRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBInstancesAsCsvRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeDBInstancesAsCsvRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeDBInstancesAsCsvRequest::getRegionId() const {
  return regionId_;
}

void DescribeDBInstancesAsCsvRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDBInstancesAsCsvRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeDBInstancesAsCsvRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeDBInstancesAsCsvRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDBInstancesAsCsvRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

bool DescribeDBInstancesAsCsvRequest::getCachedAsync() const {
  return cachedAsync_;
}

void DescribeDBInstancesAsCsvRequest::setCachedAsync(bool cachedAsync) {
  cachedAsync_ = cachedAsync;
  setParameter(std::string("CachedAsync"), cachedAsync ? "true" : "false");
}

long DescribeDBInstancesAsCsvRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDBInstancesAsCsvRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

