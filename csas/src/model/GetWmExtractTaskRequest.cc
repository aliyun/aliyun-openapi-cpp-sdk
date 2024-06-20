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

#include <alibabacloud/csas/model/GetWmExtractTaskRequest.h>

using AlibabaCloud::Csas::Model::GetWmExtractTaskRequest;

GetWmExtractTaskRequest::GetWmExtractTaskRequest()
    : RpcServiceRequest("csas", "2023-01-20", "GetWmExtractTask") {
  setMethod(HttpRequest::Method::Get);
}

GetWmExtractTaskRequest::~GetWmExtractTaskRequest() {}

std::string GetWmExtractTaskRequest::getApiType() const {
  return apiType_;
}

void GetWmExtractTaskRequest::setApiType(const std::string &apiType) {
  apiType_ = apiType;
  setParameter(std::string("ApiType"), apiType);
}

std::string GetWmExtractTaskRequest::getSourceIp() const {
  return sourceIp_;
}

void GetWmExtractTaskRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string GetWmExtractTaskRequest::getTaskId() const {
  return taskId_;
}

void GetWmExtractTaskRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

