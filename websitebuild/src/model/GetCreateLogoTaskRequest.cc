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

#include <alibabacloud/websitebuild/model/GetCreateLogoTaskRequest.h>

using AlibabaCloud::WebsiteBuild::Model::GetCreateLogoTaskRequest;

GetCreateLogoTaskRequest::GetCreateLogoTaskRequest()
    : RpcServiceRequest("websitebuild", "2025-04-29", "GetCreateLogoTask") {
  setMethod(HttpRequest::Method::Post);
}

GetCreateLogoTaskRequest::~GetCreateLogoTaskRequest() {}

std::string GetCreateLogoTaskRequest::getTaskId() const {
  return taskId_;
}

void GetCreateLogoTaskRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

