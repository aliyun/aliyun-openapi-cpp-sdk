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

#include <alibabacloud/schedulerx3/model/UpdateJobRequest.h>

using AlibabaCloud::SchedulerX3::Model::UpdateJobRequest;

UpdateJobRequest::UpdateJobRequest()
    : RpcServiceRequest("schedulerx3", "2024-06-24", "UpdateJob") {
  setMethod(HttpRequest::Method::Post);
}

UpdateJobRequest::~UpdateJobRequest() {}

std::string UpdateJobRequest::getMseSessionId() const {
  return mseSessionId_;
}

void UpdateJobRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

int UpdateJobRequest::getExecutorBlockStrategy() const {
  return executorBlockStrategy_;
}

void UpdateJobRequest::setExecutorBlockStrategy(int executorBlockStrategy) {
  executorBlockStrategy_ = executorBlockStrategy;
  setBodyParameter(std::string("ExecutorBlockStrategy"), std::to_string(executorBlockStrategy));
}

std::string UpdateJobRequest::getTimezone() const {
  return timezone_;
}

void UpdateJobRequest::setTimezone(const std::string &timezone) {
  timezone_ = timezone;
  setBodyParameter(std::string("Timezone"), timezone);
}

int UpdateJobRequest::getRouteStrategy() const {
  return routeStrategy_;
}

void UpdateJobRequest::setRouteStrategy(int routeStrategy) {
  routeStrategy_ = routeStrategy;
  setBodyParameter(std::string("RouteStrategy"), std::to_string(routeStrategy));
}

std::string UpdateJobRequest::getDescription() const {
  return description_;
}

void UpdateJobRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

int UpdateJobRequest::getAttemptInterval() const {
  return attemptInterval_;
}

void UpdateJobRequest::setAttemptInterval(int attemptInterval) {
  attemptInterval_ = attemptInterval;
  setBodyParameter(std::string("AttemptInterval"), std::to_string(attemptInterval));
}

long UpdateJobRequest::getStartTime() const {
  return startTime_;
}

void UpdateJobRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setBodyParameter(std::string("StartTime"), std::to_string(startTime));
}

long UpdateJobRequest::getJobId() const {
  return jobId_;
}

void UpdateJobRequest::setJobId(long jobId) {
  jobId_ = jobId;
  setBodyParameter(std::string("JobId"), std::to_string(jobId));
}

std::string UpdateJobRequest::getAppName() const {
  return appName_;
}

void UpdateJobRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setBodyParameter(std::string("AppName"), appName);
}

std::vector<UpdateJobRequest::NoticeContacts> UpdateJobRequest::getNoticeContacts() const {
  return noticeContacts_;
}

void UpdateJobRequest::setNoticeContacts(const std::vector<UpdateJobRequest::NoticeContacts> &noticeContacts) {
  noticeContacts_ = noticeContacts;
  for(int dep1 = 0; dep1 != noticeContacts.size(); dep1++) {
    setBodyParameter(std::string("NoticeContacts") + "." + std::to_string(dep1 + 1) + ".ContactType", std::to_string(noticeContacts[dep1].contactType));
    setBodyParameter(std::string("NoticeContacts") + "." + std::to_string(dep1 + 1) + ".Name", noticeContacts[dep1].name);
  }
}

UpdateJobRequest::NoticeConfig UpdateJobRequest::getNoticeConfig() const {
  return noticeConfig_;
}

void UpdateJobRequest::setNoticeConfig(const UpdateJobRequest::NoticeConfig &noticeConfig) {
  noticeConfig_ = noticeConfig;
  setBodyParameter(std::string("NoticeConfig") + ".TimeoutKillEnable", noticeConfig.timeoutKillEnable ? "true" : "false");
  setBodyParameter(std::string("NoticeConfig") + ".FailEnable", noticeConfig.failEnable ? "true" : "false");
  setBodyParameter(std::string("NoticeConfig") + ".webhookIsAtAll", noticeConfig.webhookIsAtAll ? "true" : "false");
  setBodyParameter(std::string("NoticeConfig") + ".SuccessNotice", noticeConfig.successNotice ? "true" : "false");
  setBodyParameter(std::string("NoticeConfig") + ".FailLimitTimes", std::to_string(noticeConfig.failLimitTimes));
  setBodyParameter(std::string("NoticeConfig") + ".SendChannel", noticeConfig.sendChannel);
  setBodyParameter(std::string("NoticeConfig") + ".TimeoutEnable", noticeConfig.timeoutEnable ? "true" : "false");
  setBodyParameter(std::string("NoticeConfig") + ".MissWorkerEnable", noticeConfig.missWorkerEnable ? "true" : "false");
  setBodyParameter(std::string("NoticeConfig") + ".Timeout", std::to_string(noticeConfig.timeout));
}

std::string UpdateJobRequest::getCalendar() const {
  return calendar_;
}

void UpdateJobRequest::setCalendar(const std::string &calendar) {
  calendar_ = calendar;
  setBodyParameter(std::string("Calendar"), calendar);
}

int UpdateJobRequest::getDataOffset() const {
  return dataOffset_;
}

void UpdateJobRequest::setDataOffset(int dataOffset) {
  dataOffset_ = dataOffset;
  setBodyParameter(std::string("DataOffset"), std::to_string(dataOffset));
}

int UpdateJobRequest::getMaxAttempt() const {
  return maxAttempt_;
}

void UpdateJobRequest::setMaxAttempt(int maxAttempt) {
  maxAttempt_ = maxAttempt;
  setBodyParameter(std::string("MaxAttempt"), std::to_string(maxAttempt));
}

std::string UpdateJobRequest::getClusterId() const {
  return clusterId_;
}

void UpdateJobRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setBodyParameter(std::string("ClusterId"), clusterId);
}

int UpdateJobRequest::getPriority() const {
  return priority_;
}

void UpdateJobRequest::setPriority(int priority) {
  priority_ = priority;
  setBodyParameter(std::string("Priority"), std::to_string(priority));
}

std::string UpdateJobRequest::getTimeExpression() const {
  return timeExpression_;
}

void UpdateJobRequest::setTimeExpression(const std::string &timeExpression) {
  timeExpression_ = timeExpression;
  setBodyParameter(std::string("TimeExpression"), timeExpression);
}

std::string UpdateJobRequest::getName() const {
  return name_;
}

void UpdateJobRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

std::string UpdateJobRequest::getXAttrs() const {
  return xAttrs_;
}

void UpdateJobRequest::setXAttrs(const std::string &xAttrs) {
  xAttrs_ = xAttrs;
  setBodyParameter(std::string("XAttrs"), xAttrs);
}

int UpdateJobRequest::getMaxConcurrency() const {
  return maxConcurrency_;
}

void UpdateJobRequest::setMaxConcurrency(int maxConcurrency) {
  maxConcurrency_ = maxConcurrency;
  setBodyParameter(std::string("MaxConcurrency"), std::to_string(maxConcurrency));
}

int UpdateJobRequest::getTimeType() const {
  return timeType_;
}

void UpdateJobRequest::setTimeType(int timeType) {
  timeType_ = timeType;
  setBodyParameter(std::string("TimeType"), std::to_string(timeType));
}

std::string UpdateJobRequest::getParameters() const {
  return parameters_;
}

void UpdateJobRequest::setParameters(const std::string &parameters) {
  parameters_ = parameters;
  setBodyParameter(std::string("Parameters"), parameters);
}

std::string UpdateJobRequest::getJobHandler() const {
  return jobHandler_;
}

void UpdateJobRequest::setJobHandler(const std::string &jobHandler) {
  jobHandler_ = jobHandler;
  setBodyParameter(std::string("JobHandler"), jobHandler);
}

std::string UpdateJobRequest::getCleanMode() const {
  return cleanMode_;
}

void UpdateJobRequest::setCleanMode(const std::string &cleanMode) {
  cleanMode_ = cleanMode;
  setBodyParameter(std::string("CleanMode"), cleanMode);
}

