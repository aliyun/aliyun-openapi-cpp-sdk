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

#include <alibabacloud/appstream-center/model/GetOtaTaskByTaskIdRequest.h>

using AlibabaCloud::Appstream_center::Model::GetOtaTaskByTaskIdRequest;

GetOtaTaskByTaskIdRequest::GetOtaTaskByTaskIdRequest()
    : RpcServiceRequest("appstream-center", "2021-09-01", "GetOtaTaskByTaskId") {
  setMethod(HttpRequest::Method::Post);
}

GetOtaTaskByTaskIdRequest::~GetOtaTaskByTaskIdRequest() {}

std::string GetOtaTaskByTaskIdRequest::getTaskId() const {
  return taskId_;
}

void GetOtaTaskByTaskIdRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setBodyParameter(std::string("TaskId"), taskId);
}

