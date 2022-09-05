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

#include <alibabacloud/cdn/model/CreateUsageDetailDataExportTaskRequest.h>

using AlibabaCloud::Cdn::Model::CreateUsageDetailDataExportTaskRequest;

CreateUsageDetailDataExportTaskRequest::CreateUsageDetailDataExportTaskRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "CreateUsageDetailDataExportTask") {
  setMethod(HttpRequest::Method::Post);
}

CreateUsageDetailDataExportTaskRequest::~CreateUsageDetailDataExportTaskRequest() {}

std::string CreateUsageDetailDataExportTaskRequest::getDomainNames() const {
  return domainNames_;
}

void CreateUsageDetailDataExportTaskRequest::setDomainNames(const std::string &domainNames) {
  domainNames_ = domainNames;
  setParameter(std::string("DomainNames"), domainNames);
}

std::string CreateUsageDetailDataExportTaskRequest::getTaskName() const {
  return taskName_;
}

void CreateUsageDetailDataExportTaskRequest::setTaskName(const std::string &taskName) {
  taskName_ = taskName;
  setParameter(std::string("TaskName"), taskName);
}

std::string CreateUsageDetailDataExportTaskRequest::getLanguage() const {
  return language_;
}

void CreateUsageDetailDataExportTaskRequest::setLanguage(const std::string &language) {
  language_ = language;
  setParameter(std::string("Language"), language);
}

std::string CreateUsageDetailDataExportTaskRequest::getStartTime() const {
  return startTime_;
}

void CreateUsageDetailDataExportTaskRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string CreateUsageDetailDataExportTaskRequest::getType() const {
  return type_;
}

void CreateUsageDetailDataExportTaskRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string CreateUsageDetailDataExportTaskRequest::getGroup() const {
  return group_;
}

void CreateUsageDetailDataExportTaskRequest::setGroup(const std::string &group) {
  group_ = group;
  setParameter(std::string("Group"), group);
}

std::string CreateUsageDetailDataExportTaskRequest::getEndTime() const {
  return endTime_;
}

void CreateUsageDetailDataExportTaskRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long CreateUsageDetailDataExportTaskRequest::getOwnerId() const {
  return ownerId_;
}

void CreateUsageDetailDataExportTaskRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

