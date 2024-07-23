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

#include <alibabacloud/rds/model/DescribeDBInstanceProxyConfigurationRequest.h>

using AlibabaCloud::Rds::Model::DescribeDBInstanceProxyConfigurationRequest;

DescribeDBInstanceProxyConfigurationRequest::DescribeDBInstanceProxyConfigurationRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeDBInstanceProxyConfiguration") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBInstanceProxyConfigurationRequest::~DescribeDBInstanceProxyConfigurationRequest() {}

long DescribeDBInstanceProxyConfigurationRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDBInstanceProxyConfigurationRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDBInstanceProxyConfigurationRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDBInstanceProxyConfigurationRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long DescribeDBInstanceProxyConfigurationRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDBInstanceProxyConfigurationRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeDBInstanceProxyConfigurationRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBInstanceProxyConfigurationRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBInstanceProxyConfigurationRequest::getRegionId() const {
  return regionId_;
}

void DescribeDBInstanceProxyConfigurationRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDBInstanceProxyConfigurationRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeDBInstanceProxyConfigurationRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

