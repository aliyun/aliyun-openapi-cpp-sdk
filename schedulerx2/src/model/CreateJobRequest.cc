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

#include <alibabacloud/schedulerx2/model/CreateJobRequest.h>

using AlibabaCloud::Schedulerx2::Model::CreateJobRequest;

CreateJobRequest::CreateJobRequest()
    : RpcServiceRequest("schedulerx2", "2019-04-30", "CreateJob") {
  setMethod(HttpRequest::Method::Post);
}

CreateJobRequest::~CreateJobRequest() {}

int CreateJobRequest::getAttemptInterval() const {
  return attemptInterval_;
}

void CreateJobRequest::setAttemptInterval(int attemptInterval) {
  attemptInterval_ = attemptInterval;
  setBodyParameter(std::string("AttemptInterval"), std::to_string(attemptInterval));
}

int CreateJobRequest::getFailTimes() const {
  return failTimes_;
}

void CreateJobRequest::setFailTimes(int failTimes) {
  failTimes_ = failTimes;
  setBodyParameter(std::string("FailTimes"), std::to_string(failTimes));
}

int CreateJobRequest::getConsumerSize() const {
  return consumerSize_;
}

void CreateJobRequest::setConsumerSize(int consumerSize) {
  consumerSize_ = consumerSize;
  setBodyParameter(std::string("ConsumerSize"), std::to_string(consumerSize));
}

std::string CreateJobRequest::getJarUrl() const {
  return jarUrl_;
}

void CreateJobRequest::setJarUrl(const std::string &jarUrl) {
  jarUrl_ = jarUrl;
  setBodyParameter(std::string("JarUrl"), jarUrl);
}

std::string CreateJobRequest::getGroupId() const {
  return groupId_;
}

void CreateJobRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setBodyParameter(std::string("GroupId"), groupId);
}

int CreateJobRequest::getDataOffset() const {
  return dataOffset_;
}

void CreateJobRequest::setDataOffset(int dataOffset) {
  dataOffset_ = dataOffset;
  setBodyParameter(std::string("DataOffset"), std::to_string(dataOffset));
}

int CreateJobRequest::getTaskMaxAttempt() const {
  return taskMaxAttempt_;
}

void CreateJobRequest::setTaskMaxAttempt(int taskMaxAttempt) {
  taskMaxAttempt_ = taskMaxAttempt;
  setBodyParameter(std::string("TaskMaxAttempt"), std::to_string(taskMaxAttempt));
}

int CreateJobRequest::getDispatcherSize() const {
  return dispatcherSize_;
}

void CreateJobRequest::setDispatcherSize(int dispatcherSize) {
  dispatcherSize_ = dispatcherSize;
  setBodyParameter(std::string("DispatcherSize"), std::to_string(dispatcherSize));
}

int CreateJobRequest::getPriority() const {
  return priority_;
}

void CreateJobRequest::setPriority(int priority) {
  priority_ = priority;
  setParameter(std::string("Priority"), std::to_string(priority));
}

std::string CreateJobRequest::getJobType() const {
  return jobType_;
}

void CreateJobRequest::setJobType(const std::string &jobType) {
  jobType_ = jobType;
  setBodyParameter(std::string("JobType"), jobType);
}

int CreateJobRequest::getTaskAttemptInterval() const {
  return taskAttemptInterval_;
}

void CreateJobRequest::setTaskAttemptInterval(int taskAttemptInterval) {
  taskAttemptInterval_ = taskAttemptInterval;
  setBodyParameter(std::string("TaskAttemptInterval"), std::to_string(taskAttemptInterval));
}

std::string CreateJobRequest::getExecuteMode() const {
  return executeMode_;
}

void CreateJobRequest::setExecuteMode(const std::string &executeMode) {
  executeMode_ = executeMode;
  setBodyParameter(std::string("ExecuteMode"), executeMode);
}

std::string CreateJobRequest::getTimeExpression() const {
  return timeExpression_;
}

void CreateJobRequest::setTimeExpression(const std::string &timeExpression) {
  timeExpression_ = timeExpression;
  setBodyParameter(std::string("TimeExpression"), timeExpression);
}

bool CreateJobRequest::getTimeoutEnable() const {
  return timeoutEnable_;
}

void CreateJobRequest::setTimeoutEnable(bool timeoutEnable) {
  timeoutEnable_ = timeoutEnable;
  setBodyParameter(std::string("TimeoutEnable"), timeoutEnable ? "true" : "false");
}

std::vector<CreateJobRequest::ContactInfo> CreateJobRequest::getContactInfo() const {
  return contactInfo_;
}

void CreateJobRequest::setContactInfo(const std::vector<CreateJobRequest::ContactInfo> &contactInfo) {
  contactInfo_ = contactInfo;
  for(int dep1 = 0; dep1 != contactInfo.size(); dep1++) {
  auto contactInfoObj = contactInfo.at(dep1);
  std::string contactInfoObjStr = std::string("ContactInfo") + "." + std::to_string(dep1 + 1);
    setBodyParameter(contactInfoObjStr + ".Ding", contactInfoObj.ding);
    setBodyParameter(contactInfoObjStr + ".UserPhone", contactInfoObj.userPhone);
    setBodyParameter(contactInfoObjStr + ".UserMail", contactInfoObj.userMail);
    setBodyParameter(contactInfoObjStr + ".UserName", contactInfoObj.userName);
  }
}

std::string CreateJobRequest::getName() const {
  return name_;
}

void CreateJobRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
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

int CreateJobRequest::getStatus() const {
  return status_;
}

void CreateJobRequest::setStatus(int status) {
  status_ = status;
  setBodyParameter(std::string("Status"), std::to_string(status));
}

std::string CreateJobRequest::getNamespaceSource() const {
  return namespaceSource_;
}

void CreateJobRequest::setNamespaceSource(const std::string &namespaceSource) {
  namespaceSource_ = namespaceSource;
  setBodyParameter(std::string("NamespaceSource"), namespaceSource);
}

std::string CreateJobRequest::getTimezone() const {
  return timezone_;
}

void CreateJobRequest::setTimezone(const std::string &timezone) {
  timezone_ = timezone;
  setBodyParameter(std::string("Timezone"), timezone);
}

std::string CreateJobRequest::getDescription() const {
  return description_;
}

void CreateJobRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string CreateJobRequest::getContent() const {
  return content_;
}

void CreateJobRequest::setContent(const std::string &content) {
  content_ = content;
  setBodyParameter(std::string("Content"), content);
}

long CreateJobRequest::getTimeout() const {
  return timeout_;
}

void CreateJobRequest::setTimeout(long timeout) {
  timeout_ = timeout;
  setBodyParameter(std::string("Timeout"), std::to_string(timeout));
}

bool CreateJobRequest::getTimeoutKillEnable() const {
  return timeoutKillEnable_;
}

void CreateJobRequest::setTimeoutKillEnable(bool timeoutKillEnable) {
  timeoutKillEnable_ = timeoutKillEnable;
  setBodyParameter(std::string("TimeoutKillEnable"), timeoutKillEnable ? "true" : "false");
}

std::string CreateJobRequest::getRegionId() const {
  return regionId_;
}

void CreateJobRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int CreateJobRequest::getPageSize() const {
  return pageSize_;
}

void CreateJobRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string CreateJobRequest::getCalendar() const {
  return calendar_;
}

void CreateJobRequest::setCalendar(const std::string &calendar) {
  calendar_ = calendar;
  setBodyParameter(std::string("Calendar"), calendar);
}

bool CreateJobRequest::getFailEnable() const {
  return failEnable_;
}

void CreateJobRequest::setFailEnable(bool failEnable) {
  failEnable_ = failEnable;
  setBodyParameter(std::string("FailEnable"), failEnable ? "true" : "false");
}

std::string CreateJobRequest::getSendChannel() const {
  return sendChannel_;
}

void CreateJobRequest::setSendChannel(const std::string &sendChannel) {
  sendChannel_ = sendChannel;
  setBodyParameter(std::string("SendChannel"), sendChannel);
}

int CreateJobRequest::getMaxAttempt() const {
  return maxAttempt_;
}

void CreateJobRequest::setMaxAttempt(int maxAttempt) {
  maxAttempt_ = maxAttempt;
  setBodyParameter(std::string("MaxAttempt"), std::to_string(maxAttempt));
}

bool CreateJobRequest::getMissWorkerEnable() const {
  return missWorkerEnable_;
}

void CreateJobRequest::setMissWorkerEnable(bool missWorkerEnable) {
  missWorkerEnable_ = missWorkerEnable;
  setBodyParameter(std::string("MissWorkerEnable"), missWorkerEnable ? "true" : "false");
}

bool CreateJobRequest::getSuccessNoticeEnable() const {
  return successNoticeEnable_;
}

void CreateJobRequest::setSuccessNoticeEnable(bool successNoticeEnable) {
  successNoticeEnable_ = successNoticeEnable;
  setBodyParameter(std::string("SuccessNoticeEnable"), successNoticeEnable ? "true" : "false");
}

int CreateJobRequest::getQueueSize() const {
  return queueSize_;
}

void CreateJobRequest::setQueueSize(int queueSize) {
  queueSize_ = queueSize;
  setBodyParameter(std::string("QueueSize"), std::to_string(queueSize));
}

std::string CreateJobRequest::getClassName() const {
  return className_;
}

void CreateJobRequest::setClassName(const std::string &className) {
  className_ = className;
  setBodyParameter(std::string("ClassName"), className);
}

std::string CreateJobRequest::get_Namespace() const {
  return _namespace_;
}

void CreateJobRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setBodyParameter(std::string("Namespace"), _namespace);
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

