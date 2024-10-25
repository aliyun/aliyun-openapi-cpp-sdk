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

#include <alibabacloud/ens/model/DescribeSecondaryPublicIpAddressesRequest.h>

using AlibabaCloud::Ens::Model::DescribeSecondaryPublicIpAddressesRequest;

DescribeSecondaryPublicIpAddressesRequest::DescribeSecondaryPublicIpAddressesRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeSecondaryPublicIpAddresses") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSecondaryPublicIpAddressesRequest::~DescribeSecondaryPublicIpAddressesRequest() {}

std::string DescribeSecondaryPublicIpAddressesRequest::getSecondaryPublicIpId() const {
  return secondaryPublicIpId_;
}

void DescribeSecondaryPublicIpAddressesRequest::setSecondaryPublicIpId(const std::string &secondaryPublicIpId) {
  secondaryPublicIpId_ = secondaryPublicIpId;
  setParameter(std::string("SecondaryPublicIpId"), secondaryPublicIpId);
}

std::string DescribeSecondaryPublicIpAddressesRequest::getIsp() const {
  return isp_;
}

void DescribeSecondaryPublicIpAddressesRequest::setIsp(const std::string &isp) {
  isp_ = isp;
  setParameter(std::string("Isp"), isp);
}

int DescribeSecondaryPublicIpAddressesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeSecondaryPublicIpAddressesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeSecondaryPublicIpAddressesRequest::getEnsRegionId() const {
  return ensRegionId_;
}

void DescribeSecondaryPublicIpAddressesRequest::setEnsRegionId(const std::string &ensRegionId) {
  ensRegionId_ = ensRegionId;
  setParameter(std::string("EnsRegionId"), ensRegionId);
}

int DescribeSecondaryPublicIpAddressesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeSecondaryPublicIpAddressesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeSecondaryPublicIpAddressesRequest::getSecondaryPublicIpAddress() const {
  return secondaryPublicIpAddress_;
}

void DescribeSecondaryPublicIpAddressesRequest::setSecondaryPublicIpAddress(const std::string &secondaryPublicIpAddress) {
  secondaryPublicIpAddress_ = secondaryPublicIpAddress;
  setParameter(std::string("SecondaryPublicIpAddress"), secondaryPublicIpAddress);
}

