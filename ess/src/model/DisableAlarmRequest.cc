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

#include <alibabacloud/ess/model/DisableAlarmRequest.h>

using AlibabaCloud::Ess::Model::DisableAlarmRequest;

DisableAlarmRequest::DisableAlarmRequest()
    : RpcServiceRequest("ess", "2014-08-28", "DisableAlarm") {
  setMethod(HttpRequest::Method::Post);
}

DisableAlarmRequest::~DisableAlarmRequest() {}

std::string DisableAlarmRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DisableAlarmRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DisableAlarmRequest::getRegionId() const {
  return regionId_;
}

void DisableAlarmRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DisableAlarmRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DisableAlarmRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long DisableAlarmRequest::getOwnerId() const {
  return ownerId_;
}

void DisableAlarmRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DisableAlarmRequest::getAlarmTaskId() const {
  return alarmTaskId_;
}

void DisableAlarmRequest::setAlarmTaskId(const std::string &alarmTaskId) {
  alarmTaskId_ = alarmTaskId;
  setParameter(std::string("AlarmTaskId"), alarmTaskId);
}

