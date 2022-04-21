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

#include <alibabacloud/outboundbot/model/QueryJobsRequest.h>

using AlibabaCloud::OutboundBot::Model::QueryJobsRequest;

QueryJobsRequest::QueryJobsRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "QueryJobs") {
  setMethod(HttpRequest::Method::Post);
}

QueryJobsRequest::~QueryJobsRequest() {}

std::string QueryJobsRequest::getTimeAlignment() const {
  return timeAlignment_;
}

void QueryJobsRequest::setTimeAlignment(const std::string &timeAlignment) {
  timeAlignment_ = timeAlignment;
  setParameter(std::string("TimeAlignment"), timeAlignment);
}

std::string QueryJobsRequest::getPhoneNumber() const {
  return phoneNumber_;
}

void QueryJobsRequest::setPhoneNumber(const std::string &phoneNumber) {
  phoneNumber_ = phoneNumber;
  setParameter(std::string("PhoneNumber"), phoneNumber);
}

long QueryJobsRequest::getEndTime() const {
  return endTime_;
}

void QueryJobsRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long QueryJobsRequest::getStartTime() const {
  return startTime_;
}

void QueryJobsRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

int QueryJobsRequest::getPageNumber() const {
  return pageNumber_;
}

void QueryJobsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string QueryJobsRequest::getContactName() const {
  return contactName_;
}

void QueryJobsRequest::setContactName(const std::string &contactName) {
  contactName_ = contactName;
  setParameter(std::string("ContactName"), contactName);
}

std::string QueryJobsRequest::getInstanceId() const {
  return instanceId_;
}

void QueryJobsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string QueryJobsRequest::getJobGroupId() const {
  return jobGroupId_;
}

void QueryJobsRequest::setJobGroupId(const std::string &jobGroupId) {
  jobGroupId_ = jobGroupId;
  setParameter(std::string("JobGroupId"), jobGroupId);
}

int QueryJobsRequest::getPageSize() const {
  return pageSize_;
}

void QueryJobsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string QueryJobsRequest::getScenarioId() const {
  return scenarioId_;
}

void QueryJobsRequest::setScenarioId(const std::string &scenarioId) {
  scenarioId_ = scenarioId;
  setParameter(std::string("ScenarioId"), scenarioId);
}

