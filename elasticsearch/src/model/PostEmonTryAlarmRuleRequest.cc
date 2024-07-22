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

#include <alibabacloud/elasticsearch/model/PostEmonTryAlarmRuleRequest.h>

using AlibabaCloud::Elasticsearch::Model::PostEmonTryAlarmRuleRequest;

PostEmonTryAlarmRuleRequest::PostEmonTryAlarmRuleRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/emon/projects/[ProjectId]/alarm-groups/[AlarmGroupId]/alarm-rules/_test"};
  setMethod(HttpRequest::Method::Post);
}

PostEmonTryAlarmRuleRequest::~PostEmonTryAlarmRuleRequest() {}

std::string PostEmonTryAlarmRuleRequest::getAlarmGroupId() const {
  return alarmGroupId_;
}

void PostEmonTryAlarmRuleRequest::setAlarmGroupId(const std::string &alarmGroupId) {
  alarmGroupId_ = alarmGroupId;
  setParameter(std::string("AlarmGroupId"), alarmGroupId);
}

std::string PostEmonTryAlarmRuleRequest::getBody() const {
  return body_;
}

void PostEmonTryAlarmRuleRequest::setBody(const std::string &body) {
  body_ = body;
  setBodyParameter(std::string("body"), body);
}

std::string PostEmonTryAlarmRuleRequest::getProjectId() const {
  return projectId_;
}

void PostEmonTryAlarmRuleRequest::setProjectId(const std::string &projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), projectId);
}

