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

#include <alibabacloud/ens/model/DescribeUserBandWidthDataRequest.h>

using AlibabaCloud::Ens::Model::DescribeUserBandWidthDataRequest;

DescribeUserBandWidthDataRequest::DescribeUserBandWidthDataRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeUserBandWidthData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeUserBandWidthDataRequest::~DescribeUserBandWidthDataRequest() {}

std::string DescribeUserBandWidthDataRequest::getIsp() const {
  return isp_;
}

void DescribeUserBandWidthDataRequest::setIsp(const std::string &isp) {
  isp_ = isp;
  setParameter(std::string("Isp"), isp);
}

std::string DescribeUserBandWidthDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeUserBandWidthDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeUserBandWidthDataRequest::getEnsRegionId() const {
  return ensRegionId_;
}

void DescribeUserBandWidthDataRequest::setEnsRegionId(const std::string &ensRegionId) {
  ensRegionId_ = ensRegionId;
  setParameter(std::string("EnsRegionId"), ensRegionId);
}

std::string DescribeUserBandWidthDataRequest::getPeriod() const {
  return period_;
}

void DescribeUserBandWidthDataRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

std::string DescribeUserBandWidthDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeUserBandWidthDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeUserBandWidthDataRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeUserBandWidthDataRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

