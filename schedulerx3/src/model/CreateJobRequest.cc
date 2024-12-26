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

#include <alibabacloud/schedulerx3/model/CreateJobRequest.h>

using AlibabaCloud::SchedulerX3::Model::CreateJobRequest;

CreateJobRequest::CreateJobRequest()
    : RpcServiceRequest("schedulerx3", "2024-06-24", "CreateJob") {
  setMethod(HttpRequest::Method::Post);
}

CreateJobRequest::~CreateJobRequest() {}

std::string CreateJobRequest::getMseSessionId() const {
  return mseSessionId_;
}

void CreateJobRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

int CreateJobRequest::getExecutorBlockStrategy() const {
  return executorBlockStrategy_;
}

void CreateJobRequest::setExecutorBlockStrategy(int executorBlockStrategy) {
  executorBlockStrategy_ = executorBlockStrategy;
  setBodyParameter(std::string("ExecutorBlockStrategy"), std::to_string(executorBlockStrategy));
}

std::string CreateJobRequest::getTimezone() const {
  return timezone_;
}

void CreateJobRequest::setTimezone(const std::string &timezone) {
  timezone_ = timezone;
  setBodyParameter(std::string("Timezone"), timezone);
}

int CreateJobRequest::getRouteStrategy() const {
  return routeStrategy_;
}

void CreateJobRequest::setRouteStrategy(int routeStrategy) {
  routeStrategy_ = routeStrategy;
  setBodyParameter(std::string("RouteStrategy"), std::to_string(routeStrategy));
}

std::string CreateJobRequest::getDescription() const {
  return description_;
}

void CreateJobRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

int CreateJobRequest::getAttemptInterval() const {
  return attemptInterval_;
}

void CreateJobRequest::setAttemptInterval(int attemptInterval) {
  attemptInterval_ = attemptInterval;
  setBodyParameter(std::string("AttemptInterval"), std::to_string(attemptInterval));
}

long CreateJobRequest::getStartTime() const {
  return startTime_;
}

void CreateJobRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setBodyParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string CreateJobRequest::getAppName() const {
  return appName_;
}

void CreateJobRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setBodyParameter(std::string("AppName"), appName);
}

std::vector<CreateJobRequest::NoticeContacts> CreateJobRequest::getNoticeContacts() const {
  return noticeContacts_;
}

void CreateJobRequest::setNoticeContacts(const std::vector<CreateJobRequest::NoticeContacts> &noticeContacts) {
  noticeContacts_ = noticeContacts;
  for(int dep1 = 0; dep1 != noticeContacts.size(); dep1++) {
    setBodyParameter(std::string("NoticeContacts") + "." + std::to_string(dep1 + 1) + ".ContactType", std::to_string(noticeContacts[dep1].contactType));
    setBodyParameter(std::string("NoticeContacts") + "." + std::to_string(dep1 + 1) + ".Name", noticeContacts[dep1].name);
  }
}

CreateJobRequest::NoticeConfig CreateJobRequest::getNoticeConfig() const {
  return noticeConfig_;
}

void CreateJobRequest::setNoticeConfig(const CreateJobRequest::NoticeConfig &noticeConfig) {
  noticeConfig_ = noticeConfig;
  setBodyParameter(std::string("NoticeConfig") + ".TimeoutKillEnable", noticeConfig.timeoutKillEnable ? "true" : "false");
  setBodyParameter(std::string("NoticeConfig") + ".FailEnable", noticeConfig.failEnable ? "true" : "false");
  setBodyParameter(std::string("NoticeConfig") + ".WebhookIsAtAll", noticeConfig.webhookIsAtAll ? "true" : "false");
  setBodyParameter(std::string("NoticeConfig") + ".SuccessNotice", noticeConfig.successNotice ? "true" : "false");
  setBodyParameter(std::string("NoticeConfig") + ".FailLimitTimes", std::to_string(noticeConfig.failLimitTimes));
  setBodyParameter(std::string("NoticeConfig") + ".SendChannel", noticeConfig.sendChannel);
  setBodyParameter(std::string("NoticeConfig") + ".NoticeChannel", noticeConfig.noticeChannel);
  setBodyParameter(std::string("NoticeConfig") + ".TimeoutEnable", noticeConfig.timeoutEnable ? "true" : "false");
  setBodyParameter(std::string("NoticeConfig") + ".MissWorkerEnable", noticeConfig.missWorkerEnable ? "true" : "false");
  setBodyParameter(std::string("NoticeConfig") + ".Timeout", std::to_string(noticeConfig.timeout));
}

std::string CreateJobRequest::getCalendar() const {
  return calendar_;
}

void CreateJobRequest::setCalendar(const std::string &calendar) {
  calendar_ = calendar;
  setBodyParameter(std::string("Calendar"), calendar);
}

int CreateJobRequest::getDataOffset() const {
  return dataOffset_;
}

void CreateJobRequest::setDataOffset(int dataOffset) {
  dataOffset_ = dataOffset;
  setBodyParameter(std::string("DataOffset"), std::to_string(dataOffset));
}

int CreateJobRequest::getMaxAttempt() const {
  return maxAttempt_;
}

void CreateJobRequest::setMaxAttempt(int maxAttempt) {
  maxAttempt_ = maxAttempt;
  setBodyParameter(std::string("MaxAttempt"), std::to_string(maxAttempt));
}

std::string CreateJobRequest::getClusterId() const {
  return clusterId_;
}

void CreateJobRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setBodyParameter(std::string("ClusterId"), clusterId);
}

int CreateJobRequest::getPriority() const {
  return priority_;
}

void CreateJobRequest::setPriority(int priority) {
  priority_ = priority;
  setBodyParameter(std::string("Priority"), std::to_string(priority));
}

std::string CreateJobRequest::getJobType() const {
  return jobType_;
}

void CreateJobRequest::setJobType(const std::string &jobType) {
  jobType_ = jobType;
  setBodyParameter(std::string("JobType"), jobType);
}

std::string CreateJobRequest::getTimeExpression() const {
  return timeExpression_;
}

void CreateJobRequest::setTimeExpression(const std::string &timeExpression) {
  timeExpression_ = timeExpression;
  setBodyParameter(std::string("TimeExpression"), timeExpression);
}

std::string CreateJobRequest::getName() const {
  return name_;
}

void CreateJobRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

std::string CreateJobRequest::getXAttrs() const {
  return xAttrs_;
}

void CreateJobRequest::setXAttrs(const std::string &xAttrs) {
  xAttrs_ = xAttrs;
  setBodyParameter(std::string("XAttrs"), xAttrs);
}

int CreateJobRequest::getMaxConcurrency() const {
  return maxConcurrency_;
}

void CreateJobRequest::setMaxConcurrency(int maxConcurrency) {
  maxConcurrency_ = maxConcurrency;
  setBodyParameter(std::string("MaxConcurrency"), std::to_string(maxConcurrency));
}

int CreateJobRequest::getTimeType() const {
  return timeType_;
}

void CreateJobRequest::setTimeType(int timeType) {
  timeType_ = timeType;
  setBodyParameter(std::string("TimeType"), std::to_string(timeType));
}

std::string CreateJobRequest::getParameters() const {
  return parameters_;
}

void CreateJobRequest::setParameters(const std::string &parameters) {
  parameters_ = parameters;
  setBodyParameter(std::string("Parameters"), parameters);
}

std::string CreateJobRequest::getJobHandler() const {
  return jobHandler_;
}

void CreateJobRequest::setJobHandler(const std::string &jobHandler) {
  jobHandler_ = jobHandler;
  setBodyParameter(std::string("JobHandler"), jobHandler);
}

std::string CreateJobRequest::getCleanMode() const {
  return cleanMode_;
}

void CreateJobRequest::setCleanMode(const std::string &cleanMode) {
  cleanMode_ = cleanMode;
  setBodyParameter(std::string("CleanMode"), cleanMode);
}

int CreateJobRequest::getStatus() const {
  return status_;
}

void CreateJobRequest::setStatus(int status) {
  status_ = status;
  setBodyParameter(std::string("Status"), std::to_string(status));
}

