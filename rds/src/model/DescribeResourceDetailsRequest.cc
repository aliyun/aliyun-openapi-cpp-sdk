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

#include <alibabacloud/rds/model/DescribeResourceDetailsRequest.h>

using AlibabaCloud::Rds::Model::DescribeResourceDetailsRequest;

DescribeResourceDetailsRequest::DescribeResourceDetailsRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeResourceDetails") {
  setMethod(HttpRequest::Method::Post);
}

DescribeResourceDetailsRequest::~DescribeResourceDetailsRequest() {}

long DescribeResourceDetailsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeResourceDetailsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeResourceDetailsRequest::getClientToken() const {
  return clientToken_;
}

void DescribeResourceDetailsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DescribeResourceDetailsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeResourceDetailsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeResourceDetailsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeResourceDetailsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeResourceDetailsRequest::getRegionId() const {
  return regionId_;
}

void DescribeResourceDetailsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeResourceDetailsRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeResourceDetailsRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeResourceDetailsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeResourceDetailsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long DescribeResourceDetailsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeResourceDetailsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

