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

#include <alibabacloud/bssopenapi/model/QueryResellerUserAlarmThresholdRequest.h>

using AlibabaCloud::BssOpenApi::Model::QueryResellerUserAlarmThresholdRequest;

QueryResellerUserAlarmThresholdRequest::QueryResellerUserAlarmThresholdRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "QueryResellerUserAlarmThreshold") {
  setMethod(HttpRequest::Method::Post);
}

QueryResellerUserAlarmThresholdRequest::~QueryResellerUserAlarmThresholdRequest() {}

std::string QueryResellerUserAlarmThresholdRequest::getAlarmType() const {
  return alarmType_;
}

void QueryResellerUserAlarmThresholdRequest::setAlarmType(const std::string &alarmType) {
  alarmType_ = alarmType;
  setParameter(std::string("AlarmType"), alarmType);
}

long QueryResellerUserAlarmThresholdRequest::getOwnerId() const {
  return ownerId_;
}

void QueryResellerUserAlarmThresholdRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

