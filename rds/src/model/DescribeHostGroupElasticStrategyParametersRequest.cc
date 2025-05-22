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

#include <alibabacloud/rds/model/DescribeHostGroupElasticStrategyParametersRequest.h>

using AlibabaCloud::Rds::Model::DescribeHostGroupElasticStrategyParametersRequest;

DescribeHostGroupElasticStrategyParametersRequest::DescribeHostGroupElasticStrategyParametersRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeHostGroupElasticStrategyParameters") {
  setMethod(HttpRequest::Method::Post);
}

DescribeHostGroupElasticStrategyParametersRequest::~DescribeHostGroupElasticStrategyParametersRequest() {}

long DescribeHostGroupElasticStrategyParametersRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeHostGroupElasticStrategyParametersRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeHostGroupElasticStrategyParametersRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeHostGroupElasticStrategyParametersRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeHostGroupElasticStrategyParametersRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeHostGroupElasticStrategyParametersRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeHostGroupElasticStrategyParametersRequest::getRegionId() const {
  return regionId_;
}

void DescribeHostGroupElasticStrategyParametersRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeHostGroupElasticStrategyParametersRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeHostGroupElasticStrategyParametersRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long DescribeHostGroupElasticStrategyParametersRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeHostGroupElasticStrategyParametersRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeHostGroupElasticStrategyParametersRequest::getDedicatedHostGroupName() const {
  return dedicatedHostGroupName_;
}

void DescribeHostGroupElasticStrategyParametersRequest::setDedicatedHostGroupName(const std::string &dedicatedHostGroupName) {
  dedicatedHostGroupName_ = dedicatedHostGroupName;
  setParameter(std::string("DedicatedHostGroupName"), dedicatedHostGroupName);
}

