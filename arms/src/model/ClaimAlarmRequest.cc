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

#include <alibabacloud/arms/model/ClaimAlarmRequest.h>

using AlibabaCloud::ARMS::Model::ClaimAlarmRequest;

ClaimAlarmRequest::ClaimAlarmRequest()
    : RpcServiceRequest("arms", "2019-08-08", "ClaimAlarm") {
  setMethod(HttpRequest::Method::Post);
}

ClaimAlarmRequest::~ClaimAlarmRequest() {}

std::string ClaimAlarmRequest::getProxyUserId() const {
  return proxyUserId_;
}

void ClaimAlarmRequest::setProxyUserId(const std::string &proxyUserId) {
  proxyUserId_ = proxyUserId;
  setParameter(std::string("ProxyUserId"), proxyUserId);
}

std::string ClaimAlarmRequest::getRegionId() const {
  return regionId_;
}

void ClaimAlarmRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long ClaimAlarmRequest::getHandlerId() const {
  return handlerId_;
}

void ClaimAlarmRequest::setHandlerId(long handlerId) {
  handlerId_ = handlerId;
  setParameter(std::string("HandlerId"), std::to_string(handlerId));
}

long ClaimAlarmRequest::getAlarmId() const {
  return alarmId_;
}

void ClaimAlarmRequest::setAlarmId(long alarmId) {
  alarmId_ = alarmId;
  setParameter(std::string("AlarmId"), std::to_string(alarmId));
}

