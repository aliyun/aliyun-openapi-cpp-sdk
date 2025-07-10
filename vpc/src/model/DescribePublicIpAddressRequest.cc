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

#include <alibabacloud/vpc/model/DescribePublicIpAddressRequest.h>

using AlibabaCloud::Vpc::Model::DescribePublicIpAddressRequest;

DescribePublicIpAddressRequest::DescribePublicIpAddressRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DescribePublicIpAddress") {
  setMethod(HttpRequest::Method::Post);
}

DescribePublicIpAddressRequest::~DescribePublicIpAddressRequest() {}

long DescribePublicIpAddressRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribePublicIpAddressRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int DescribePublicIpAddressRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribePublicIpAddressRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribePublicIpAddressRequest::getRegionId() const {
  return regionId_;
}

void DescribePublicIpAddressRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long DescribePublicIpAddressRequest::getResourceUid() const {
  return resourceUid_;
}

void DescribePublicIpAddressRequest::setResourceUid(long resourceUid) {
  resourceUid_ = resourceUid;
  setParameter(std::string("ResourceUid"), std::to_string(resourceUid));
}

int DescribePublicIpAddressRequest::getPageSize() const {
  return pageSize_;
}

void DescribePublicIpAddressRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribePublicIpAddressRequest::getIpVersion() const {
  return ipVersion_;
}

void DescribePublicIpAddressRequest::setIpVersion(const std::string &ipVersion) {
  ipVersion_ = ipVersion;
  setParameter(std::string("IpVersion"), ipVersion);
}

std::string DescribePublicIpAddressRequest::getBandwidth() const {
  return bandwidth_;
}

void DescribePublicIpAddressRequest::setBandwidth(const std::string &bandwidth) {
  bandwidth_ = bandwidth;
  setParameter(std::string("Bandwidth"), bandwidth);
}

std::string DescribePublicIpAddressRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribePublicIpAddressRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribePublicIpAddressRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribePublicIpAddressRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribePublicIpAddressRequest::getOwnerId() const {
  return ownerId_;
}

void DescribePublicIpAddressRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribePublicIpAddressRequest::getKbpsBandwidth() const {
  return kbpsBandwidth_;
}

void DescribePublicIpAddressRequest::setKbpsBandwidth(const std::string &kbpsBandwidth) {
  kbpsBandwidth_ = kbpsBandwidth;
  setParameter(std::string("KbpsBandwidth"), kbpsBandwidth);
}

std::string DescribePublicIpAddressRequest::getResourceBid() const {
  return resourceBid_;
}

void DescribePublicIpAddressRequest::setResourceBid(const std::string &resourceBid) {
  resourceBid_ = resourceBid;
  setParameter(std::string("ResourceBid"), resourceBid);
}

