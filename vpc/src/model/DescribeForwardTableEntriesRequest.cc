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

#include <alibabacloud/vpc/model/DescribeForwardTableEntriesRequest.h>

using AlibabaCloud::Vpc::Model::DescribeForwardTableEntriesRequest;

DescribeForwardTableEntriesRequest::DescribeForwardTableEntriesRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DescribeForwardTableEntries") {
  setMethod(HttpRequest::Method::Post);
}

DescribeForwardTableEntriesRequest::~DescribeForwardTableEntriesRequest() {}

long DescribeForwardTableEntriesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeForwardTableEntriesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeForwardTableEntriesRequest::getForwardTableId() const {
  return forwardTableId_;
}

void DescribeForwardTableEntriesRequest::setForwardTableId(const std::string &forwardTableId) {
  forwardTableId_ = forwardTableId;
  setParameter(std::string("ForwardTableId"), forwardTableId);
}

std::string DescribeForwardTableEntriesRequest::getInternalIp() const {
  return internalIp_;
}

void DescribeForwardTableEntriesRequest::setInternalIp(const std::string &internalIp) {
  internalIp_ = internalIp;
  setParameter(std::string("InternalIp"), internalIp);
}

int DescribeForwardTableEntriesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeForwardTableEntriesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeForwardTableEntriesRequest::getRegionId() const {
  return regionId_;
}

void DescribeForwardTableEntriesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeForwardTableEntriesRequest::getForwardEntryId() const {
  return forwardEntryId_;
}

void DescribeForwardTableEntriesRequest::setForwardEntryId(const std::string &forwardEntryId) {
  forwardEntryId_ = forwardEntryId;
  setParameter(std::string("ForwardEntryId"), forwardEntryId);
}

int DescribeForwardTableEntriesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeForwardTableEntriesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeForwardTableEntriesRequest::getNatGatewayId() const {
  return natGatewayId_;
}

void DescribeForwardTableEntriesRequest::setNatGatewayId(const std::string &natGatewayId) {
  natGatewayId_ = natGatewayId;
  setParameter(std::string("NatGatewayId"), natGatewayId);
}

std::string DescribeForwardTableEntriesRequest::getExternalIp() const {
  return externalIp_;
}

void DescribeForwardTableEntriesRequest::setExternalIp(const std::string &externalIp) {
  externalIp_ = externalIp;
  setParameter(std::string("ExternalIp"), externalIp);
}

std::string DescribeForwardTableEntriesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeForwardTableEntriesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeForwardTableEntriesRequest::getIpProtocol() const {
  return ipProtocol_;
}

void DescribeForwardTableEntriesRequest::setIpProtocol(const std::string &ipProtocol) {
  ipProtocol_ = ipProtocol;
  setParameter(std::string("IpProtocol"), ipProtocol);
}

std::string DescribeForwardTableEntriesRequest::getForwardEntryName() const {
  return forwardEntryName_;
}

void DescribeForwardTableEntriesRequest::setForwardEntryName(const std::string &forwardEntryName) {
  forwardEntryName_ = forwardEntryName;
  setParameter(std::string("ForwardEntryName"), forwardEntryName);
}

std::string DescribeForwardTableEntriesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeForwardTableEntriesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeForwardTableEntriesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeForwardTableEntriesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeForwardTableEntriesRequest::getInternalPort() const {
  return internalPort_;
}

void DescribeForwardTableEntriesRequest::setInternalPort(const std::string &internalPort) {
  internalPort_ = internalPort;
  setParameter(std::string("InternalPort"), internalPort);
}

std::string DescribeForwardTableEntriesRequest::getExternalPort() const {
  return externalPort_;
}

void DescribeForwardTableEntriesRequest::setExternalPort(const std::string &externalPort) {
  externalPort_ = externalPort;
  setParameter(std::string("ExternalPort"), externalPort);
}

