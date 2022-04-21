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

#include <alibabacloud/outboundbot/model/AssignJobsRequest.h>

using AlibabaCloud::OutboundBot::Model::AssignJobsRequest;

AssignJobsRequest::AssignJobsRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "AssignJobs") {
  setMethod(HttpRequest::Method::Post);
}

AssignJobsRequest::~AssignJobsRequest() {}

std::vector<std::string> AssignJobsRequest::getJobsJson() const {
  return jobsJson_;
}

void AssignJobsRequest::setJobsJson(const std::vector<std::string> &jobsJson) {
  jobsJson_ = jobsJson;
}

std::vector<std::string> AssignJobsRequest::getCallingNumber() const {
  return callingNumber_;
}

void AssignJobsRequest::setCallingNumber(const std::vector<std::string> &callingNumber) {
  callingNumber_ = callingNumber;
}

std::string AssignJobsRequest::getInstanceId() const {
  return instanceId_;
}

void AssignJobsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string AssignJobsRequest::getRosterType() const {
  return rosterType_;
}

void AssignJobsRequest::setRosterType(const std::string &rosterType) {
  rosterType_ = rosterType;
  setParameter(std::string("RosterType"), rosterType);
}

std::string AssignJobsRequest::getJobDataParsingTaskId() const {
  return jobDataParsingTaskId_;
}

void AssignJobsRequest::setJobDataParsingTaskId(const std::string &jobDataParsingTaskId) {
  jobDataParsingTaskId_ = jobDataParsingTaskId;
  setParameter(std::string("JobDataParsingTaskId"), jobDataParsingTaskId);
}

std::string AssignJobsRequest::getStrategyJson() const {
  return strategyJson_;
}

void AssignJobsRequest::setStrategyJson(const std::string &strategyJson) {
  strategyJson_ = strategyJson;
  setParameter(std::string("StrategyJson"), strategyJson);
}

std::string AssignJobsRequest::getJobGroupId() const {
  return jobGroupId_;
}

void AssignJobsRequest::setJobGroupId(const std::string &jobGroupId) {
  jobGroupId_ = jobGroupId;
  setParameter(std::string("JobGroupId"), jobGroupId);
}

bool AssignJobsRequest::getIsAsynchrony() const {
  return isAsynchrony_;
}

void AssignJobsRequest::setIsAsynchrony(bool isAsynchrony) {
  isAsynchrony_ = isAsynchrony;
  setParameter(std::string("IsAsynchrony"), isAsynchrony ? "true" : "false");
}

