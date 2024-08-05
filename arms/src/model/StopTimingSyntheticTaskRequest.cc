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

#include <alibabacloud/arms/model/StopTimingSyntheticTaskRequest.h>

using AlibabaCloud::ARMS::Model::StopTimingSyntheticTaskRequest;

StopTimingSyntheticTaskRequest::StopTimingSyntheticTaskRequest()
    : RpcServiceRequest("arms", "2019-08-08", "StopTimingSyntheticTask") {
  setMethod(HttpRequest::Method::Post);
}

StopTimingSyntheticTaskRequest::~StopTimingSyntheticTaskRequest() {}

std::string StopTimingSyntheticTaskRequest::getRegionId() const {
  return regionId_;
}

void StopTimingSyntheticTaskRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<StopTimingSyntheticTaskRequest::std::string> StopTimingSyntheticTaskRequest::getTaskIds() const {
  return taskIds_;
}

void StopTimingSyntheticTaskRequest::setTaskIds(const std::vector<StopTimingSyntheticTaskRequest::std::string> &taskIds) {
  taskIds_ = taskIds;
  for(int dep1 = 0; dep1 != taskIds.size(); dep1++) {
    setParameter(std::string("TaskIds") + "." + std::to_string(dep1 + 1), taskIds[dep1]);
  }
}

