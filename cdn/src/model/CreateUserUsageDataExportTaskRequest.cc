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

#include <alibabacloud/cdn/model/CreateUserUsageDataExportTaskRequest.h>

using AlibabaCloud::Cdn::Model::CreateUserUsageDataExportTaskRequest;

CreateUserUsageDataExportTaskRequest::CreateUserUsageDataExportTaskRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "CreateUserUsageDataExportTask") {
  setMethod(HttpRequest::Method::Post);
}

CreateUserUsageDataExportTaskRequest::~CreateUserUsageDataExportTaskRequest() {}

std::string CreateUserUsageDataExportTaskRequest::getTaskName() const {
  return taskName_;
}

void CreateUserUsageDataExportTaskRequest::setTaskName(const std::string &taskName) {
  taskName_ = taskName;
  setParameter(std::string("TaskName"), taskName);
}

std::string CreateUserUsageDataExportTaskRequest::getLanguage() const {
  return language_;
}

void CreateUserUsageDataExportTaskRequest::setLanguage(const std::string &language) {
  language_ = language;
  setParameter(std::string("Language"), language);
}

std::string CreateUserUsageDataExportTaskRequest::getStartTime() const {
  return startTime_;
}

void CreateUserUsageDataExportTaskRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string CreateUserUsageDataExportTaskRequest::getEndTime() const {
  return endTime_;
}

void CreateUserUsageDataExportTaskRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long CreateUserUsageDataExportTaskRequest::getOwnerId() const {
  return ownerId_;
}

void CreateUserUsageDataExportTaskRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

