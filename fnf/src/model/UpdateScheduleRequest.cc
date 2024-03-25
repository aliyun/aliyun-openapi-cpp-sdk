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

#include <alibabacloud/fnf/model/UpdateScheduleRequest.h>

using AlibabaCloud::Fnf::Model::UpdateScheduleRequest;

UpdateScheduleRequest::UpdateScheduleRequest()
    : RpcServiceRequest("fnf", "2019-03-15", "UpdateSchedule") {
  setMethod(HttpRequest::Method::Post);
}

UpdateScheduleRequest::~UpdateScheduleRequest() {}

std::string UpdateScheduleRequest::getCronExpression() const {
  return cronExpression_;
}

void UpdateScheduleRequest::setCronExpression(const std::string &cronExpression) {
  cronExpression_ = cronExpression;
  setBodyParameter(std::string("CronExpression"), cronExpression);
}

std::string UpdateScheduleRequest::getDescription() const {
  return description_;
}

void UpdateScheduleRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string UpdateScheduleRequest::getScheduleName() const {
  return scheduleName_;
}

void UpdateScheduleRequest::setScheduleName(const std::string &scheduleName) {
  scheduleName_ = scheduleName;
  setBodyParameter(std::string("ScheduleName"), scheduleName);
}

std::string UpdateScheduleRequest::getPayload() const {
  return payload_;
}

void UpdateScheduleRequest::setPayload(const std::string &payload) {
  payload_ = payload;
  setBodyParameter(std::string("Payload"), payload);
}

bool UpdateScheduleRequest::getEnable() const {
  return enable_;
}

void UpdateScheduleRequest::setEnable(bool enable) {
  enable_ = enable;
  setBodyParameter(std::string("Enable"), enable ? "true" : "false");
}

std::string UpdateScheduleRequest::getFlowName() const {
  return flowName_;
}

void UpdateScheduleRequest::setFlowName(const std::string &flowName) {
  flowName_ = flowName;
  setBodyParameter(std::string("FlowName"), flowName);
}

