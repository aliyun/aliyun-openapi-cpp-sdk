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

#include <alibabacloud/dataworks-public/model/GetDIAlarmRuleRequest.h>

using AlibabaCloud::Dataworks_public::Model::GetDIAlarmRuleRequest;

GetDIAlarmRuleRequest::GetDIAlarmRuleRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "GetDIAlarmRule") {
  setMethod(HttpRequest::Method::Post);
}

GetDIAlarmRuleRequest::~GetDIAlarmRuleRequest() {}

long GetDIAlarmRuleRequest::getDIAlarmRuleId() const {
  return dIAlarmRuleId_;
}

void GetDIAlarmRuleRequest::setDIAlarmRuleId(long dIAlarmRuleId) {
  dIAlarmRuleId_ = dIAlarmRuleId;
  setBodyParameter(std::string("DIAlarmRuleId"), std::to_string(dIAlarmRuleId));
}

