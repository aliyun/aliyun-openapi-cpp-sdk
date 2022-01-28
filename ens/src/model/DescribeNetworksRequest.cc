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

#include <alibabacloud/ens/model/DescribeNetworksRequest.h>

using AlibabaCloud::Ens::Model::DescribeNetworksRequest;

DescribeNetworksRequest::DescribeNetworksRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeNetworks") {
  setMethod(HttpRequest::Method::Post);
}

DescribeNetworksRequest::~DescribeNetworksRequest() {}

int DescribeNetworksRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeNetworksRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeNetworksRequest::getEnsRegionId() const {
  return ensRegionId_;
}

void DescribeNetworksRequest::setEnsRegionId(const std::string &ensRegionId) {
  ensRegionId_ = ensRegionId;
  setParameter(std::string("EnsRegionId"), ensRegionId);
}

int DescribeNetworksRequest::getPageSize() const {
  return pageSize_;
}

void DescribeNetworksRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeNetworksRequest::getNetworkName() const {
  return networkName_;
}

void DescribeNetworksRequest::setNetworkName(const std::string &networkName) {
  networkName_ = networkName;
  setParameter(std::string("NetworkName"), networkName);
}

std::string DescribeNetworksRequest::getNetworkId() const {
  return networkId_;
}

void DescribeNetworksRequest::setNetworkId(const std::string &networkId) {
  networkId_ = networkId;
  setParameter(std::string("NetworkId"), networkId);
}

