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

#include <alibabacloud/dms-enterprise/model/UpdateTaskFlowScheduleRequest.h>

using AlibabaCloud::Dms_enterprise::Model::UpdateTaskFlowScheduleRequest;

UpdateTaskFlowScheduleRequest::UpdateTaskFlowScheduleRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "UpdateTaskFlowSchedule") {
  setMethod(HttpRequest::Method::Post);
}

UpdateTaskFlowScheduleRequest::~UpdateTaskFlowScheduleRequest() {}

std::string UpdateTaskFlowScheduleRequest::getCronType() const {
  return cronType_;
}

void UpdateTaskFlowScheduleRequest::setCronType(const std::string &cronType) {
  cronType_ = cronType;
  setParameter(std::string("CronType"), cronType);
}

std::string UpdateTaskFlowScheduleRequest::getCronStr() const {
  return cronStr_;
}

void UpdateTaskFlowScheduleRequest::setCronStr(const std::string &cronStr) {
  cronStr_ = cronStr;
  setParameter(std::string("CronStr"), cronStr);
}

std::string UpdateTaskFlowScheduleRequest::getTriggerType() const {
  return triggerType_;
}

void UpdateTaskFlowScheduleRequest::setTriggerType(const std::string &triggerType) {
  triggerType_ = triggerType;
  setParameter(std::string("TriggerType"), triggerType);
}

long UpdateTaskFlowScheduleRequest::getDagId() const {
  return dagId_;
}

void UpdateTaskFlowScheduleRequest::setDagId(long dagId) {
  dagId_ = dagId;
  setParameter(std::string("DagId"), std::to_string(dagId));
}

long UpdateTaskFlowScheduleRequest::getTid() const {
  return tid_;
}

void UpdateTaskFlowScheduleRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::string UpdateTaskFlowScheduleRequest::getTimeZoneId() const {
  return timeZoneId_;
}

void UpdateTaskFlowScheduleRequest::setTimeZoneId(const std::string &timeZoneId) {
  timeZoneId_ = timeZoneId;
  setParameter(std::string("TimeZoneId"), timeZoneId);
}

std::string UpdateTaskFlowScheduleRequest::getCronBeginDate() const {
  return cronBeginDate_;
}

void UpdateTaskFlowScheduleRequest::setCronBeginDate(const std::string &cronBeginDate) {
  cronBeginDate_ = cronBeginDate;
  setParameter(std::string("CronBeginDate"), cronBeginDate);
}

bool UpdateTaskFlowScheduleRequest::getScheduleSwitch() const {
  return scheduleSwitch_;
}

void UpdateTaskFlowScheduleRequest::setScheduleSwitch(bool scheduleSwitch) {
  scheduleSwitch_ = scheduleSwitch;
  setParameter(std::string("ScheduleSwitch"), scheduleSwitch ? "true" : "false");
}

std::string UpdateTaskFlowScheduleRequest::getCronEndDate() const {
  return cronEndDate_;
}

void UpdateTaskFlowScheduleRequest::setCronEndDate(const std::string &cronEndDate) {
  cronEndDate_ = cronEndDate;
  setParameter(std::string("CronEndDate"), cronEndDate);
}

std::string UpdateTaskFlowScheduleRequest::getScheduleParam() const {
  return scheduleParam_;
}

void UpdateTaskFlowScheduleRequest::setScheduleParam(const std::string &scheduleParam) {
  scheduleParam_ = scheduleParam;
  setParameter(std::string("ScheduleParam"), scheduleParam);
}

