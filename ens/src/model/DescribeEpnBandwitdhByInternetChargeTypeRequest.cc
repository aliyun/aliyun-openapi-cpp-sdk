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

#include <alibabacloud/ens/model/DescribeEpnBandwitdhByInternetChargeTypeRequest.h>

using AlibabaCloud::Ens::Model::DescribeEpnBandwitdhByInternetChargeTypeRequest;

DescribeEpnBandwitdhByInternetChargeTypeRequest::DescribeEpnBandwitdhByInternetChargeTypeRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeEpnBandwitdhByInternetChargeType") {
  setMethod(HttpRequest::Method::Post);
}

DescribeEpnBandwitdhByInternetChargeTypeRequest::~DescribeEpnBandwitdhByInternetChargeTypeRequest() {}

std::string DescribeEpnBandwitdhByInternetChargeTypeRequest::getNetworkingModel() const {
  return networkingModel_;
}

void DescribeEpnBandwitdhByInternetChargeTypeRequest::setNetworkingModel(const std::string &networkingModel) {
  networkingModel_ = networkingModel;
  setParameter(std::string("NetworkingModel"), networkingModel);
}

std::string DescribeEpnBandwitdhByInternetChargeTypeRequest::getIsp() const {
  return isp_;
}

void DescribeEpnBandwitdhByInternetChargeTypeRequest::setIsp(const std::string &isp) {
  isp_ = isp;
  setParameter(std::string("Isp"), isp);
}

std::string DescribeEpnBandwitdhByInternetChargeTypeRequest::getStartTime() const {
  return startTime_;
}

void DescribeEpnBandwitdhByInternetChargeTypeRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeEpnBandwitdhByInternetChargeTypeRequest::getEnsRegionId() const {
  return ensRegionId_;
}

void DescribeEpnBandwitdhByInternetChargeTypeRequest::setEnsRegionId(const std::string &ensRegionId) {
  ensRegionId_ = ensRegionId;
  setParameter(std::string("EnsRegionId"), ensRegionId);
}

std::string DescribeEpnBandwitdhByInternetChargeTypeRequest::getEndTime() const {
  return endTime_;
}

void DescribeEpnBandwitdhByInternetChargeTypeRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

