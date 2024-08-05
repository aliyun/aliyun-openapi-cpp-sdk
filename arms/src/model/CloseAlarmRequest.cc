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

#include <alibabacloud/arms/model/CloseAlarmRequest.h>

using AlibabaCloud::ARMS::Model::CloseAlarmRequest;

CloseAlarmRequest::CloseAlarmRequest()
    : RpcServiceRequest("arms", "2019-08-08", "CloseAlarm") {
  setMethod(HttpRequest::Method::Post);
}

CloseAlarmRequest::~CloseAlarmRequest() {}

std::string CloseAlarmRequest::getProxyUserId() const {
  return proxyUserId_;
}

void CloseAlarmRequest::setProxyUserId(const std::string &proxyUserId) {
  proxyUserId_ = proxyUserId;
  setParameter(std::string("ProxyUserId"), proxyUserId);
}

std::string CloseAlarmRequest::getSolution() const {
  return solution_;
}

void CloseAlarmRequest::setSolution(const std::string &solution) {
  solution_ = solution;
  setParameter(std::string("Solution"), solution);
}

std::string CloseAlarmRequest::getRegionId() const {
  return regionId_;
}

void CloseAlarmRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long CloseAlarmRequest::getHandlerId() const {
  return handlerId_;
}

void CloseAlarmRequest::setHandlerId(long handlerId) {
  handlerId_ = handlerId;
  setParameter(std::string("HandlerId"), std::to_string(handlerId));
}

long CloseAlarmRequest::getAlarmId() const {
  return alarmId_;
}

void CloseAlarmRequest::setAlarmId(long alarmId) {
  alarmId_ = alarmId;
  setParameter(std::string("AlarmId"), std::to_string(alarmId));
}

