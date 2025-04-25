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

#include <alibabacloud/ess/model/DescribeNotificationConfigurationsRequest.h>

using AlibabaCloud::Ess::Model::DescribeNotificationConfigurationsRequest;

DescribeNotificationConfigurationsRequest::DescribeNotificationConfigurationsRequest()
    : RpcServiceRequest("ess", "2014-08-28", "DescribeNotificationConfigurations") {
  setMethod(HttpRequest::Method::Post);
}

DescribeNotificationConfigurationsRequest::~DescribeNotificationConfigurationsRequest() {}

std::string DescribeNotificationConfigurationsRequest::getScalingGroupId() const {
  return scalingGroupId_;
}

void DescribeNotificationConfigurationsRequest::setScalingGroupId(const std::string &scalingGroupId) {
  scalingGroupId_ = scalingGroupId;
  setParameter(std::string("ScalingGroupId"), scalingGroupId);
}

std::string DescribeNotificationConfigurationsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeNotificationConfigurationsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeNotificationConfigurationsRequest::getRegionId() const {
  return regionId_;
}

void DescribeNotificationConfigurationsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeNotificationConfigurationsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeNotificationConfigurationsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long DescribeNotificationConfigurationsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeNotificationConfigurationsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

