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

#include <alibabacloud/opensearch/model/DescribeAppGroupDataReportRequest.h>

using AlibabaCloud::OpenSearch::Model::DescribeAppGroupDataReportRequest;

DescribeAppGroupDataReportRequest::DescribeAppGroupDataReportRequest()
    : RoaServiceRequest("opensearch", "2017-12-25") {
  setResourcePath("/v4/openapi/app-groups/[appGroupIdentity]/data-report"};
  setMethod(HttpRequest::Method::Get);
}

DescribeAppGroupDataReportRequest::~DescribeAppGroupDataReportRequest() {}

std::string DescribeAppGroupDataReportRequest::getEndTime() const {
  return endTime_;
}

void DescribeAppGroupDataReportRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("endTime"), endTime);
}

std::string DescribeAppGroupDataReportRequest::getStartTime() const {
  return startTime_;
}

void DescribeAppGroupDataReportRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("startTime"), startTime);
}

std::string DescribeAppGroupDataReportRequest::getAppGroupIdentity() const {
  return appGroupIdentity_;
}

void DescribeAppGroupDataReportRequest::setAppGroupIdentity(const std::string &appGroupIdentity) {
  appGroupIdentity_ = appGroupIdentity;
  setParameter(std::string("appGroupIdentity"), appGroupIdentity);
}

