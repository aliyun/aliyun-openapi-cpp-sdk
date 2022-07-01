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

#include <alibabacloud/ddoscoo/model/DeleteAsyncTaskRequest.h>

using AlibabaCloud::Ddoscoo::Model::DeleteAsyncTaskRequest;

DeleteAsyncTaskRequest::DeleteAsyncTaskRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "DeleteAsyncTask") {
  setMethod(HttpRequest::Method::Post);
}

DeleteAsyncTaskRequest::~DeleteAsyncTaskRequest() {}

std::string DeleteAsyncTaskRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DeleteAsyncTaskRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DeleteAsyncTaskRequest::getSourceIp() const {
  return sourceIp_;
}

void DeleteAsyncTaskRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DeleteAsyncTaskRequest::getLang() const {
  return lang_;
}

void DeleteAsyncTaskRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

int DeleteAsyncTaskRequest::getTaskId() const {
  return taskId_;
}

void DeleteAsyncTaskRequest::setTaskId(int taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), std::to_string(taskId));
}

