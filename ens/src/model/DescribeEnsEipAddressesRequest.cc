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

#include <alibabacloud/ens/model/DescribeEnsEipAddressesRequest.h>

using AlibabaCloud::Ens::Model::DescribeEnsEipAddressesRequest;

DescribeEnsEipAddressesRequest::DescribeEnsEipAddressesRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeEnsEipAddresses") {
  setMethod(HttpRequest::Method::Post);
}

DescribeEnsEipAddressesRequest::~DescribeEnsEipAddressesRequest() {}

std::string DescribeEnsEipAddressesRequest::getEipName() const {
  return eipName_;
}

void DescribeEnsEipAddressesRequest::setEipName(const std::string &eipName) {
  eipName_ = eipName;
  setParameter(std::string("EipName"), eipName);
}

std::string DescribeEnsEipAddressesRequest::getEipAddress() const {
  return eipAddress_;
}

void DescribeEnsEipAddressesRequest::setEipAddress(const std::string &eipAddress) {
  eipAddress_ = eipAddress;
  setParameter(std::string("EipAddress"), eipAddress);
}

std::string DescribeEnsEipAddressesRequest::getEnsRegionId() const {
  return ensRegionId_;
}

void DescribeEnsEipAddressesRequest::setEnsRegionId(const std::string &ensRegionId) {
  ensRegionId_ = ensRegionId;
  setParameter(std::string("EnsRegionId"), ensRegionId);
}

std::string DescribeEnsEipAddressesRequest::getStatus() const {
  return status_;
}

void DescribeEnsEipAddressesRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

std::string DescribeEnsEipAddressesRequest::getStandby() const {
  return standby_;
}

void DescribeEnsEipAddressesRequest::setStandby(const std::string &standby) {
  standby_ = standby;
  setParameter(std::string("Standby"), standby);
}

std::string DescribeEnsEipAddressesRequest::getAllocationId() const {
  return allocationId_;
}

void DescribeEnsEipAddressesRequest::setAllocationId(const std::string &allocationId) {
  allocationId_ = allocationId;
  setParameter(std::string("AllocationId"), allocationId);
}

int DescribeEnsEipAddressesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeEnsEipAddressesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeEnsEipAddressesRequest::getAssociatedInstanceType() const {
  return associatedInstanceType_;
}

void DescribeEnsEipAddressesRequest::setAssociatedInstanceType(const std::string &associatedInstanceType) {
  associatedInstanceType_ = associatedInstanceType;
  setParameter(std::string("AssociatedInstanceType"), associatedInstanceType);
}

int DescribeEnsEipAddressesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeEnsEipAddressesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeEnsEipAddressesRequest::getAssociatedInstanceId() const {
  return associatedInstanceId_;
}

void DescribeEnsEipAddressesRequest::setAssociatedInstanceId(const std::string &associatedInstanceId) {
  associatedInstanceId_ = associatedInstanceId;
  setParameter(std::string("AssociatedInstanceId"), associatedInstanceId);
}

