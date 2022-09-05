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

#include <alibabacloud/cdn/model/CreateIllegalUrlExportTaskRequest.h>

using AlibabaCloud::Cdn::Model::CreateIllegalUrlExportTaskRequest;

CreateIllegalUrlExportTaskRequest::CreateIllegalUrlExportTaskRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "CreateIllegalUrlExportTask") {
  setMethod(HttpRequest::Method::Post);
}

CreateIllegalUrlExportTaskRequest::~CreateIllegalUrlExportTaskRequest() {}

std::string CreateIllegalUrlExportTaskRequest::getTaskName() const {
  return taskName_;
}

void CreateIllegalUrlExportTaskRequest::setTaskName(const std::string &taskName) {
  taskName_ = taskName;
  setParameter(std::string("TaskName"), taskName);
}

long CreateIllegalUrlExportTaskRequest::getOwnerId() const {
  return ownerId_;
}

void CreateIllegalUrlExportTaskRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateIllegalUrlExportTaskRequest::getTimePoint() const {
  return timePoint_;
}

void CreateIllegalUrlExportTaskRequest::setTimePoint(const std::string &timePoint) {
  timePoint_ = timePoint;
  setParameter(std::string("TimePoint"), timePoint);
}

