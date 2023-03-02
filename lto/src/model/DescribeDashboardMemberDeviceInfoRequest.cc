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

#include <alibabacloud/lto/model/DescribeDashboardMemberDeviceInfoRequest.h>

using AlibabaCloud::Lto::Model::DescribeDashboardMemberDeviceInfoRequest;

DescribeDashboardMemberDeviceInfoRequest::DescribeDashboardMemberDeviceInfoRequest()
    : RpcServiceRequest("lto", "2021-07-07", "DescribeDashboardMemberDeviceInfo") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDashboardMemberDeviceInfoRequest::~DescribeDashboardMemberDeviceInfoRequest() {}

long DescribeDashboardMemberDeviceInfoRequest::getEndTime() const {
  return endTime_;
}

void DescribeDashboardMemberDeviceInfoRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long DescribeDashboardMemberDeviceInfoRequest::getStartTime() const {
  return startTime_;
}

void DescribeDashboardMemberDeviceInfoRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string DescribeDashboardMemberDeviceInfoRequest::getRegionId() const {
  return regionId_;
}

void DescribeDashboardMemberDeviceInfoRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

