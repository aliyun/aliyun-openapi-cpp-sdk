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

#include <alibabacloud/vpc/model/DescribeSnatTableEntriesRequest.h>

using AlibabaCloud::Vpc::Model::DescribeSnatTableEntriesRequest;

DescribeSnatTableEntriesRequest::DescribeSnatTableEntriesRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DescribeSnatTableEntries") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSnatTableEntriesRequest::~DescribeSnatTableEntriesRequest() {}

long DescribeSnatTableEntriesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeSnatTableEntriesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::vector<DescribeSnatTableEntriesRequest::std::string> DescribeSnatTableEntriesRequest::getNetworkInterfaceIds() const {
  return networkInterfaceIds_;
}

void DescribeSnatTableEntriesRequest::setNetworkInterfaceIds(const std::vector<DescribeSnatTableEntriesRequest::std::string> &networkInterfaceIds) {
  networkInterfaceIds_ = networkInterfaceIds;
  for(int dep1 = 0; dep1 != networkInterfaceIds.size(); dep1++) {
    setParameter(std::string("NetworkInterfaceIds") + "." + std::to_string(dep1 + 1), networkInterfaceIds[dep1]);
  }
}

std::string DescribeSnatTableEntriesRequest::getSourceCIDR() const {
  return sourceCIDR_;
}

void DescribeSnatTableEntriesRequest::setSourceCIDR(const std::string &sourceCIDR) {
  sourceCIDR_ = sourceCIDR;
  setParameter(std::string("SourceCIDR"), sourceCIDR);
}

std::string DescribeSnatTableEntriesRequest::getSnatIp() const {
  return snatIp_;
}

void DescribeSnatTableEntriesRequest::setSnatIp(const std::string &snatIp) {
  snatIp_ = snatIp;
  setParameter(std::string("SnatIp"), snatIp);
}

int DescribeSnatTableEntriesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeSnatTableEntriesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeSnatTableEntriesRequest::getSourceVSwitchId() const {
  return sourceVSwitchId_;
}

void DescribeSnatTableEntriesRequest::setSourceVSwitchId(const std::string &sourceVSwitchId) {
  sourceVSwitchId_ = sourceVSwitchId;
  setParameter(std::string("SourceVSwitchId"), sourceVSwitchId);
}

std::string DescribeSnatTableEntriesRequest::getRegionId() const {
  return regionId_;
}

void DescribeSnatTableEntriesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeSnatTableEntriesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeSnatTableEntriesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeSnatTableEntriesRequest::getSnatEntryId() const {
  return snatEntryId_;
}

void DescribeSnatTableEntriesRequest::setSnatEntryId(const std::string &snatEntryId) {
  snatEntryId_ = snatEntryId;
  setParameter(std::string("SnatEntryId"), snatEntryId);
}

std::string DescribeSnatTableEntriesRequest::getNatGatewayId() const {
  return natGatewayId_;
}

void DescribeSnatTableEntriesRequest::setNatGatewayId(const std::string &natGatewayId) {
  natGatewayId_ = natGatewayId;
  setParameter(std::string("NatGatewayId"), natGatewayId);
}

std::string DescribeSnatTableEntriesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeSnatTableEntriesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeSnatTableEntriesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeSnatTableEntriesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeSnatTableEntriesRequest::getSnatTableId() const {
  return snatTableId_;
}

void DescribeSnatTableEntriesRequest::setSnatTableId(const std::string &snatTableId) {
  snatTableId_ = snatTableId;
  setParameter(std::string("SnatTableId"), snatTableId);
}

long DescribeSnatTableEntriesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeSnatTableEntriesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeSnatTableEntriesRequest::getSnatEntryName() const {
  return snatEntryName_;
}

void DescribeSnatTableEntriesRequest::setSnatEntryName(const std::string &snatEntryName) {
  snatEntryName_ = snatEntryName;
  setParameter(std::string("SnatEntryName"), snatEntryName);
}

