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

#include <alibabacloud/outboundbot/model/AssignJobsAsyncRequest.h>

using AlibabaCloud::OutboundBot::Model::AssignJobsAsyncRequest;

AssignJobsAsyncRequest::AssignJobsAsyncRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "AssignJobsAsync") {
  setMethod(HttpRequest::Method::Post);
}

AssignJobsAsyncRequest::~AssignJobsAsyncRequest() {}

std::vector<AssignJobsAsyncRequest::std::string> AssignJobsAsyncRequest::getJobsJson() const {
  return jobsJson_;
}

void AssignJobsAsyncRequest::setJobsJson(const std::vector<AssignJobsAsyncRequest::std::string> &jobsJson) {
  jobsJson_ = jobsJson;
  for(int dep1 = 0; dep1 != jobsJson.size(); dep1++) {
    setBodyParameter(std::string("JobsJson") + "." + std::to_string(dep1 + 1), jobsJson[dep1]);
  }
}

std::vector<AssignJobsAsyncRequest::std::string> AssignJobsAsyncRequest::getCallingNumber() const {
  return callingNumber_;
}

void AssignJobsAsyncRequest::setCallingNumber(const std::vector<AssignJobsAsyncRequest::std::string> &callingNumber) {
  callingNumber_ = callingNumber;
  for(int dep1 = 0; dep1 != callingNumber.size(); dep1++) {
    setBodyParameter(std::string("CallingNumber") + "." + std::to_string(dep1 + 1), callingNumber[dep1]);
  }
}

std::string AssignJobsAsyncRequest::getInstanceId() const {
  return instanceId_;
}

void AssignJobsAsyncRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string AssignJobsAsyncRequest::getStrategyJson() const {
  return strategyJson_;
}

void AssignJobsAsyncRequest::setStrategyJson(const std::string &strategyJson) {
  strategyJson_ = strategyJson;
  setBodyParameter(std::string("StrategyJson"), strategyJson);
}

std::string AssignJobsAsyncRequest::getJobGroupId() const {
  return jobGroupId_;
}

void AssignJobsAsyncRequest::setJobGroupId(const std::string &jobGroupId) {
  jobGroupId_ = jobGroupId;
  setBodyParameter(std::string("JobGroupId"), jobGroupId);
}

