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

#include <alibabacloud/outboundbot/model/SearchTaskRequest.h>

using AlibabaCloud::OutboundBot::Model::SearchTaskRequest;

SearchTaskRequest::SearchTaskRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "SearchTask") {
  setMethod(HttpRequest::Method::Get);
}

SearchTaskRequest::~SearchTaskRequest() {}

long SearchTaskRequest::getActualTimeLte() const {
  return actualTimeLte_;
}

void SearchTaskRequest::setActualTimeLte(long actualTimeLte) {
  actualTimeLte_ = actualTimeLte;
  setParameter(std::string("ActualTimeLte"), std::to_string(actualTimeLte));
}

std::string SearchTaskRequest::getOtherId() const {
  return otherId_;
}

void SearchTaskRequest::setOtherId(const std::string &otherId) {
  otherId_ = otherId;
  setParameter(std::string("OtherId"), otherId);
}

long SearchTaskRequest::getTaskCreateTimeLte() const {
  return taskCreateTimeLte_;
}

void SearchTaskRequest::setTaskCreateTimeLte(long taskCreateTimeLte) {
  taskCreateTimeLte_ = taskCreateTimeLte;
  setParameter(std::string("TaskCreateTimeLte"), std::to_string(taskCreateTimeLte));
}

std::string SearchTaskRequest::getJobId() const {
  return jobId_;
}

void SearchTaskRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

long SearchTaskRequest::getTaskCreateTimeGte() const {
  return taskCreateTimeGte_;
}

void SearchTaskRequest::setTaskCreateTimeGte(long taskCreateTimeGte) {
  taskCreateTimeGte_ = taskCreateTimeGte;
  setParameter(std::string("TaskCreateTimeGte"), std::to_string(taskCreateTimeGte));
}

std::string SearchTaskRequest::getCalledNumber() const {
  return calledNumber_;
}

void SearchTaskRequest::setCalledNumber(const std::string &calledNumber) {
  calledNumber_ = calledNumber;
  setParameter(std::string("CalledNumber"), calledNumber);
}

std::string SearchTaskRequest::getUserIdMatch() const {
  return userIdMatch_;
}

void SearchTaskRequest::setUserIdMatch(const std::string &userIdMatch) {
  userIdMatch_ = userIdMatch;
  setParameter(std::string("UserIdMatch"), userIdMatch);
}

int SearchTaskRequest::getPageSize() const {
  return pageSize_;
}

void SearchTaskRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string SearchTaskRequest::getScriptNameQuery() const {
  return scriptNameQuery_;
}

void SearchTaskRequest::setScriptNameQuery(const std::string &scriptNameQuery) {
  scriptNameQuery_ = scriptNameQuery;
  setParameter(std::string("ScriptNameQuery"), scriptNameQuery);
}

int SearchTaskRequest::getPageIndex() const {
  return pageIndex_;
}

void SearchTaskRequest::setPageIndex(int pageIndex) {
  pageIndex_ = pageIndex;
  setParameter(std::string("PageIndex"), std::to_string(pageIndex));
}

std::string SearchTaskRequest::getSortOrder() const {
  return sortOrder_;
}

void SearchTaskRequest::setSortOrder(const std::string &sortOrder) {
  sortOrder_ = sortOrder;
  setParameter(std::string("SortOrder"), sortOrder);
}

std::string SearchTaskRequest::getTaskStatusStringList() const {
  return taskStatusStringList_;
}

void SearchTaskRequest::setTaskStatusStringList(const std::string &taskStatusStringList) {
  taskStatusStringList_ = taskStatusStringList;
  setParameter(std::string("TaskStatusStringList"), taskStatusStringList);
}

std::string SearchTaskRequest::getJobGroupNameQuery() const {
  return jobGroupNameQuery_;
}

void SearchTaskRequest::setJobGroupNameQuery(const std::string &jobGroupNameQuery) {
  jobGroupNameQuery_ = jobGroupNameQuery;
  setParameter(std::string("JobGroupNameQuery"), jobGroupNameQuery);
}

std::string SearchTaskRequest::getTaskId() const {
  return taskId_;
}

void SearchTaskRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

std::string SearchTaskRequest::getInstanceId() const {
  return instanceId_;
}

void SearchTaskRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

long SearchTaskRequest::getRecordingDurationGte() const {
  return recordingDurationGte_;
}

void SearchTaskRequest::setRecordingDurationGte(long recordingDurationGte) {
  recordingDurationGte_ = recordingDurationGte;
  setParameter(std::string("RecordingDurationGte"), std::to_string(recordingDurationGte));
}

long SearchTaskRequest::getCallDurationLte() const {
  return callDurationLte_;
}

void SearchTaskRequest::setCallDurationLte(long callDurationLte) {
  callDurationLte_ = callDurationLte;
  setParameter(std::string("CallDurationLte"), std::to_string(callDurationLte));
}

std::string SearchTaskRequest::getJobGroupId() const {
  return jobGroupId_;
}

void SearchTaskRequest::setJobGroupId(const std::string &jobGroupId) {
  jobGroupId_ = jobGroupId;
  setParameter(std::string("JobGroupId"), jobGroupId);
}

std::string SearchTaskRequest::getSortBy() const {
  return sortBy_;
}

void SearchTaskRequest::setSortBy(const std::string &sortBy) {
  sortBy_ = sortBy;
  setParameter(std::string("SortBy"), sortBy);
}

std::string SearchTaskRequest::getJobStatusStringList() const {
  return jobStatusStringList_;
}

void SearchTaskRequest::setJobStatusStringList(const std::string &jobStatusStringList) {
  jobStatusStringList_ = jobStatusStringList;
  setParameter(std::string("JobStatusStringList"), jobStatusStringList);
}

long SearchTaskRequest::getActualTimeGte() const {
  return actualTimeGte_;
}

void SearchTaskRequest::setActualTimeGte(long actualTimeGte) {
  actualTimeGte_ = actualTimeGte;
  setParameter(std::string("ActualTimeGte"), std::to_string(actualTimeGte));
}

long SearchTaskRequest::getCallDurationGte() const {
  return callDurationGte_;
}

void SearchTaskRequest::setCallDurationGte(long callDurationGte) {
  callDurationGte_ = callDurationGte;
  setParameter(std::string("CallDurationGte"), std::to_string(callDurationGte));
}

long SearchTaskRequest::getRecordingDurationLte() const {
  return recordingDurationLte_;
}

void SearchTaskRequest::setRecordingDurationLte(long recordingDurationLte) {
  recordingDurationLte_ = recordingDurationLte;
  setParameter(std::string("RecordingDurationLte"), std::to_string(recordingDurationLte));
}

