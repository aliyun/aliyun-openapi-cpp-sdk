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

#include <alibabacloud/rds/model/DescribeCurrentModifyOrderRequest.h>

using AlibabaCloud::Rds::Model::DescribeCurrentModifyOrderRequest;

DescribeCurrentModifyOrderRequest::DescribeCurrentModifyOrderRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeCurrentModifyOrder") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCurrentModifyOrderRequest::~DescribeCurrentModifyOrderRequest() {}

long DescribeCurrentModifyOrderRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeCurrentModifyOrderRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeCurrentModifyOrderRequest::getClientToken() const {
  return clientToken_;
}

void DescribeCurrentModifyOrderRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DescribeCurrentModifyOrderRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeCurrentModifyOrderRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeCurrentModifyOrderRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeCurrentModifyOrderRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeCurrentModifyOrderRequest::getRegionId() const {
  return regionId_;
}

void DescribeCurrentModifyOrderRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeCurrentModifyOrderRequest::getDbInstanceId() const {
  return dbInstanceId_;
}

void DescribeCurrentModifyOrderRequest::setDbInstanceId(const std::string &dbInstanceId) {
  dbInstanceId_ = dbInstanceId;
  setParameter(std::string("DbInstanceId"), dbInstanceId);
}

std::string DescribeCurrentModifyOrderRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeCurrentModifyOrderRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long DescribeCurrentModifyOrderRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeCurrentModifyOrderRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

