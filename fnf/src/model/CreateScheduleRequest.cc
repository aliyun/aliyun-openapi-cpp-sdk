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

#include <alibabacloud/fnf/model/CreateScheduleRequest.h>

using AlibabaCloud::Fnf::Model::CreateScheduleRequest;

CreateScheduleRequest::CreateScheduleRequest()
    : RpcServiceRequest("fnf", "2019-03-15", "CreateSchedule") {
  setMethod(HttpRequest::Method::Post);
}

CreateScheduleRequest::~CreateScheduleRequest() {}

std::string CreateScheduleRequest::getCronExpression() const {
  return cronExpression_;
}

void CreateScheduleRequest::setCronExpression(const std::string &cronExpression) {
  cronExpression_ = cronExpression;
  setBodyParameter(std::string("CronExpression"), cronExpression);
}

std::string CreateScheduleRequest::getDescription() const {
  return description_;
}

void CreateScheduleRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string CreateScheduleRequest::getScheduleName() const {
  return scheduleName_;
}

void CreateScheduleRequest::setScheduleName(const std::string &scheduleName) {
  scheduleName_ = scheduleName;
  setBodyParameter(std::string("ScheduleName"), scheduleName);
}

std::string CreateScheduleRequest::getSignatureVersion() const {
  return signatureVersion_;
}

void CreateScheduleRequest::setSignatureVersion(const std::string &signatureVersion) {
  signatureVersion_ = signatureVersion;
  setParameter(std::string("SignatureVersion"), signatureVersion);
}

std::string CreateScheduleRequest::getPayload() const {
  return payload_;
}

void CreateScheduleRequest::setPayload(const std::string &payload) {
  payload_ = payload;
  setBodyParameter(std::string("Payload"), payload);
}

bool CreateScheduleRequest::getEnable() const {
  return enable_;
}

void CreateScheduleRequest::setEnable(bool enable) {
  enable_ = enable;
  setBodyParameter(std::string("Enable"), enable ? "true" : "false");
}

std::string CreateScheduleRequest::getFlowName() const {
  return flowName_;
}

void CreateScheduleRequest::setFlowName(const std::string &flowName) {
  flowName_ = flowName;
  setBodyParameter(std::string("FlowName"), flowName);
}

