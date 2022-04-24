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

#include <alibabacloud/bssopenapi/model/SetResellerUserAlarmThresholdRequest.h>

using AlibabaCloud::BssOpenApi::Model::SetResellerUserAlarmThresholdRequest;

SetResellerUserAlarmThresholdRequest::SetResellerUserAlarmThresholdRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "SetResellerUserAlarmThreshold") {
  setMethod(HttpRequest::Method::Post);
}

SetResellerUserAlarmThresholdRequest::~SetResellerUserAlarmThresholdRequest() {}

std::string SetResellerUserAlarmThresholdRequest::getAlarmType() const {
  return alarmType_;
}

void SetResellerUserAlarmThresholdRequest::setAlarmType(const std::string &alarmType) {
  alarmType_ = alarmType;
  setParameter(std::string("AlarmType"), alarmType);
}

std::string SetResellerUserAlarmThresholdRequest::getAlarmThresholds() const {
  return alarmThresholds_;
}

void SetResellerUserAlarmThresholdRequest::setAlarmThresholds(const std::string &alarmThresholds) {
  alarmThresholds_ = alarmThresholds;
  setParameter(std::string("AlarmThresholds"), alarmThresholds);
}

long SetResellerUserAlarmThresholdRequest::getOwnerId() const {
  return ownerId_;
}

void SetResellerUserAlarmThresholdRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

