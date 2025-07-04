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

#include <alibabacloud/rds/model/DescribeComputeBurstConfigRequest.h>

using AlibabaCloud::Rds::Model::DescribeComputeBurstConfigRequest;

DescribeComputeBurstConfigRequest::DescribeComputeBurstConfigRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeComputeBurstConfig") {
  setMethod(HttpRequest::Method::Post);
}

DescribeComputeBurstConfigRequest::~DescribeComputeBurstConfigRequest() {}

std::string DescribeComputeBurstConfigRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeComputeBurstConfigRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeComputeBurstConfigRequest::getClientToken() const {
  return clientToken_;
}

void DescribeComputeBurstConfigRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DescribeComputeBurstConfigRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeComputeBurstConfigRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeComputeBurstConfigRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeComputeBurstConfigRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeComputeBurstConfigRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeComputeBurstConfigRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeComputeBurstConfigRequest::getRegionId() const {
  return regionId_;
}

void DescribeComputeBurstConfigRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeComputeBurstConfigRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeComputeBurstConfigRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

