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

#include <alibabacloud/vpc/model/CreateDhcpOptionsSetRequest.h>

using AlibabaCloud::Vpc::Model::CreateDhcpOptionsSetRequest;

CreateDhcpOptionsSetRequest::CreateDhcpOptionsSetRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "CreateDhcpOptionsSet") {
  setMethod(HttpRequest::Method::Post);
}

CreateDhcpOptionsSetRequest::~CreateDhcpOptionsSetRequest() {}

std::string CreateDhcpOptionsSetRequest::getBootFileName() const {
  return bootFileName_;
}

void CreateDhcpOptionsSetRequest::setBootFileName(const std::string &bootFileName) {
  bootFileName_ = bootFileName;
  setParameter(std::string("BootFileName"), bootFileName);
}

long CreateDhcpOptionsSetRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateDhcpOptionsSetRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateDhcpOptionsSetRequest::getClientToken() const {
  return clientToken_;
}

void CreateDhcpOptionsSetRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateDhcpOptionsSetRequest::getTFTPServerName() const {
  return tFTPServerName_;
}

void CreateDhcpOptionsSetRequest::setTFTPServerName(const std::string &tFTPServerName) {
  tFTPServerName_ = tFTPServerName;
  setParameter(std::string("TFTPServerName"), tFTPServerName);
}

std::string CreateDhcpOptionsSetRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateDhcpOptionsSetRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateDhcpOptionsSetRequest::getLeaseTime() const {
  return leaseTime_;
}

void CreateDhcpOptionsSetRequest::setLeaseTime(const std::string &leaseTime) {
  leaseTime_ = leaseTime;
  setParameter(std::string("LeaseTime"), leaseTime);
}

std::string CreateDhcpOptionsSetRequest::getRegionId() const {
  return regionId_;
}

void CreateDhcpOptionsSetRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateDhcpOptionsSetRequest::getDomainNameServers() const {
  return domainNameServers_;
}

void CreateDhcpOptionsSetRequest::setDomainNameServers(const std::string &domainNameServers) {
  domainNameServers_ = domainNameServers;
  setParameter(std::string("DomainNameServers"), domainNameServers);
}

std::vector<CreateDhcpOptionsSetRequest::Tag> CreateDhcpOptionsSetRequest::getTag() const {
  return tag_;
}

void CreateDhcpOptionsSetRequest::setTag(const std::vector<CreateDhcpOptionsSetRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

std::string CreateDhcpOptionsSetRequest::getDhcpOptionsSetDescription() const {
  return dhcpOptionsSetDescription_;
}

void CreateDhcpOptionsSetRequest::setDhcpOptionsSetDescription(const std::string &dhcpOptionsSetDescription) {
  dhcpOptionsSetDescription_ = dhcpOptionsSetDescription;
  setParameter(std::string("DhcpOptionsSetDescription"), dhcpOptionsSetDescription);
}

bool CreateDhcpOptionsSetRequest::getDryRun() const {
  return dryRun_;
}

void CreateDhcpOptionsSetRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateDhcpOptionsSetRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateDhcpOptionsSetRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateDhcpOptionsSetRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateDhcpOptionsSetRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string CreateDhcpOptionsSetRequest::getDomainName() const {
  return domainName_;
}

void CreateDhcpOptionsSetRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long CreateDhcpOptionsSetRequest::getOwnerId() const {
  return ownerId_;
}

void CreateDhcpOptionsSetRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateDhcpOptionsSetRequest::getDhcpOptionsSetName() const {
  return dhcpOptionsSetName_;
}

void CreateDhcpOptionsSetRequest::setDhcpOptionsSetName(const std::string &dhcpOptionsSetName) {
  dhcpOptionsSetName_ = dhcpOptionsSetName;
  setParameter(std::string("DhcpOptionsSetName"), dhcpOptionsSetName);
}

std::string CreateDhcpOptionsSetRequest::getIpv6LeaseTime() const {
  return ipv6LeaseTime_;
}

void CreateDhcpOptionsSetRequest::setIpv6LeaseTime(const std::string &ipv6LeaseTime) {
  ipv6LeaseTime_ = ipv6LeaseTime;
  setParameter(std::string("Ipv6LeaseTime"), ipv6LeaseTime);
}

