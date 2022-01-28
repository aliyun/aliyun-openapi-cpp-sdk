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

#include <alibabacloud/ens/model/DescribeEpnBandWidthDataRequest.h>

using AlibabaCloud::Ens::Model::DescribeEpnBandWidthDataRequest;

DescribeEpnBandWidthDataRequest::DescribeEpnBandWidthDataRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeEpnBandWidthData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeEpnBandWidthDataRequest::~DescribeEpnBandWidthDataRequest() {}

std::string DescribeEpnBandWidthDataRequest::getIsp() const {
  return isp_;
}

void DescribeEpnBandWidthDataRequest::setIsp(const std::string &isp) {
  isp_ = isp;
  setParameter(std::string("Isp"), isp);
}

std::string DescribeEpnBandWidthDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeEpnBandWidthDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeEpnBandWidthDataRequest::getEnsRegionId() const {
  return ensRegionId_;
}

void DescribeEpnBandWidthDataRequest::setEnsRegionId(const std::string &ensRegionId) {
  ensRegionId_ = ensRegionId;
  setParameter(std::string("EnsRegionId"), ensRegionId);
}

std::string DescribeEpnBandWidthDataRequest::getEPNInstanceId() const {
  return ePNInstanceId_;
}

void DescribeEpnBandWidthDataRequest::setEPNInstanceId(const std::string &ePNInstanceId) {
  ePNInstanceId_ = ePNInstanceId;
  setParameter(std::string("EPNInstanceId"), ePNInstanceId);
}

std::string DescribeEpnBandWidthDataRequest::getPeriod() const {
  return period_;
}

void DescribeEpnBandWidthDataRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

std::string DescribeEpnBandWidthDataRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeEpnBandWidthDataRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeEpnBandWidthDataRequest::getNetworkingModel() const {
  return networkingModel_;
}

void DescribeEpnBandWidthDataRequest::setNetworkingModel(const std::string &networkingModel) {
  networkingModel_ = networkingModel;
  setParameter(std::string("NetworkingModel"), networkingModel);
}

std::string DescribeEpnBandWidthDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeEpnBandWidthDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

