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

#include <alibabacloud/vpc/model/DescribeIPv6TranslatorsRequest.h>

using AlibabaCloud::Vpc::Model::DescribeIPv6TranslatorsRequest;

DescribeIPv6TranslatorsRequest::DescribeIPv6TranslatorsRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DescribeIPv6Translators") {
  setMethod(HttpRequest::Method::Post);
}

DescribeIPv6TranslatorsRequest::~DescribeIPv6TranslatorsRequest() {}

long DescribeIPv6TranslatorsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeIPv6TranslatorsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeIPv6TranslatorsRequest::getAllocateIpv4Addr() const {
  return allocateIpv4Addr_;
}

void DescribeIPv6TranslatorsRequest::setAllocateIpv4Addr(const std::string &allocateIpv4Addr) {
  allocateIpv4Addr_ = allocateIpv4Addr;
  setParameter(std::string("AllocateIpv4Addr"), allocateIpv4Addr);
}

std::string DescribeIPv6TranslatorsRequest::getSpec() const {
  return spec_;
}

void DescribeIPv6TranslatorsRequest::setSpec(const std::string &spec) {
  spec_ = spec;
  setParameter(std::string("Spec"), spec);
}

int DescribeIPv6TranslatorsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeIPv6TranslatorsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeIPv6TranslatorsRequest::getRegionId() const {
  return regionId_;
}

void DescribeIPv6TranslatorsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeIPv6TranslatorsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeIPv6TranslatorsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeIPv6TranslatorsRequest::getBusinessStatus() const {
  return businessStatus_;
}

void DescribeIPv6TranslatorsRequest::setBusinessStatus(const std::string &businessStatus) {
  businessStatus_ = businessStatus;
  setParameter(std::string("BusinessStatus"), businessStatus);
}

std::string DescribeIPv6TranslatorsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeIPv6TranslatorsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeIPv6TranslatorsRequest::getAllocateIpv6Addr() const {
  return allocateIpv6Addr_;
}

void DescribeIPv6TranslatorsRequest::setAllocateIpv6Addr(const std::string &allocateIpv6Addr) {
  allocateIpv6Addr_ = allocateIpv6Addr;
  setParameter(std::string("AllocateIpv6Addr"), allocateIpv6Addr);
}

std::string DescribeIPv6TranslatorsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeIPv6TranslatorsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeIPv6TranslatorsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeIPv6TranslatorsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeIPv6TranslatorsRequest::getName() const {
  return name_;
}

void DescribeIPv6TranslatorsRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string DescribeIPv6TranslatorsRequest::getIpv6TranslatorId() const {
  return ipv6TranslatorId_;
}

void DescribeIPv6TranslatorsRequest::setIpv6TranslatorId(const std::string &ipv6TranslatorId) {
  ipv6TranslatorId_ = ipv6TranslatorId;
  setParameter(std::string("Ipv6TranslatorId"), ipv6TranslatorId);
}

std::string DescribeIPv6TranslatorsRequest::getPayType() const {
  return payType_;
}

void DescribeIPv6TranslatorsRequest::setPayType(const std::string &payType) {
  payType_ = payType;
  setParameter(std::string("PayType"), payType);
}

std::string DescribeIPv6TranslatorsRequest::getStatus() const {
  return status_;
}

void DescribeIPv6TranslatorsRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

