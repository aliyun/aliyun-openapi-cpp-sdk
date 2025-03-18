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

#include <alibabacloud/ens/model/DescribeLoadBalancersRequest.h>

using AlibabaCloud::Ens::Model::DescribeLoadBalancersRequest;

DescribeLoadBalancersRequest::DescribeLoadBalancersRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeLoadBalancers") {
  setMethod(HttpRequest::Method::Get);
}

DescribeLoadBalancersRequest::~DescribeLoadBalancersRequest() {}

std::string DescribeLoadBalancersRequest::getLoadBalancerName() const {
  return loadBalancerName_;
}

void DescribeLoadBalancersRequest::setLoadBalancerName(const std::string &loadBalancerName) {
  loadBalancerName_ = loadBalancerName;
  setParameter(std::string("LoadBalancerName"), loadBalancerName);
}

std::string DescribeLoadBalancersRequest::getEnsRegionId() const {
  return ensRegionId_;
}

void DescribeLoadBalancersRequest::setEnsRegionId(const std::string &ensRegionId) {
  ensRegionId_ = ensRegionId;
  setParameter(std::string("EnsRegionId"), ensRegionId);
}

std::string DescribeLoadBalancersRequest::getServerId() const {
  return serverId_;
}

void DescribeLoadBalancersRequest::setServerId(const std::string &serverId) {
  serverId_ = serverId;
  setParameter(std::string("ServerId"), serverId);
}

std::string DescribeLoadBalancersRequest::getVSwitchId() const {
  return vSwitchId_;
}

void DescribeLoadBalancersRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string DescribeLoadBalancersRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void DescribeLoadBalancersRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}

std::string DescribeLoadBalancersRequest::getNetworkId() const {
  return networkId_;
}

void DescribeLoadBalancersRequest::setNetworkId(const std::string &networkId) {
  networkId_ = networkId;
  setParameter(std::string("NetworkId"), networkId);
}

int DescribeLoadBalancersRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeLoadBalancersRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int DescribeLoadBalancersRequest::getPageSize() const {
  return pageSize_;
}

void DescribeLoadBalancersRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<DescribeLoadBalancersRequest::std::string> DescribeLoadBalancersRequest::getEnsRegionIds() const {
  return ensRegionIds_;
}

void DescribeLoadBalancersRequest::setEnsRegionIds(const std::vector<DescribeLoadBalancersRequest::std::string> &ensRegionIds) {
  ensRegionIds_ = ensRegionIds;
  for(int dep1 = 0; dep1 != ensRegionIds.size(); dep1++) {
    setParameter(std::string("EnsRegionIds") + "." + std::to_string(dep1 + 1), ensRegionIds[dep1]);
  }
}

std::string DescribeLoadBalancersRequest::getAddress() const {
  return address_;
}

void DescribeLoadBalancersRequest::setAddress(const std::string &address) {
  address_ = address;
  setParameter(std::string("Address"), address);
}

std::string DescribeLoadBalancersRequest::getLoadBalancerStatus() const {
  return loadBalancerStatus_;
}

void DescribeLoadBalancersRequest::setLoadBalancerStatus(const std::string &loadBalancerStatus) {
  loadBalancerStatus_ = loadBalancerStatus;
  setParameter(std::string("LoadBalancerStatus"), loadBalancerStatus);
}

