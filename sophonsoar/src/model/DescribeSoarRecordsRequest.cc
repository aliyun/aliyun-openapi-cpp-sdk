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

#include <alibabacloud/sophonsoar/model/DescribeSoarRecordsRequest.h>

using AlibabaCloud::Sophonsoar::Model::DescribeSoarRecordsRequest;

DescribeSoarRecordsRequest::DescribeSoarRecordsRequest()
    : RpcServiceRequest("sophonsoar", "2022-07-28", "DescribeSoarRecords") {
  setMethod(HttpRequest::Method::Get);
}

DescribeSoarRecordsRequest::~DescribeSoarRecordsRequest() {}

std::string DescribeSoarRecordsRequest::getTaskflowMd5() const {
  return taskflowMd5_;
}

void DescribeSoarRecordsRequest::setTaskflowMd5(const std::string &taskflowMd5) {
  taskflowMd5_ = taskflowMd5;
  setParameter(std::string("TaskflowMd5"), taskflowMd5);
}

std::string DescribeSoarRecordsRequest::getRoleFor() const {
  return roleFor_;
}

void DescribeSoarRecordsRequest::setRoleFor(const std::string &roleFor) {
  roleFor_ = roleFor;
  setParameter(std::string("RoleFor"), roleFor);
}

std::string DescribeSoarRecordsRequest::getTaskType() const {
  return taskType_;
}

void DescribeSoarRecordsRequest::setTaskType(const std::string &taskType) {
  taskType_ = taskType;
  setParameter(std::string("TaskType"), taskType);
}

long DescribeSoarRecordsRequest::getEndMillis() const {
  return endMillis_;
}

void DescribeSoarRecordsRequest::setEndMillis(long endMillis) {
  endMillis_ = endMillis;
  setParameter(std::string("EndMillis"), std::to_string(endMillis));
}

long DescribeSoarRecordsRequest::getStartMillis() const {
  return startMillis_;
}

void DescribeSoarRecordsRequest::setStartMillis(long startMillis) {
  startMillis_ = startMillis;
  setParameter(std::string("StartMillis"), std::to_string(startMillis));
}

int DescribeSoarRecordsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeSoarRecordsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeSoarRecordsRequest::getTaskStatus() const {
  return taskStatus_;
}

void DescribeSoarRecordsRequest::setTaskStatus(const std::string &taskStatus) {
  taskStatus_ = taskStatus;
  setParameter(std::string("TaskStatus"), taskStatus);
}

std::string DescribeSoarRecordsRequest::getPlaybookUuid() const {
  return playbookUuid_;
}

void DescribeSoarRecordsRequest::setPlaybookUuid(const std::string &playbookUuid) {
  playbookUuid_ = playbookUuid;
  setParameter(std::string("PlaybookUuid"), playbookUuid);
}

std::string DescribeSoarRecordsRequest::getRequestUuid() const {
  return requestUuid_;
}

void DescribeSoarRecordsRequest::setRequestUuid(const std::string &requestUuid) {
  requestUuid_ = requestUuid;
  setParameter(std::string("RequestUuid"), requestUuid);
}

int DescribeSoarRecordsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeSoarRecordsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeSoarRecordsRequest::getRoleType() const {
  return roleType_;
}

void DescribeSoarRecordsRequest::setRoleType(const std::string &roleType) {
  roleType_ = roleType;
  setParameter(std::string("RoleType"), roleType);
}

std::string DescribeSoarRecordsRequest::getTriggerUser() const {
  return triggerUser_;
}

void DescribeSoarRecordsRequest::setTriggerUser(const std::string &triggerUser) {
  triggerUser_ = triggerUser;
  setParameter(std::string("TriggerUser"), triggerUser);
}

std::string DescribeSoarRecordsRequest::getLang() const {
  return lang_;
}

void DescribeSoarRecordsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

