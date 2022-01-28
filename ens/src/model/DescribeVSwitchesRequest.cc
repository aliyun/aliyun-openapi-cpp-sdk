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

#include <alibabacloud/ens/model/DescribeVSwitchesRequest.h>

using AlibabaCloud::Ens::Model::DescribeVSwitchesRequest;

DescribeVSwitchesRequest::DescribeVSwitchesRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeVSwitches") {
  setMethod(HttpRequest::Method::Post);
}

DescribeVSwitchesRequest::~DescribeVSwitchesRequest() {}

std::string DescribeVSwitchesRequest::getOrderByParams() const {
  return orderByParams_;
}

void DescribeVSwitchesRequest::setOrderByParams(const std::string &orderByParams) {
  orderByParams_ = orderByParams;
  setParameter(std::string("OrderByParams"), orderByParams);
}

std::string DescribeVSwitchesRequest::getEnsRegionId() const {
  return ensRegionId_;
}

void DescribeVSwitchesRequest::setEnsRegionId(const std::string &ensRegionId) {
  ensRegionId_ = ensRegionId;
  setParameter(std::string("EnsRegionId"), ensRegionId);
}

std::string DescribeVSwitchesRequest::getVSwitchId() const {
  return vSwitchId_;
}

void DescribeVSwitchesRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string DescribeVSwitchesRequest::getNetworkId() const {
  return networkId_;
}

void DescribeVSwitchesRequest::setNetworkId(const std::string &networkId) {
  networkId_ = networkId;
  setParameter(std::string("NetworkId"), networkId);
}

int DescribeVSwitchesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeVSwitchesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int DescribeVSwitchesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeVSwitchesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeVSwitchesRequest::getVSwitchName() const {
  return vSwitchName_;
}

void DescribeVSwitchesRequest::setVSwitchName(const std::string &vSwitchName) {
  vSwitchName_ = vSwitchName;
  setParameter(std::string("VSwitchName"), vSwitchName);
}

