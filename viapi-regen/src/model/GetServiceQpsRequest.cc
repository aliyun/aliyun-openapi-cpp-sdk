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

#include <alibabacloud/viapi-regen/model/GetServiceQpsRequest.h>

using AlibabaCloud::Viapi_regen::Model::GetServiceQpsRequest;

GetServiceQpsRequest::GetServiceQpsRequest()
    : RpcServiceRequest("viapi-regen", "2021-11-19", "GetServiceQps") {
  setMethod(HttpRequest::Method::Post);
}

GetServiceQpsRequest::~GetServiceQpsRequest() {}

long GetServiceQpsRequest::getStartTime() const {
  return startTime_;
}

void GetServiceQpsRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setBodyParameter(std::string("StartTime"), std::to_string(startTime));
}

long GetServiceQpsRequest::getId() const {
  return id_;
}

void GetServiceQpsRequest::setId(long id) {
  id_ = id;
  setBodyParameter(std::string("Id"), std::to_string(id));
}

long GetServiceQpsRequest::getEndTime() const {
  return endTime_;
}

void GetServiceQpsRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), std::to_string(endTime));
}

std::vector<GetServiceQpsRequest::std::string> GetServiceQpsRequest::getCallerParentIdList() const {
  return callerParentIdList_;
}

void GetServiceQpsRequest::setCallerParentIdList(const std::vector<GetServiceQpsRequest::std::string> &callerParentIdList) {
  callerParentIdList_ = callerParentIdList;
  for(int dep1 = 0; dep1 != callerParentIdList.size(); dep1++) {
    setBodyParameter(std::string("CallerParentIdList") + "." + std::to_string(dep1 + 1), callerParentIdList[dep1]);
  }
}

