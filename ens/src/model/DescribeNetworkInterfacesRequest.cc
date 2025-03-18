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

#include <alibabacloud/ens/model/DescribeNetworkInterfacesRequest.h>

using AlibabaCloud::Ens::Model::DescribeNetworkInterfacesRequest;

DescribeNetworkInterfacesRequest::DescribeNetworkInterfacesRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeNetworkInterfaces") {
  setMethod(HttpRequest::Method::Post);
}

DescribeNetworkInterfacesRequest::~DescribeNetworkInterfacesRequest() {}

std::string DescribeNetworkInterfacesRequest::getType() const {
  return type_;
}

void DescribeNetworkInterfacesRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string DescribeNetworkInterfacesRequest::getEnsRegionId() const {
  return ensRegionId_;
}

void DescribeNetworkInterfacesRequest::setEnsRegionId(const std::string &ensRegionId) {
  ensRegionId_ = ensRegionId;
  setParameter(std::string("EnsRegionId"), ensRegionId);
}

std::string DescribeNetworkInterfacesRequest::getNetworkInterfaceName() const {
  return networkInterfaceName_;
}

void DescribeNetworkInterfacesRequest::setNetworkInterfaceName(const std::string &networkInterfaceName) {
  networkInterfaceName_ = networkInterfaceName;
  setParameter(std::string("NetworkInterfaceName"), networkInterfaceName);
}

std::string DescribeNetworkInterfacesRequest::getVSwitchId() const {
  return vSwitchId_;
}

void DescribeNetworkInterfacesRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string DescribeNetworkInterfacesRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeNetworkInterfacesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeNetworkInterfacesRequest::getNetworkId() const {
  return networkId_;
}

void DescribeNetworkInterfacesRequest::setNetworkId(const std::string &networkId) {
  networkId_ = networkId;
  setParameter(std::string("NetworkId"), networkId);
}

std::vector<DescribeNetworkInterfacesRequest::std::string> DescribeNetworkInterfacesRequest::getIpv6Address() const {
  return ipv6Address_;
}

void DescribeNetworkInterfacesRequest::setIpv6Address(const std::vector<DescribeNetworkInterfacesRequest::std::string> &ipv6Address) {
  ipv6Address_ = ipv6Address;
  for(int dep1 = 0; dep1 != ipv6Address.size(); dep1++) {
    setParameter(std::string("Ipv6Address") + "." + std::to_string(dep1 + 1), ipv6Address[dep1]);
  }
}

std::string DescribeNetworkInterfacesRequest::getStatus() const {
  return status_;
}

void DescribeNetworkInterfacesRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

std::vector<DescribeNetworkInterfacesRequest::std::string> DescribeNetworkInterfacesRequest::getNetworkInterfaceIds() const {
  return networkInterfaceIds_;
}

void DescribeNetworkInterfacesRequest::setNetworkInterfaceIds(const std::vector<DescribeNetworkInterfacesRequest::std::string> &networkInterfaceIds) {
  networkInterfaceIds_ = networkInterfaceIds;
  for(int dep1 = 0; dep1 != networkInterfaceIds.size(); dep1++) {
    setParameter(std::string("NetworkInterfaceIds") + "." + std::to_string(dep1 + 1), networkInterfaceIds[dep1]);
  }
}

std::string DescribeNetworkInterfacesRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void DescribeNetworkInterfacesRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

std::string DescribeNetworkInterfacesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeNetworkInterfacesRequest::setPageNumber(const std::string &pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), pageNumber);
}

bool DescribeNetworkInterfacesRequest::getShowDetail() const {
  return showDetail_;
}

void DescribeNetworkInterfacesRequest::setShowDetail(bool showDetail) {
  showDetail_ = showDetail;
  setParameter(std::string("ShowDetail"), showDetail ? "true" : "false");
}

std::string DescribeNetworkInterfacesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeNetworkInterfacesRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::vector<DescribeNetworkInterfacesRequest::std::string> DescribeNetworkInterfacesRequest::getEnsRegionIds() const {
  return ensRegionIds_;
}

void DescribeNetworkInterfacesRequest::setEnsRegionIds(const std::vector<DescribeNetworkInterfacesRequest::std::string> &ensRegionIds) {
  ensRegionIds_ = ensRegionIds;
  for(int dep1 = 0; dep1 != ensRegionIds.size(); dep1++) {
    setParameter(std::string("EnsRegionIds") + "." + std::to_string(dep1 + 1), ensRegionIds[dep1]);
  }
}

std::string DescribeNetworkInterfacesRequest::getPrimaryIpAddress() const {
  return primaryIpAddress_;
}

void DescribeNetworkInterfacesRequest::setPrimaryIpAddress(const std::string &primaryIpAddress) {
  primaryIpAddress_ = primaryIpAddress;
  setParameter(std::string("PrimaryIpAddress"), primaryIpAddress);
}

std::string DescribeNetworkInterfacesRequest::getNetworkInterfaceId() const {
  return networkInterfaceId_;
}

void DescribeNetworkInterfacesRequest::setNetworkInterfaceId(const std::string &networkInterfaceId) {
  networkInterfaceId_ = networkInterfaceId;
  setParameter(std::string("NetworkInterfaceId"), networkInterfaceId);
}

