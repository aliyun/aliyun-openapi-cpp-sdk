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

#include <alibabacloud/drds/model/DescribeRdsPerformanceSummaryRequest.h>

using AlibabaCloud::Drds::Model::DescribeRdsPerformanceSummaryRequest;

DescribeRdsPerformanceSummaryRequest::DescribeRdsPerformanceSummaryRequest()
    : RpcServiceRequest("drds", "2019-01-23", "DescribeRdsPerformanceSummary") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRdsPerformanceSummaryRequest::~DescribeRdsPerformanceSummaryRequest() {}

std::vector<std::string> DescribeRdsPerformanceSummaryRequest::getRdsInstanceId() const {
  return rdsInstanceId_;
}

void DescribeRdsPerformanceSummaryRequest::setRdsInstanceId(const std::vector<std::string> &rdsInstanceId) {
  rdsInstanceId_ = rdsInstanceId;
}

std::string DescribeRdsPerformanceSummaryRequest::getDrdsInstanceId() const {
  return drdsInstanceId_;
}

void DescribeRdsPerformanceSummaryRequest::setDrdsInstanceId(const std::string &drdsInstanceId) {
  drdsInstanceId_ = drdsInstanceId;
  setParameter(std::string("DrdsInstanceId"), drdsInstanceId);
}

std::string DescribeRdsPerformanceSummaryRequest::getRegionId() const {
  return regionId_;
}

void DescribeRdsPerformanceSummaryRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

