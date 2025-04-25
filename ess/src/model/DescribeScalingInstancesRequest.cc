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

#include <alibabacloud/ess/model/DescribeScalingInstancesRequest.h>

using AlibabaCloud::Ess::Model::DescribeScalingInstancesRequest;

DescribeScalingInstancesRequest::DescribeScalingInstancesRequest()
    : RpcServiceRequest("ess", "2014-08-28", "DescribeScalingInstances") {
  setMethod(HttpRequest::Method::Post);
}

DescribeScalingInstancesRequest::~DescribeScalingInstancesRequest() {}

long DescribeScalingInstancesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeScalingInstancesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeScalingInstancesRequest::getScalingGroupId() const {
  return scalingGroupId_;
}

void DescribeScalingInstancesRequest::setScalingGroupId(const std::string &scalingGroupId) {
  scalingGroupId_ = scalingGroupId;
  setParameter(std::string("ScalingGroupId"), scalingGroupId);
}

std::string DescribeScalingInstancesRequest::getLifecycleState() const {
  return lifecycleState_;
}

void DescribeScalingInstancesRequest::setLifecycleState(const std::string &lifecycleState) {
  lifecycleState_ = lifecycleState;
  setParameter(std::string("LifecycleState"), lifecycleState);
}

std::string DescribeScalingInstancesRequest::getCreationType() const {
  return creationType_;
}

void DescribeScalingInstancesRequest::setCreationType(const std::string &creationType) {
  creationType_ = creationType;
  setParameter(std::string("CreationType"), creationType);
}

int DescribeScalingInstancesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeScalingInstancesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeScalingInstancesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeScalingInstancesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeScalingInstancesRequest::getRegionId() const {
  return regionId_;
}

void DescribeScalingInstancesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeScalingInstancesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeScalingInstancesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeScalingInstancesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeScalingInstancesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeScalingInstancesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeScalingInstancesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeScalingInstancesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeScalingInstancesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeScalingInstancesRequest::getScalingActivityId() const {
  return scalingActivityId_;
}

void DescribeScalingInstancesRequest::setScalingActivityId(const std::string &scalingActivityId) {
  scalingActivityId_ = scalingActivityId;
  setParameter(std::string("ScalingActivityId"), scalingActivityId);
}

std::vector<std::string> DescribeScalingInstancesRequest::getCreationTypes() const {
  return creationTypes_;
}

void DescribeScalingInstancesRequest::setCreationTypes(const std::vector<std::string> &creationTypes) {
  creationTypes_ = creationTypes;
}

std::string DescribeScalingInstancesRequest::getScalingConfigurationId() const {
  return scalingConfigurationId_;
}

void DescribeScalingInstancesRequest::setScalingConfigurationId(const std::string &scalingConfigurationId) {
  scalingConfigurationId_ = scalingConfigurationId;
  setParameter(std::string("ScalingConfigurationId"), scalingConfigurationId);
}

std::vector<std::string> DescribeScalingInstancesRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeScalingInstancesRequest::setInstanceId(const std::vector<std::string> &instanceId) {
  instanceId_ = instanceId;
}

std::string DescribeScalingInstancesRequest::getHealthStatus() const {
  return healthStatus_;
}

void DescribeScalingInstancesRequest::setHealthStatus(const std::string &healthStatus) {
  healthStatus_ = healthStatus;
  setParameter(std::string("HealthStatus"), healthStatus);
}

std::vector<std::string> DescribeScalingInstancesRequest::getLifecycleStates() const {
  return lifecycleStates_;
}

void DescribeScalingInstancesRequest::setLifecycleStates(const std::vector<std::string> &lifecycleStates) {
  lifecycleStates_ = lifecycleStates;
}

