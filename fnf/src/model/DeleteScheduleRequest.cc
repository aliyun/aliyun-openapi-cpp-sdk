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

#include <alibabacloud/fnf/model/DeleteScheduleRequest.h>

using AlibabaCloud::Fnf::Model::DeleteScheduleRequest;

DeleteScheduleRequest::DeleteScheduleRequest()
    : RpcServiceRequest("fnf", "2019-03-15", "DeleteSchedule") {
  setMethod(HttpRequest::Method::Post);
}

DeleteScheduleRequest::~DeleteScheduleRequest() {}

std::string DeleteScheduleRequest::getScheduleName() const {
  return scheduleName_;
}

void DeleteScheduleRequest::setScheduleName(const std::string &scheduleName) {
  scheduleName_ = scheduleName;
  setBodyParameter(std::string("ScheduleName"), scheduleName);
}

std::string DeleteScheduleRequest::getFlowName() const {
  return flowName_;
}

void DeleteScheduleRequest::setFlowName(const std::string &flowName) {
  flowName_ = flowName;
  setBodyParameter(std::string("FlowName"), flowName);
}

