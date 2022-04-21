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

#include <alibabacloud/voicenavigator/model/DescribeStatisticalDataRequest.h>

using AlibabaCloud::VoiceNavigator::Model::DescribeStatisticalDataRequest;

DescribeStatisticalDataRequest::DescribeStatisticalDataRequest()
    : RpcServiceRequest("voicenavigator", "2018-06-12", "DescribeStatisticalData") {
  setMethod(HttpRequest::Method::Get);
}

DescribeStatisticalDataRequest::~DescribeStatisticalDataRequest() {}

long DescribeStatisticalDataRequest::getBeginTimeLeftRange() const {
  return beginTimeLeftRange_;
}

void DescribeStatisticalDataRequest::setBeginTimeLeftRange(long beginTimeLeftRange) {
  beginTimeLeftRange_ = beginTimeLeftRange;
  setParameter(std::string("BeginTimeLeftRange"), std::to_string(beginTimeLeftRange));
}

std::string DescribeStatisticalDataRequest::getTimeUnit() const {
  return timeUnit_;
}

void DescribeStatisticalDataRequest::setTimeUnit(const std::string &timeUnit) {
  timeUnit_ = timeUnit;
  setParameter(std::string("TimeUnit"), timeUnit);
}

std::string DescribeStatisticalDataRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeStatisticalDataRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

long DescribeStatisticalDataRequest::getBeginTimeRightRange() const {
  return beginTimeRightRange_;
}

void DescribeStatisticalDataRequest::setBeginTimeRightRange(long beginTimeRightRange) {
  beginTimeRightRange_ = beginTimeRightRange;
  setParameter(std::string("BeginTimeRightRange"), std::to_string(beginTimeRightRange));
}

