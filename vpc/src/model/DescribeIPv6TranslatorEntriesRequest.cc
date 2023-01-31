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

#include <alibabacloud/vpc/model/DescribeIPv6TranslatorEntriesRequest.h>

using AlibabaCloud::Vpc::Model::DescribeIPv6TranslatorEntriesRequest;

DescribeIPv6TranslatorEntriesRequest::DescribeIPv6TranslatorEntriesRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DescribeIPv6TranslatorEntries") {
  setMethod(HttpRequest::Method::Post);
}

DescribeIPv6TranslatorEntriesRequest::~DescribeIPv6TranslatorEntriesRequest() {}

int DescribeIPv6TranslatorEntriesRequest::getBackendIpv4Port() const {
  return backendIpv4Port_;
}

void DescribeIPv6TranslatorEntriesRequest::setBackendIpv4Port(int backendIpv4Port) {
  backendIpv4Port_ = backendIpv4Port;
  setParameter(std::string("BackendIpv4Port"), std::to_string(backendIpv4Port));
}

long DescribeIPv6TranslatorEntriesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeIPv6TranslatorEntriesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeIPv6TranslatorEntriesRequest::getEntryName() const {
  return entryName_;
}

void DescribeIPv6TranslatorEntriesRequest::setEntryName(const std::string &entryName) {
  entryName_ = entryName;
  setParameter(std::string("EntryName"), entryName);
}

std::string DescribeIPv6TranslatorEntriesRequest::getClientToken() const {
  return clientToken_;
}

void DescribeIPv6TranslatorEntriesRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DescribeIPv6TranslatorEntriesRequest::getAclStatus() const {
  return aclStatus_;
}

void DescribeIPv6TranslatorEntriesRequest::setAclStatus(const std::string &aclStatus) {
  aclStatus_ = aclStatus;
  setParameter(std::string("AclStatus"), aclStatus);
}

int DescribeIPv6TranslatorEntriesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeIPv6TranslatorEntriesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeIPv6TranslatorEntriesRequest::getAclType() const {
  return aclType_;
}

void DescribeIPv6TranslatorEntriesRequest::setAclType(const std::string &aclType) {
  aclType_ = aclType;
  setParameter(std::string("AclType"), aclType);
}

int DescribeIPv6TranslatorEntriesRequest::getAllocateIpv6Port() const {
  return allocateIpv6Port_;
}

void DescribeIPv6TranslatorEntriesRequest::setAllocateIpv6Port(int allocateIpv6Port) {
  allocateIpv6Port_ = allocateIpv6Port;
  setParameter(std::string("AllocateIpv6Port"), std::to_string(allocateIpv6Port));
}

std::string DescribeIPv6TranslatorEntriesRequest::getRegionId() const {
  return regionId_;
}

void DescribeIPv6TranslatorEntriesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeIPv6TranslatorEntriesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeIPv6TranslatorEntriesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeIPv6TranslatorEntriesRequest::getBackendIpv4Addr() const {
  return backendIpv4Addr_;
}

void DescribeIPv6TranslatorEntriesRequest::setBackendIpv4Addr(const std::string &backendIpv4Addr) {
  backendIpv4Addr_ = backendIpv4Addr;
  setParameter(std::string("BackendIpv4Addr"), backendIpv4Addr);
}

std::string DescribeIPv6TranslatorEntriesRequest::getAclId() const {
  return aclId_;
}

void DescribeIPv6TranslatorEntriesRequest::setAclId(const std::string &aclId) {
  aclId_ = aclId;
  setParameter(std::string("AclId"), aclId);
}

std::string DescribeIPv6TranslatorEntriesRequest::getIpv6TranslatorEntryId() const {
  return ipv6TranslatorEntryId_;
}

void DescribeIPv6TranslatorEntriesRequest::setIpv6TranslatorEntryId(const std::string &ipv6TranslatorEntryId) {
  ipv6TranslatorEntryId_ = ipv6TranslatorEntryId;
  setParameter(std::string("Ipv6TranslatorEntryId"), ipv6TranslatorEntryId);
}

std::string DescribeIPv6TranslatorEntriesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeIPv6TranslatorEntriesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeIPv6TranslatorEntriesRequest::getAllocateIpv6Addr() const {
  return allocateIpv6Addr_;
}

void DescribeIPv6TranslatorEntriesRequest::setAllocateIpv6Addr(const std::string &allocateIpv6Addr) {
  allocateIpv6Addr_ = allocateIpv6Addr;
  setParameter(std::string("AllocateIpv6Addr"), allocateIpv6Addr);
}

std::string DescribeIPv6TranslatorEntriesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeIPv6TranslatorEntriesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeIPv6TranslatorEntriesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeIPv6TranslatorEntriesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeIPv6TranslatorEntriesRequest::getTransProtocol() const {
  return transProtocol_;
}

void DescribeIPv6TranslatorEntriesRequest::setTransProtocol(const std::string &transProtocol) {
  transProtocol_ = transProtocol;
  setParameter(std::string("TransProtocol"), transProtocol);
}

std::string DescribeIPv6TranslatorEntriesRequest::getIpv6TranslatorId() const {
  return ipv6TranslatorId_;
}

void DescribeIPv6TranslatorEntriesRequest::setIpv6TranslatorId(const std::string &ipv6TranslatorId) {
  ipv6TranslatorId_ = ipv6TranslatorId;
  setParameter(std::string("Ipv6TranslatorId"), ipv6TranslatorId);
}

