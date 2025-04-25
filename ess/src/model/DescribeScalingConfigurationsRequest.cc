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

#include <alibabacloud/ess/model/DescribeScalingConfigurationsRequest.h>

using AlibabaCloud::Ess::Model::DescribeScalingConfigurationsRequest;

DescribeScalingConfigurationsRequest::DescribeScalingConfigurationsRequest()
    : RpcServiceRequest("ess", "2014-08-28", "DescribeScalingConfigurations") {
  setMethod(HttpRequest::Method::Post);
}

DescribeScalingConfigurationsRequest::~DescribeScalingConfigurationsRequest() {}

long DescribeScalingConfigurationsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeScalingConfigurationsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeScalingConfigurationsRequest::getScalingGroupId() const {
  return scalingGroupId_;
}

void DescribeScalingConfigurationsRequest::setScalingGroupId(const std::string &scalingGroupId) {
  scalingGroupId_ = scalingGroupId;
  setParameter(std::string("ScalingGroupId"), scalingGroupId);
}

int DescribeScalingConfigurationsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeScalingConfigurationsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeScalingConfigurationsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeScalingConfigurationsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeScalingConfigurationsRequest::getRegionId() const {
  return regionId_;
}

void DescribeScalingConfigurationsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeScalingConfigurationsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeScalingConfigurationsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeScalingConfigurationsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeScalingConfigurationsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeScalingConfigurationsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeScalingConfigurationsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeScalingConfigurationsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeScalingConfigurationsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<std::string> DescribeScalingConfigurationsRequest::getScalingConfigurationName() const {
  return scalingConfigurationName_;
}

void DescribeScalingConfigurationsRequest::setScalingConfigurationName(const std::vector<std::string> &scalingConfigurationName) {
  scalingConfigurationName_ = scalingConfigurationName;
}

std::vector<std::string> DescribeScalingConfigurationsRequest::getScalingConfigurationId() const {
  return scalingConfigurationId_;
}

void DescribeScalingConfigurationsRequest::setScalingConfigurationId(const std::vector<std::string> &scalingConfigurationId) {
  scalingConfigurationId_ = scalingConfigurationId;
}

