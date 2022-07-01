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

#include <alibabacloud/ddoscoo/model/CreateAsyncTaskRequest.h>

using AlibabaCloud::Ddoscoo::Model::CreateAsyncTaskRequest;

CreateAsyncTaskRequest::CreateAsyncTaskRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "CreateAsyncTask") {
  setMethod(HttpRequest::Method::Post);
}

CreateAsyncTaskRequest::~CreateAsyncTaskRequest() {}

int CreateAsyncTaskRequest::getTaskType() const {
  return taskType_;
}

void CreateAsyncTaskRequest::setTaskType(int taskType) {
  taskType_ = taskType;
  setParameter(std::string("TaskType"), std::to_string(taskType));
}

std::string CreateAsyncTaskRequest::getTaskParams() const {
  return taskParams_;
}

void CreateAsyncTaskRequest::setTaskParams(const std::string &taskParams) {
  taskParams_ = taskParams;
  setParameter(std::string("TaskParams"), taskParams);
}

std::string CreateAsyncTaskRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateAsyncTaskRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateAsyncTaskRequest::getSourceIp() const {
  return sourceIp_;
}

void CreateAsyncTaskRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string CreateAsyncTaskRequest::getLang() const {
  return lang_;
}

void CreateAsyncTaskRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

