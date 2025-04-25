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

#include <alibabacloud/ess/model/DescribeScalingActivitiesRequest.h>

using AlibabaCloud::Ess::Model::DescribeScalingActivitiesRequest;

DescribeScalingActivitiesRequest::DescribeScalingActivitiesRequest()
    : RpcServiceRequest("ess", "2014-08-28", "DescribeScalingActivities") {
  setMethod(HttpRequest::Method::Post);
}

DescribeScalingActivitiesRequest::~DescribeScalingActivitiesRequest() {}

long DescribeScalingActivitiesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeScalingActivitiesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeScalingActivitiesRequest::getScalingGroupId() const {
  return scalingGroupId_;
}

void DescribeScalingActivitiesRequest::setScalingGroupId(const std::string &scalingGroupId) {
  scalingGroupId_ = scalingGroupId;
  setParameter(std::string("ScalingGroupId"), scalingGroupId);
}

std::string DescribeScalingActivitiesRequest::getInstanceRefreshTaskId() const {
  return instanceRefreshTaskId_;
}

void DescribeScalingActivitiesRequest::setInstanceRefreshTaskId(const std::string &instanceRefreshTaskId) {
  instanceRefreshTaskId_ = instanceRefreshTaskId;
  setParameter(std::string("InstanceRefreshTaskId"), instanceRefreshTaskId);
}

int DescribeScalingActivitiesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeScalingActivitiesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeScalingActivitiesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeScalingActivitiesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeScalingActivitiesRequest::getStatusCode() const {
  return statusCode_;
}

void DescribeScalingActivitiesRequest::setStatusCode(const std::string &statusCode) {
  statusCode_ = statusCode;
  setParameter(std::string("StatusCode"), statusCode);
}

std::string DescribeScalingActivitiesRequest::getRegionId() const {
  return regionId_;
}

void DescribeScalingActivitiesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeScalingActivitiesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeScalingActivitiesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeScalingActivitiesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeScalingActivitiesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeScalingActivitiesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeScalingActivitiesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeScalingActivitiesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeScalingActivitiesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<std::string> DescribeScalingActivitiesRequest::getScalingActivityId() const {
  return scalingActivityId_;
}

void DescribeScalingActivitiesRequest::setScalingActivityId(const std::vector<std::string> &scalingActivityId) {
  scalingActivityId_ = scalingActivityId;
}

