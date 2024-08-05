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

#include <alibabacloud/arms/model/BlockAlarmNotificationRequest.h>

using AlibabaCloud::ARMS::Model::BlockAlarmNotificationRequest;

BlockAlarmNotificationRequest::BlockAlarmNotificationRequest()
    : RpcServiceRequest("arms", "2019-08-08", "BlockAlarmNotification") {
  setMethod(HttpRequest::Method::Post);
}

BlockAlarmNotificationRequest::~BlockAlarmNotificationRequest() {}

std::string BlockAlarmNotificationRequest::getProxyUserId() const {
  return proxyUserId_;
}

void BlockAlarmNotificationRequest::setProxyUserId(const std::string &proxyUserId) {
  proxyUserId_ = proxyUserId;
  setParameter(std::string("ProxyUserId"), proxyUserId);
}

long BlockAlarmNotificationRequest::getTimeout() const {
  return timeout_;
}

void BlockAlarmNotificationRequest::setTimeout(long timeout) {
  timeout_ = timeout;
  setParameter(std::string("Timeout"), std::to_string(timeout));
}

std::string BlockAlarmNotificationRequest::getRegionId() const {
  return regionId_;
}

void BlockAlarmNotificationRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long BlockAlarmNotificationRequest::getHandlerId() const {
  return handlerId_;
}

void BlockAlarmNotificationRequest::setHandlerId(long handlerId) {
  handlerId_ = handlerId;
  setParameter(std::string("HandlerId"), std::to_string(handlerId));
}

long BlockAlarmNotificationRequest::getAlarmId() const {
  return alarmId_;
}

void BlockAlarmNotificationRequest::setAlarmId(long alarmId) {
  alarmId_ = alarmId;
  setParameter(std::string("AlarmId"), std::to_string(alarmId));
}

