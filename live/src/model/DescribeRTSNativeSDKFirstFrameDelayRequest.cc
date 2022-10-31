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

#include <alibabacloud/live/model/DescribeRTSNativeSDKFirstFrameDelayRequest.h>

using AlibabaCloud::Live::Model::DescribeRTSNativeSDKFirstFrameDelayRequest;

DescribeRTSNativeSDKFirstFrameDelayRequest::DescribeRTSNativeSDKFirstFrameDelayRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeRTSNativeSDKFirstFrameDelay") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRTSNativeSDKFirstFrameDelayRequest::~DescribeRTSNativeSDKFirstFrameDelayRequest() {}

std::string DescribeRTSNativeSDKFirstFrameDelayRequest::getEndTime() const {
  return endTime_;
}

void DescribeRTSNativeSDKFirstFrameDelayRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::vector<DescribeRTSNativeSDKFirstFrameDelayRequest::std::string> DescribeRTSNativeSDKFirstFrameDelayRequest::getDomainNameList() const {
  return domainNameList_;
}

void DescribeRTSNativeSDKFirstFrameDelayRequest::setDomainNameList(const std::vector<DescribeRTSNativeSDKFirstFrameDelayRequest::std::string> &domainNameList) {
  domainNameList_ = domainNameList;
  for(int dep1 = 0; dep1 != domainNameList.size(); dep1++) {
    setParameter(std::string("DomainNameList") + "." + std::to_string(dep1 + 1), domainNameList[dep1]);
  }
}

std::string DescribeRTSNativeSDKFirstFrameDelayRequest::getStartTime() const {
  return startTime_;
}

void DescribeRTSNativeSDKFirstFrameDelayRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeRTSNativeSDKFirstFrameDelayRequest::getDataInterval() const {
  return dataInterval_;
}

void DescribeRTSNativeSDKFirstFrameDelayRequest::setDataInterval(const std::string &dataInterval) {
  dataInterval_ = dataInterval;
  setParameter(std::string("DataInterval"), dataInterval);
}

