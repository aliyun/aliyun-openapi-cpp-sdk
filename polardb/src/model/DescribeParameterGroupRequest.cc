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

#include <alibabacloud/polardb/model/DescribeParameterGroupRequest.h>

using AlibabaCloud::Polardb::Model::DescribeParameterGroupRequest;

DescribeParameterGroupRequest::DescribeParameterGroupRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeParameterGroup") {
  setMethod(HttpRequest::Method::Post);
}

DescribeParameterGroupRequest::~DescribeParameterGroupRequest() {}

long DescribeParameterGroupRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeParameterGroupRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeParameterGroupRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeParameterGroupRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeParameterGroupRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeParameterGroupRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeParameterGroupRequest::getParameterGroupId() const {
  return parameterGroupId_;
}

void DescribeParameterGroupRequest::setParameterGroupId(const std::string &parameterGroupId) {
  parameterGroupId_ = parameterGroupId;
  setParameter(std::string("ParameterGroupId"), parameterGroupId);
}

std::string DescribeParameterGroupRequest::getRegionId() const {
  return regionId_;
}

void DescribeParameterGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeParameterGroupRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeParameterGroupRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeParameterGroupRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeParameterGroupRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeParameterGroupRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeParameterGroupRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeParameterGroupRequest::getDBType() const {
  return dBType_;
}

void DescribeParameterGroupRequest::setDBType(const std::string &dBType) {
  dBType_ = dBType;
  setParameter(std::string("DBType"), dBType);
}

