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

#include <alibabacloud/fnf/model/DescribeScheduleRequest.h>

using AlibabaCloud::Fnf::Model::DescribeScheduleRequest;

DescribeScheduleRequest::DescribeScheduleRequest()
    : RpcServiceRequest("fnf", "2019-03-15", "DescribeSchedule") {
  setMethod(HttpRequest::Method::Get);
}

DescribeScheduleRequest::~DescribeScheduleRequest() {}

std::string DescribeScheduleRequest::getScheduleName() const {
  return scheduleName_;
}

void DescribeScheduleRequest::setScheduleName(const std::string &scheduleName) {
  scheduleName_ = scheduleName;
  setParameter(std::string("ScheduleName"), scheduleName);
}

std::string DescribeScheduleRequest::getFlowName() const {
  return flowName_;
}

void DescribeScheduleRequest::setFlowName(const std::string &flowName) {
  flowName_ = flowName;
  setParameter(std::string("FlowName"), flowName);
}

