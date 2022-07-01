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

#include <alibabacloud/ddoscoo/model/DescribeAttackAnalysisMaxQpsRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribeAttackAnalysisMaxQpsRequest;

DescribeAttackAnalysisMaxQpsRequest::DescribeAttackAnalysisMaxQpsRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "DescribeAttackAnalysisMaxQps") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAttackAnalysisMaxQpsRequest::~DescribeAttackAnalysisMaxQpsRequest() {}

long DescribeAttackAnalysisMaxQpsRequest::getEndTime() const {
  return endTime_;
}

void DescribeAttackAnalysisMaxQpsRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long DescribeAttackAnalysisMaxQpsRequest::getStartTime() const {
  return startTime_;
}

void DescribeAttackAnalysisMaxQpsRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string DescribeAttackAnalysisMaxQpsRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeAttackAnalysisMaxQpsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

