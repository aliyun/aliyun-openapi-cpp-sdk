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

#include <alibabacloud/ens/model/DescribeNatGatewaysRequest.h>

using AlibabaCloud::Ens::Model::DescribeNatGatewaysRequest;

DescribeNatGatewaysRequest::DescribeNatGatewaysRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeNatGateways") {
  setMethod(HttpRequest::Method::Get);
}

DescribeNatGatewaysRequest::~DescribeNatGatewaysRequest() {}

std::string DescribeNatGatewaysRequest::getEnsRegionId() const {
  return ensRegionId_;
}

void DescribeNatGatewaysRequest::setEnsRegionId(const std::string &ensRegionId) {
  ensRegionId_ = ensRegionId;
  setParameter(std::string("EnsRegionId"), ensRegionId);
}

std::string DescribeNatGatewaysRequest::getVSwitchId() const {
  return vSwitchId_;
}

void DescribeNatGatewaysRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string DescribeNatGatewaysRequest::getName() const {
  return name_;
}

void DescribeNatGatewaysRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string DescribeNatGatewaysRequest::getNetworkId() const {
  return networkId_;
}

void DescribeNatGatewaysRequest::setNetworkId(const std::string &networkId) {
  networkId_ = networkId;
  setParameter(std::string("NetworkId"), networkId);
}

int DescribeNatGatewaysRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeNatGatewaysRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int DescribeNatGatewaysRequest::getPageSize() const {
  return pageSize_;
}

void DescribeNatGatewaysRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeNatGatewaysRequest::getNatGatewayId() const {
  return natGatewayId_;
}

void DescribeNatGatewaysRequest::setNatGatewayId(const std::string &natGatewayId) {
  natGatewayId_ = natGatewayId;
  setParameter(std::string("NatGatewayId"), natGatewayId);
}

std::vector<DescribeNatGatewaysRequest::std::string> DescribeNatGatewaysRequest::getEnsRegionIds() const {
  return ensRegionIds_;
}

void DescribeNatGatewaysRequest::setEnsRegionIds(const std::vector<DescribeNatGatewaysRequest::std::string> &ensRegionIds) {
  ensRegionIds_ = ensRegionIds;
  for(int dep1 = 0; dep1 != ensRegionIds.size(); dep1++) {
    setParameter(std::string("EnsRegionIds") + "." + std::to_string(dep1 + 1), ensRegionIds[dep1]);
  }
}

std::vector<DescribeNatGatewaysRequest::std::string> DescribeNatGatewaysRequest::getNatGatewayIds() const {
  return natGatewayIds_;
}

void DescribeNatGatewaysRequest::setNatGatewayIds(const std::vector<DescribeNatGatewaysRequest::std::string> &natGatewayIds) {
  natGatewayIds_ = natGatewayIds;
  for(int dep1 = 0; dep1 != natGatewayIds.size(); dep1++) {
    setParameter(std::string("NatGatewayIds") + "." + std::to_string(dep1 + 1), natGatewayIds[dep1]);
  }
}

