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

std::string DescribeNetworkInterfacesRequest::getEnsRegionId() const {
  return ensRegionId_;
}

void DescribeNetworkInterfacesRequest::setEnsRegionId(const std::string &ensRegionId) {
  ensRegionId_ = ensRegionId;
  setParameter(std::string("EnsRegionId"), ensRegionId);
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

std::string DescribeNetworkInterfacesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeNetworkInterfacesRequest::setPageNumber(const std::string &pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), pageNumber);
}

std::string DescribeNetworkInterfacesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeNetworkInterfacesRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string DescribeNetworkInterfacesRequest::getPrimaryIpAddress() const {
  return primaryIpAddress_;
}

void DescribeNetworkInterfacesRequest::setPrimaryIpAddress(const std::string &primaryIpAddress) {
  primaryIpAddress_ = primaryIpAddress;
  setParameter(std::string("PrimaryIpAddress"), primaryIpAddress);
}

