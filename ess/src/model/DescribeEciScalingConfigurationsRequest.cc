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

#include <alibabacloud/ess/model/DescribeEciScalingConfigurationsRequest.h>

using AlibabaCloud::Ess::Model::DescribeEciScalingConfigurationsRequest;

DescribeEciScalingConfigurationsRequest::DescribeEciScalingConfigurationsRequest()
    : RpcServiceRequest("ess", "2014-08-28", "DescribeEciScalingConfigurations") {
  setMethod(HttpRequest::Method::Post);
}

DescribeEciScalingConfigurationsRequest::~DescribeEciScalingConfigurationsRequest() {}

long DescribeEciScalingConfigurationsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeEciScalingConfigurationsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeEciScalingConfigurationsRequest::getScalingGroupId() const {
  return scalingGroupId_;
}

void DescribeEciScalingConfigurationsRequest::setScalingGroupId(const std::string &scalingGroupId) {
  scalingGroupId_ = scalingGroupId;
  setParameter(std::string("ScalingGroupId"), scalingGroupId);
}

int DescribeEciScalingConfigurationsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeEciScalingConfigurationsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeEciScalingConfigurationsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeEciScalingConfigurationsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeEciScalingConfigurationsRequest::getRegionId() const {
  return regionId_;
}

void DescribeEciScalingConfigurationsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeEciScalingConfigurationsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeEciScalingConfigurationsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeEciScalingConfigurationsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeEciScalingConfigurationsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeEciScalingConfigurationsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeEciScalingConfigurationsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeEciScalingConfigurationsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeEciScalingConfigurationsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<std::string> DescribeEciScalingConfigurationsRequest::getScalingConfigurationName() const {
  return scalingConfigurationName_;
}

void DescribeEciScalingConfigurationsRequest::setScalingConfigurationName(const std::vector<std::string> &scalingConfigurationName) {
  scalingConfigurationName_ = scalingConfigurationName;
}

std::vector<std::string> DescribeEciScalingConfigurationsRequest::getScalingConfigurationId() const {
  return scalingConfigurationId_;
}

void DescribeEciScalingConfigurationsRequest::setScalingConfigurationId(const std::vector<std::string> &scalingConfigurationId) {
  scalingConfigurationId_ = scalingConfigurationId;
}

