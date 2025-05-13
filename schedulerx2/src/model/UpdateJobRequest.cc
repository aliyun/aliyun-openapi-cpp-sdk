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

#include <alibabacloud/schedulerx2/model/UpdateJobRequest.h>

using AlibabaCloud::Schedulerx2::Model::UpdateJobRequest;

UpdateJobRequest::UpdateJobRequest()
    : RpcServiceRequest("schedulerx2", "2019-04-30", "UpdateJob") {
  setMethod(HttpRequest::Method::Post);
}

UpdateJobRequest::~UpdateJobRequest() {}

int UpdateJobRequest::getAttemptInterval() const {
  return attemptInterval_;
}

void UpdateJobRequest::setAttemptInterval(int attemptInterval) {
  attemptInterval_ = attemptInterval;
  setBodyParameter(std::string("AttemptInterval"), std::to_string(attemptInterval));
}

int UpdateJobRequest::getFailTimes() const {
  return failTimes_;
}

void UpdateJobRequest::setFailTimes(int failTimes) {
  failTimes_ = failTimes;
  setBodyParameter(std::string("FailTimes"), std::to_string(failTimes));
}

long UpdateJobRequest::getJobId() const {
  return jobId_;
}

void UpdateJobRequest::setJobId(long jobId) {
  jobId_ = jobId;
  setBodyParameter(std::string("JobId"), std::to_string(jobId));
}

int UpdateJobRequest::getConsumerSize() const {
  return consumerSize_;
}

void UpdateJobRequest::setConsumerSize(int consumerSize) {
  consumerSize_ = consumerSize;
  setBodyParameter(std::string("ConsumerSize"), std::to_string(consumerSize));
}

std::string UpdateJobRequest::getJarUrl() const {
  return jarUrl_;
}

void UpdateJobRequest::setJarUrl(const std::string &jarUrl) {
  jarUrl_ = jarUrl;
  setBodyParameter(std::string("JarUrl"), jarUrl);
}

std::string UpdateJobRequest::getGroupId() const {
  return groupId_;
}

void UpdateJobRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setBodyParameter(std::string("GroupId"), groupId);
}

int UpdateJobRequest::getTaskMaxAttempt() const {
  return taskMaxAttempt_;
}

void UpdateJobRequest::setTaskMaxAttempt(int taskMaxAttempt) {
  taskMaxAttempt_ = taskMaxAttempt;
  setBodyParameter(std::string("TaskMaxAttempt"), std::to_string(taskMaxAttempt));
}

int UpdateJobRequest::getDataOffset() const {
  return dataOffset_;
}

void UpdateJobRequest::setDataOffset(int dataOffset) {
  dataOffset_ = dataOffset;
  setBodyParameter(std::string("DataOffset"), std::to_string(dataOffset));
}

int UpdateJobRequest::getDispatcherSize() const {
  return dispatcherSize_;
}

void UpdateJobRequest::setDispatcherSize(int dispatcherSize) {
  dispatcherSize_ = dispatcherSize;
  setBodyParameter(std::string("DispatcherSize"), std::to_string(dispatcherSize));
}

int UpdateJobRequest::getPriority() const {
  return priority_;
}

void UpdateJobRequest::setPriority(int priority) {
  priority_ = priority;
  setParameter(std::string("Priority"), std::to_string(priority));
}

int UpdateJobRequest::getTaskAttemptInterval() const {
  return taskAttemptInterval_;
}

void UpdateJobRequest::setTaskAttemptInterval(int taskAttemptInterval) {
  taskAttemptInterval_ = taskAttemptInterval;
  setBodyParameter(std::string("TaskAttemptInterval"), std::to_string(taskAttemptInterval));
}

std::string UpdateJobRequest::getExecuteMode() const {
  return executeMode_;
}

void UpdateJobRequest::setExecuteMode(const std::string &executeMode) {
  executeMode_ = executeMode;
  setBodyParameter(std::string("ExecuteMode"), executeMode);
}

std::string UpdateJobRequest::getTimeExpression() const {
  return timeExpression_;
}

void UpdateJobRequest::setTimeExpression(const std::string &timeExpression) {
  timeExpression_ = timeExpression;
  setBodyParameter(std::string("TimeExpression"), timeExpression);
}

bool UpdateJobRequest::getTimeoutEnable() const {
  return timeoutEnable_;
}

void UpdateJobRequest::setTimeoutEnable(bool timeoutEnable) {
  timeoutEnable_ = timeoutEnable;
  setBodyParameter(std::string("TimeoutEnable"), timeoutEnable ? "true" : "false");
}

std::vector<UpdateJobRequest::ContactInfo> UpdateJobRequest::getContactInfo() const {
  return contactInfo_;
}

void UpdateJobRequest::setContactInfo(const std::vector<UpdateJobRequest::ContactInfo> &contactInfo) {
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

std::string UpdateJobRequest::getName() const {
  return name_;
}

void UpdateJobRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
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

std::string UpdateJobRequest::get_Template() const {
  return _template_;
}

void UpdateJobRequest::set_Template(const std::string &_template) {
  _template_ = _template;
  setBodyParameter(std::string("Template"), _template);
}

std::string UpdateJobRequest::getNamespaceSource() const {
  return namespaceSource_;
}

void UpdateJobRequest::setNamespaceSource(const std::string &namespaceSource) {
  namespaceSource_ = namespaceSource;
  setBodyParameter(std::string("NamespaceSource"), namespaceSource);
}

std::string UpdateJobRequest::getTimezone() const {
  return timezone_;
}

void UpdateJobRequest::setTimezone(const std::string &timezone) {
  timezone_ = timezone;
  setBodyParameter(std::string("Timezone"), timezone);
}

std::string UpdateJobRequest::getDescription() const {
  return description_;
}

void UpdateJobRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string UpdateJobRequest::getContent() const {
  return content_;
}

void UpdateJobRequest::setContent(const std::string &content) {
  content_ = content;
  setBodyParameter(std::string("Content"), content);
}

long UpdateJobRequest::getTimeout() const {
  return timeout_;
}

void UpdateJobRequest::setTimeout(long timeout) {
  timeout_ = timeout;
  setBodyParameter(std::string("Timeout"), std::to_string(timeout));
}

bool UpdateJobRequest::getTimeoutKillEnable() const {
  return timeoutKillEnable_;
}

void UpdateJobRequest::setTimeoutKillEnable(bool timeoutKillEnable) {
  timeoutKillEnable_ = timeoutKillEnable;
  setBodyParameter(std::string("TimeoutKillEnable"), timeoutKillEnable ? "true" : "false");
}

std::string UpdateJobRequest::getRegionId() const {
  return regionId_;
}

void UpdateJobRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int UpdateJobRequest::getPageSize() const {
  return pageSize_;
}

void UpdateJobRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string UpdateJobRequest::getTaskDispatchMode() const {
  return taskDispatchMode_;
}

void UpdateJobRequest::setTaskDispatchMode(const std::string &taskDispatchMode) {
  taskDispatchMode_ = taskDispatchMode;
  setBodyParameter(std::string("TaskDispatchMode"), taskDispatchMode);
}

std::string UpdateJobRequest::getCalendar() const {
  return calendar_;
}

void UpdateJobRequest::setCalendar(const std::string &calendar) {
  calendar_ = calendar;
  setBodyParameter(std::string("Calendar"), calendar);
}

bool UpdateJobRequest::getFailEnable() const {
  return failEnable_;
}

void UpdateJobRequest::setFailEnable(bool failEnable) {
  failEnable_ = failEnable;
  setBodyParameter(std::string("FailEnable"), failEnable ? "true" : "false");
}

std::string UpdateJobRequest::getSendChannel() const {
  return sendChannel_;
}

void UpdateJobRequest::setSendChannel(const std::string &sendChannel) {
  sendChannel_ = sendChannel;
  setBodyParameter(std::string("SendChannel"), sendChannel);
}

int UpdateJobRequest::getMaxAttempt() const {
  return maxAttempt_;
}

void UpdateJobRequest::setMaxAttempt(int maxAttempt) {
  maxAttempt_ = maxAttempt;
  setBodyParameter(std::string("MaxAttempt"), std::to_string(maxAttempt));
}

bool UpdateJobRequest::getMissWorkerEnable() const {
  return missWorkerEnable_;
}

void UpdateJobRequest::setMissWorkerEnable(bool missWorkerEnable) {
  missWorkerEnable_ = missWorkerEnable;
  setBodyParameter(std::string("MissWorkerEnable"), missWorkerEnable ? "true" : "false");
}

bool UpdateJobRequest::getSuccessNoticeEnable() const {
  return successNoticeEnable_;
}

void UpdateJobRequest::setSuccessNoticeEnable(bool successNoticeEnable) {
  successNoticeEnable_ = successNoticeEnable;
  setBodyParameter(std::string("SuccessNoticeEnable"), successNoticeEnable ? "true" : "false");
}

int UpdateJobRequest::getQueueSize() const {
  return queueSize_;
}

void UpdateJobRequest::setQueueSize(int queueSize) {
  queueSize_ = queueSize;
  setBodyParameter(std::string("QueueSize"), std::to_string(queueSize));
}

std::string UpdateJobRequest::getClassName() const {
  return className_;
}

void UpdateJobRequest::setClassName(const std::string &className) {
  className_ = className;
  setBodyParameter(std::string("ClassName"), className);
}

std::string UpdateJobRequest::get_Namespace() const {
  return _namespace_;
}

void UpdateJobRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setBodyParameter(std::string("Namespace"), _namespace);
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

