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

std::vector<DescribeVSwitchesRequest::std::string> DescribeVSwitchesRequest::getVSwitchIds() const {
  return vSwitchIds_;
}

void DescribeVSwitchesRequest::setVSwitchIds(const std::vector<DescribeVSwitchesRequest::std::string> &vSwitchIds) {
  vSwitchIds_ = vSwitchIds;
  for(int dep1 = 0; dep1 != vSwitchIds.size(); dep1++) {
    setParameter(std::string("VSwitchIds") + "." + std::to_string(dep1 + 1), vSwitchIds[dep1]);
  }
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

std::vector<DescribeVSwitchesRequest::std::string> DescribeVSwitchesRequest::getEnsRegionIds() const {
  return ensRegionIds_;
}

void DescribeVSwitchesRequest::setEnsRegionIds(const std::vector<DescribeVSwitchesRequest::std::string> &ensRegionIds) {
  ensRegionIds_ = ensRegionIds;
  for(int dep1 = 0; dep1 != ensRegionIds.size(); dep1++) {
    setParameter(std::string("EnsRegionIds") + "." + std::to_string(dep1 + 1), ensRegionIds[dep1]);
  }
}

std::string DescribeVSwitchesRequest::getVSwitchName() const {
  return vSwitchName_;
}

void DescribeVSwitchesRequest::setVSwitchName(const std::string &vSwitchName) {
  vSwitchName_ = vSwitchName;
  setParameter(std::string("VSwitchName"), vSwitchName);
}

