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

#include <alibabacloud/live/model/DeleteRtcAsrTaskRequest.h>

using AlibabaCloud::Live::Model::DeleteRtcAsrTaskRequest;

DeleteRtcAsrTaskRequest::DeleteRtcAsrTaskRequest()
    : RpcServiceRequest("live", "2016-11-01", "DeleteRtcAsrTask") {
  setMethod(HttpRequest::Method::Post);
}

DeleteRtcAsrTaskRequest::~DeleteRtcAsrTaskRequest() {}

std::string DeleteRtcAsrTaskRequest::getRegionId() const {
  return regionId_;
}

void DeleteRtcAsrTaskRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteRtcAsrTaskRequest::getTaskId() const {
  return taskId_;
}

void DeleteRtcAsrTaskRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

long DeleteRtcAsrTaskRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteRtcAsrTaskRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

