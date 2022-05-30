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

#include <alibabacloud/dataworks-public/model/QueryDISyncTaskConfigProcessResultRequest.h>

using AlibabaCloud::Dataworks_public::Model::QueryDISyncTaskConfigProcessResultRequest;

QueryDISyncTaskConfigProcessResultRequest::QueryDISyncTaskConfigProcessResultRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "QueryDISyncTaskConfigProcessResult") {
  setMethod(HttpRequest::Method::Post);
}

QueryDISyncTaskConfigProcessResultRequest::~QueryDISyncTaskConfigProcessResultRequest() {}

std::string QueryDISyncTaskConfigProcessResultRequest::getTaskType() const {
  return taskType_;
}

void QueryDISyncTaskConfigProcessResultRequest::setTaskType(const std::string &taskType) {
  taskType_ = taskType;
  setParameter(std::string("TaskType"), taskType);
}

long QueryDISyncTaskConfigProcessResultRequest::getAsyncProcessId() const {
  return asyncProcessId_;
}

void QueryDISyncTaskConfigProcessResultRequest::setAsyncProcessId(long asyncProcessId) {
  asyncProcessId_ = asyncProcessId;
  setParameter(std::string("AsyncProcessId"), std::to_string(asyncProcessId));
}

long QueryDISyncTaskConfigProcessResultRequest::getProjectId() const {
  return projectId_;
}

void QueryDISyncTaskConfigProcessResultRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), std::to_string(projectId));
}

