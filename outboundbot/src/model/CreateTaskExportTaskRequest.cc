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

#include <alibabacloud/outboundbot/model/CreateTaskExportTaskRequest.h>

using AlibabaCloud::OutboundBot::Model::CreateTaskExportTaskRequest;

CreateTaskExportTaskRequest::CreateTaskExportTaskRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "CreateTaskExportTask") {
  setMethod(HttpRequest::Method::Get);
}

CreateTaskExportTaskRequest::~CreateTaskExportTaskRequest() {}

bool CreateTaskExportTaskRequest::getHasAnswered() const {
  return hasAnswered_;
}

void CreateTaskExportTaskRequest::setHasAnswered(bool hasAnswered) {
  hasAnswered_ = hasAnswered;
  setParameter(std::string("HasAnswered"), hasAnswered ? "true" : "false");
}

long CreateTaskExportTaskRequest::getActualTimeLte() const {
  return actualTimeLte_;
}

void CreateTaskExportTaskRequest::setActualTimeLte(long actualTimeLte) {
  actualTimeLte_ = actualTimeLte;
  setParameter(std::string("ActualTimeLte"), std::to_string(actualTimeLte));
}

std::string CreateTaskExportTaskRequest::getOtherId() const {
  return otherId_;
}

void CreateTaskExportTaskRequest::setOtherId(const std::string &otherId) {
  otherId_ = otherId;
  setParameter(std::string("OtherId"), otherId);
}

long CreateTaskExportTaskRequest::getTaskCreateTimeLte() const {
  return taskCreateTimeLte_;
}

void CreateTaskExportTaskRequest::setTaskCreateTimeLte(long taskCreateTimeLte) {
  taskCreateTimeLte_ = taskCreateTimeLte;
  setParameter(std::string("TaskCreateTimeLte"), std::to_string(taskCreateTimeLte));
}

std::string CreateTaskExportTaskRequest::getJobId() const {
  return jobId_;
}

void CreateTaskExportTaskRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

long CreateTaskExportTaskRequest::getTaskCreateTimeGte() const {
  return taskCreateTimeGte_;
}

void CreateTaskExportTaskRequest::setTaskCreateTimeGte(long taskCreateTimeGte) {
  taskCreateTimeGte_ = taskCreateTimeGte;
  setParameter(std::string("TaskCreateTimeGte"), std::to_string(taskCreateTimeGte));
}

std::string CreateTaskExportTaskRequest::getCalledNumber() const {
  return calledNumber_;
}

void CreateTaskExportTaskRequest::setCalledNumber(const std::string &calledNumber) {
  calledNumber_ = calledNumber;
  setParameter(std::string("CalledNumber"), calledNumber);
}

std::string CreateTaskExportTaskRequest::getUserIdMatch() const {
  return userIdMatch_;
}

void CreateTaskExportTaskRequest::setUserIdMatch(const std::string &userIdMatch) {
  userIdMatch_ = userIdMatch;
  setParameter(std::string("UserIdMatch"), userIdMatch);
}

int CreateTaskExportTaskRequest::getPageSize() const {
  return pageSize_;
}

void CreateTaskExportTaskRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string CreateTaskExportTaskRequest::getScriptNameQuery() const {
  return scriptNameQuery_;
}

void CreateTaskExportTaskRequest::setScriptNameQuery(const std::string &scriptNameQuery) {
  scriptNameQuery_ = scriptNameQuery;
  setParameter(std::string("ScriptNameQuery"), scriptNameQuery);
}

int CreateTaskExportTaskRequest::getPageIndex() const {
  return pageIndex_;
}

void CreateTaskExportTaskRequest::setPageIndex(int pageIndex) {
  pageIndex_ = pageIndex;
  setParameter(std::string("PageIndex"), std::to_string(pageIndex));
}

std::string CreateTaskExportTaskRequest::getSortOrder() const {
  return sortOrder_;
}

void CreateTaskExportTaskRequest::setSortOrder(const std::string &sortOrder) {
  sortOrder_ = sortOrder;
  setParameter(std::string("SortOrder"), sortOrder);
}

std::string CreateTaskExportTaskRequest::getTaskStatusStringList() const {
  return taskStatusStringList_;
}

void CreateTaskExportTaskRequest::setTaskStatusStringList(const std::string &taskStatusStringList) {
  taskStatusStringList_ = taskStatusStringList;
  setParameter(std::string("TaskStatusStringList"), taskStatusStringList);
}

std::string CreateTaskExportTaskRequest::getJobGroupNameQuery() const {
  return jobGroupNameQuery_;
}

void CreateTaskExportTaskRequest::setJobGroupNameQuery(const std::string &jobGroupNameQuery) {
  jobGroupNameQuery_ = jobGroupNameQuery;
  setParameter(std::string("JobGroupNameQuery"), jobGroupNameQuery);
}

std::string CreateTaskExportTaskRequest::getTaskId() const {
  return taskId_;
}

void CreateTaskExportTaskRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

bool CreateTaskExportTaskRequest::getHasHangUpByRejection() const {
  return hasHangUpByRejection_;
}

void CreateTaskExportTaskRequest::setHasHangUpByRejection(bool hasHangUpByRejection) {
  hasHangUpByRejection_ = hasHangUpByRejection;
  setParameter(std::string("HasHangUpByRejection"), hasHangUpByRejection ? "true" : "false");
}

bool CreateTaskExportTaskRequest::getHasReachedEndOfFlow() const {
  return hasReachedEndOfFlow_;
}

void CreateTaskExportTaskRequest::setHasReachedEndOfFlow(bool hasReachedEndOfFlow) {
  hasReachedEndOfFlow_ = hasReachedEndOfFlow;
  setParameter(std::string("HasReachedEndOfFlow"), hasReachedEndOfFlow ? "true" : "false");
}

std::string CreateTaskExportTaskRequest::getInstanceId() const {
  return instanceId_;
}

void CreateTaskExportTaskRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

long CreateTaskExportTaskRequest::getRecordingDurationGte() const {
  return recordingDurationGte_;
}

void CreateTaskExportTaskRequest::setRecordingDurationGte(long recordingDurationGte) {
  recordingDurationGte_ = recordingDurationGte;
  setParameter(std::string("RecordingDurationGte"), std::to_string(recordingDurationGte));
}

long CreateTaskExportTaskRequest::getCallDurationLte() const {
  return callDurationLte_;
}

void CreateTaskExportTaskRequest::setCallDurationLte(long callDurationLte) {
  callDurationLte_ = callDurationLte;
  setParameter(std::string("CallDurationLte"), std::to_string(callDurationLte));
}

std::string CreateTaskExportTaskRequest::getJobGroupId() const {
  return jobGroupId_;
}

void CreateTaskExportTaskRequest::setJobGroupId(const std::string &jobGroupId) {
  jobGroupId_ = jobGroupId;
  setParameter(std::string("JobGroupId"), jobGroupId);
}

std::string CreateTaskExportTaskRequest::getSortBy() const {
  return sortBy_;
}

void CreateTaskExportTaskRequest::setSortBy(const std::string &sortBy) {
  sortBy_ = sortBy;
  setParameter(std::string("SortBy"), sortBy);
}

std::string CreateTaskExportTaskRequest::getJobStatusStringList() const {
  return jobStatusStringList_;
}

void CreateTaskExportTaskRequest::setJobStatusStringList(const std::string &jobStatusStringList) {
  jobStatusStringList_ = jobStatusStringList;
  setParameter(std::string("JobStatusStringList"), jobStatusStringList);
}

long CreateTaskExportTaskRequest::getActualTimeGte() const {
  return actualTimeGte_;
}

void CreateTaskExportTaskRequest::setActualTimeGte(long actualTimeGte) {
  actualTimeGte_ = actualTimeGte;
  setParameter(std::string("ActualTimeGte"), std::to_string(actualTimeGte));
}

long CreateTaskExportTaskRequest::getCallDurationGte() const {
  return callDurationGte_;
}

void CreateTaskExportTaskRequest::setCallDurationGte(long callDurationGte) {
  callDurationGte_ = callDurationGte;
  setParameter(std::string("CallDurationGte"), std::to_string(callDurationGte));
}

long CreateTaskExportTaskRequest::getRecordingDurationLte() const {
  return recordingDurationLte_;
}

void CreateTaskExportTaskRequest::setRecordingDurationLte(long recordingDurationLte) {
  recordingDurationLte_ = recordingDurationLte;
  setParameter(std::string("RecordingDurationLte"), std::to_string(recordingDurationLte));
}

