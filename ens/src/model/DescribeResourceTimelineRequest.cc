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

#include <alibabacloud/ens/model/DescribeResourceTimelineRequest.h>

using AlibabaCloud::Ens::Model::DescribeResourceTimelineRequest;

DescribeResourceTimelineRequest::DescribeResourceTimelineRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeResourceTimeline") {
  setMethod(HttpRequest::Method::Get);
}

DescribeResourceTimelineRequest::~DescribeResourceTimelineRequest() {}

std::string DescribeResourceTimelineRequest::getUuid() const {
  return uuid_;
}

void DescribeResourceTimelineRequest::setUuid(const std::string &uuid) {
  uuid_ = uuid;
  setParameter(std::string("Uuid"), uuid);
}

std::string DescribeResourceTimelineRequest::getEndTime() const {
  return endTime_;
}

void DescribeResourceTimelineRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeResourceTimelineRequest::getBeginTime() const {
  return beginTime_;
}

void DescribeResourceTimelineRequest::setBeginTime(const std::string &beginTime) {
  beginTime_ = beginTime;
  setParameter(std::string("BeginTime"), beginTime);
}

std::string DescribeResourceTimelineRequest::getOpenapiCheck() const {
  return openapiCheck_;
}

void DescribeResourceTimelineRequest::setOpenapiCheck(const std::string &openapiCheck) {
  openapiCheck_ = openapiCheck;
  setParameter(std::string("OpenapiCheck"), openapiCheck);
}

