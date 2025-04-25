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

#include <alibabacloud/ess/model/CreateNotificationConfigurationRequest.h>

using AlibabaCloud::Ess::Model::CreateNotificationConfigurationRequest;

CreateNotificationConfigurationRequest::CreateNotificationConfigurationRequest()
    : RpcServiceRequest("ess", "2014-08-28", "CreateNotificationConfiguration") {
  setMethod(HttpRequest::Method::Post);
}

CreateNotificationConfigurationRequest::~CreateNotificationConfigurationRequest() {}

std::string CreateNotificationConfigurationRequest::getScalingGroupId() const {
  return scalingGroupId_;
}

void CreateNotificationConfigurationRequest::setScalingGroupId(const std::string &scalingGroupId) {
  scalingGroupId_ = scalingGroupId;
  setParameter(std::string("ScalingGroupId"), scalingGroupId);
}

std::string CreateNotificationConfigurationRequest::getTimeZone() const {
  return timeZone_;
}

void CreateNotificationConfigurationRequest::setTimeZone(const std::string &timeZone) {
  timeZone_ = timeZone;
  setParameter(std::string("TimeZone"), timeZone);
}

std::string CreateNotificationConfigurationRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateNotificationConfigurationRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateNotificationConfigurationRequest::getRegionId() const {
  return regionId_;
}

void CreateNotificationConfigurationRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateNotificationConfigurationRequest::getNotificationArn() const {
  return notificationArn_;
}

void CreateNotificationConfigurationRequest::setNotificationArn(const std::string &notificationArn) {
  notificationArn_ = notificationArn;
  setParameter(std::string("NotificationArn"), notificationArn);
}

std::string CreateNotificationConfigurationRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateNotificationConfigurationRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long CreateNotificationConfigurationRequest::getOwnerId() const {
  return ownerId_;
}

void CreateNotificationConfigurationRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<std::string> CreateNotificationConfigurationRequest::getNotificationType() const {
  return notificationType_;
}

void CreateNotificationConfigurationRequest::setNotificationType(const std::vector<std::string> &notificationType) {
  notificationType_ = notificationType;
}

