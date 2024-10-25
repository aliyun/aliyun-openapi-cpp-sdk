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

#include <alibabacloud/ens/model/DescribeHaVipsRequest.h>

using AlibabaCloud::Ens::Model::DescribeHaVipsRequest;

DescribeHaVipsRequest::DescribeHaVipsRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeHaVips") {
  setMethod(HttpRequest::Method::Get);
}

DescribeHaVipsRequest::~DescribeHaVipsRequest() {}

std::string DescribeHaVipsRequest::getEnsRegionId() const {
  return ensRegionId_;
}

void DescribeHaVipsRequest::setEnsRegionId(const std::string &ensRegionId) {
  ensRegionId_ = ensRegionId;
  setParameter(std::string("EnsRegionId"), ensRegionId);
}

std::string DescribeHaVipsRequest::getHaVipId() const {
  return haVipId_;
}

void DescribeHaVipsRequest::setHaVipId(const std::string &haVipId) {
  haVipId_ = haVipId;
  setParameter(std::string("HaVipId"), haVipId);
}

std::string DescribeHaVipsRequest::getHaVipAddress() const {
  return haVipAddress_;
}

void DescribeHaVipsRequest::setHaVipAddress(const std::string &haVipAddress) {
  haVipAddress_ = haVipAddress;
  setParameter(std::string("HaVipAddress"), haVipAddress);
}

std::string DescribeHaVipsRequest::getVSwitchId() const {
  return vSwitchId_;
}

void DescribeHaVipsRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string DescribeHaVipsRequest::getName() const {
  return name_;
}

void DescribeHaVipsRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string DescribeHaVipsRequest::getNetworkId() const {
  return networkId_;
}

void DescribeHaVipsRequest::setNetworkId(const std::string &networkId) {
  networkId_ = networkId;
  setParameter(std::string("NetworkId"), networkId);
}

std::string DescribeHaVipsRequest::getStatus() const {
  return status_;
}

void DescribeHaVipsRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

std::string DescribeHaVipsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeHaVipsRequest::setPageNumber(const std::string &pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), pageNumber);
}

std::string DescribeHaVipsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeHaVipsRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

