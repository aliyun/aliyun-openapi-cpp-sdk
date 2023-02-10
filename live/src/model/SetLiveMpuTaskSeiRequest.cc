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

#include <alibabacloud/live/model/SetLiveMpuTaskSeiRequest.h>

using AlibabaCloud::Live::Model::SetLiveMpuTaskSeiRequest;

SetLiveMpuTaskSeiRequest::SetLiveMpuTaskSeiRequest()
    : RpcServiceRequest("live", "2016-11-01", "SetLiveMpuTaskSei") {
  setMethod(HttpRequest::Method::Post);
}

SetLiveMpuTaskSeiRequest::~SetLiveMpuTaskSeiRequest() {}

std::string SetLiveMpuTaskSeiRequest::getCustomSei() const {
  return customSei_;
}

void SetLiveMpuTaskSeiRequest::setCustomSei(const std::string &customSei) {
  customSei_ = customSei;
  setParameter(std::string("CustomSei"), customSei);
}

std::string SetLiveMpuTaskSeiRequest::getAppId() const {
  return appId_;
}

void SetLiveMpuTaskSeiRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string SetLiveMpuTaskSeiRequest::getTaskId() const {
  return taskId_;
}

void SetLiveMpuTaskSeiRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

