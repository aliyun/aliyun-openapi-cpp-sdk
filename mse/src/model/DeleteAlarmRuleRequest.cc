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

#include <alibabacloud/mse/model/DeleteAlarmRuleRequest.h>

using AlibabaCloud::Mse::Model::DeleteAlarmRuleRequest;

DeleteAlarmRuleRequest::DeleteAlarmRuleRequest()
    : RpcServiceRequest("mse", "2019-05-31", "DeleteAlarmRule") {
  setMethod(HttpRequest::Method::Post);
}

DeleteAlarmRuleRequest::~DeleteAlarmRuleRequest() {}

std::string DeleteAlarmRuleRequest::getAlarmRuleId() const {
  return alarmRuleId_;
}

void DeleteAlarmRuleRequest::setAlarmRuleId(const std::string &alarmRuleId) {
  alarmRuleId_ = alarmRuleId;
  setParameter(std::string("AlarmRuleId"), alarmRuleId);
}

std::string DeleteAlarmRuleRequest::getRequestPars() const {
  return requestPars_;
}

void DeleteAlarmRuleRequest::setRequestPars(const std::string &requestPars) {
  requestPars_ = requestPars;
  setParameter(std::string("RequestPars"), requestPars);
}

std::string DeleteAlarmRuleRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void DeleteAlarmRuleRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

