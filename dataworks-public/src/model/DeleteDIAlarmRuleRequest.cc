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

#include <alibabacloud/dataworks-public/model/DeleteDIAlarmRuleRequest.h>

using AlibabaCloud::Dataworks_public::Model::DeleteDIAlarmRuleRequest;

DeleteDIAlarmRuleRequest::DeleteDIAlarmRuleRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "DeleteDIAlarmRule") {
  setMethod(HttpRequest::Method::Post);
}

DeleteDIAlarmRuleRequest::~DeleteDIAlarmRuleRequest() {}

long DeleteDIAlarmRuleRequest::getDIAlarmRuleId() const {
  return dIAlarmRuleId_;
}

void DeleteDIAlarmRuleRequest::setDIAlarmRuleId(long dIAlarmRuleId) {
  dIAlarmRuleId_ = dIAlarmRuleId;
  setBodyParameter(std::string("DIAlarmRuleId"), std::to_string(dIAlarmRuleId));
}

