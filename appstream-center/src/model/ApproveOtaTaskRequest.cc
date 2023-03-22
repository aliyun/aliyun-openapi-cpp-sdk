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

#include <alibabacloud/appstream-center/model/ApproveOtaTaskRequest.h>

using AlibabaCloud::Appstream_center::Model::ApproveOtaTaskRequest;

ApproveOtaTaskRequest::ApproveOtaTaskRequest()
    : RpcServiceRequest("appstream-center", "2021-09-01", "ApproveOtaTask") {
  setMethod(HttpRequest::Method::Post);
}

ApproveOtaTaskRequest::~ApproveOtaTaskRequest() {}

std::string ApproveOtaTaskRequest::getBizRegionId() const {
  return bizRegionId_;
}

void ApproveOtaTaskRequest::setBizRegionId(const std::string &bizRegionId) {
  bizRegionId_ = bizRegionId;
  setBodyParameter(std::string("BizRegionId"), bizRegionId);
}

std::string ApproveOtaTaskRequest::getOtaType() const {
  return otaType_;
}

void ApproveOtaTaskRequest::setOtaType(const std::string &otaType) {
  otaType_ = otaType;
  setBodyParameter(std::string("OtaType"), otaType);
}

std::string ApproveOtaTaskRequest::getStartTime() const {
  return startTime_;
}

void ApproveOtaTaskRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setBodyParameter(std::string("StartTime"), startTime);
}

std::string ApproveOtaTaskRequest::getStopTime() const {
  return stopTime_;
}

void ApproveOtaTaskRequest::setStopTime(const std::string &stopTime) {
  stopTime_ = stopTime;
  setBodyParameter(std::string("StopTime"), stopTime);
}

std::string ApproveOtaTaskRequest::getAppInstanceGroupId() const {
  return appInstanceGroupId_;
}

void ApproveOtaTaskRequest::setAppInstanceGroupId(const std::string &appInstanceGroupId) {
  appInstanceGroupId_ = appInstanceGroupId;
  setBodyParameter(std::string("AppInstanceGroupId"), appInstanceGroupId);
}

std::string ApproveOtaTaskRequest::getTaskId() const {
  return taskId_;
}

void ApproveOtaTaskRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setBodyParameter(std::string("TaskId"), taskId);
}

