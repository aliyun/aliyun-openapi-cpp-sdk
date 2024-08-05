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

#include <alibabacloud/arms/model/GetTimingSyntheticTaskRequest.h>

using AlibabaCloud::ARMS::Model::GetTimingSyntheticTaskRequest;

GetTimingSyntheticTaskRequest::GetTimingSyntheticTaskRequest()
    : RpcServiceRequest("arms", "2019-08-08", "GetTimingSyntheticTask") {
  setMethod(HttpRequest::Method::Get);
}

GetTimingSyntheticTaskRequest::~GetTimingSyntheticTaskRequest() {}

std::string GetTimingSyntheticTaskRequest::getRegionId() const {
  return regionId_;
}

void GetTimingSyntheticTaskRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetTimingSyntheticTaskRequest::getTaskId() const {
  return taskId_;
}

void GetTimingSyntheticTaskRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

