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

#include <alibabacloud/vpc/model/UpdateDhcpOptionsSetAttributeRequest.h>

using AlibabaCloud::Vpc::Model::UpdateDhcpOptionsSetAttributeRequest;

UpdateDhcpOptionsSetAttributeRequest::UpdateDhcpOptionsSetAttributeRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "UpdateDhcpOptionsSetAttribute") {
  setMethod(HttpRequest::Method::Post);
}

UpdateDhcpOptionsSetAttributeRequest::~UpdateDhcpOptionsSetAttributeRequest() {}

std::string UpdateDhcpOptionsSetAttributeRequest::getBootFileName() const {
  return bootFileName_;
}

void UpdateDhcpOptionsSetAttributeRequest::setBootFileName(const std::string &bootFileName) {
  bootFileName_ = bootFileName;
  setParameter(std::string("BootFileName"), bootFileName);
}

long UpdateDhcpOptionsSetAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpdateDhcpOptionsSetAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UpdateDhcpOptionsSetAttributeRequest::getClientToken() const {
  return clientToken_;
}

void UpdateDhcpOptionsSetAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateDhcpOptionsSetAttributeRequest::getTFTPServerName() const {
  return tFTPServerName_;
}

void UpdateDhcpOptionsSetAttributeRequest::setTFTPServerName(const std::string &tFTPServerName) {
  tFTPServerName_ = tFTPServerName;
  setParameter(std::string("TFTPServerName"), tFTPServerName);
}

std::string UpdateDhcpOptionsSetAttributeRequest::getLeaseTime() const {
  return leaseTime_;
}

void UpdateDhcpOptionsSetAttributeRequest::setLeaseTime(const std::string &leaseTime) {
  leaseTime_ = leaseTime;
  setParameter(std::string("LeaseTime"), leaseTime);
}

std::string UpdateDhcpOptionsSetAttributeRequest::getRegionId() const {
  return regionId_;
}

void UpdateDhcpOptionsSetAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateDhcpOptionsSetAttributeRequest::getDomainNameServers() const {
  return domainNameServers_;
}

void UpdateDhcpOptionsSetAttributeRequest::setDomainNameServers(const std::string &domainNameServers) {
  domainNameServers_ = domainNameServers;
  setParameter(std::string("DomainNameServers"), domainNameServers);
}

std::string UpdateDhcpOptionsSetAttributeRequest::getDhcpOptionsSetDescription() const {
  return dhcpOptionsSetDescription_;
}

void UpdateDhcpOptionsSetAttributeRequest::setDhcpOptionsSetDescription(const std::string &dhcpOptionsSetDescription) {
  dhcpOptionsSetDescription_ = dhcpOptionsSetDescription;
  setParameter(std::string("DhcpOptionsSetDescription"), dhcpOptionsSetDescription);
}

bool UpdateDhcpOptionsSetAttributeRequest::getDryRun() const {
  return dryRun_;
}

void UpdateDhcpOptionsSetAttributeRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string UpdateDhcpOptionsSetAttributeRequest::getDhcpOptionsSetId() const {
  return dhcpOptionsSetId_;
}

void UpdateDhcpOptionsSetAttributeRequest::setDhcpOptionsSetId(const std::string &dhcpOptionsSetId) {
  dhcpOptionsSetId_ = dhcpOptionsSetId;
  setParameter(std::string("DhcpOptionsSetId"), dhcpOptionsSetId);
}

std::string UpdateDhcpOptionsSetAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpdateDhcpOptionsSetAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpdateDhcpOptionsSetAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UpdateDhcpOptionsSetAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string UpdateDhcpOptionsSetAttributeRequest::getDomainName() const {
  return domainName_;
}

void UpdateDhcpOptionsSetAttributeRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long UpdateDhcpOptionsSetAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateDhcpOptionsSetAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateDhcpOptionsSetAttributeRequest::getDhcpOptionsSetName() const {
  return dhcpOptionsSetName_;
}

void UpdateDhcpOptionsSetAttributeRequest::setDhcpOptionsSetName(const std::string &dhcpOptionsSetName) {
  dhcpOptionsSetName_ = dhcpOptionsSetName;
  setParameter(std::string("DhcpOptionsSetName"), dhcpOptionsSetName);
}

std::string UpdateDhcpOptionsSetAttributeRequest::getIpv6LeaseTime() const {
  return ipv6LeaseTime_;
}

void UpdateDhcpOptionsSetAttributeRequest::setIpv6LeaseTime(const std::string &ipv6LeaseTime) {
  ipv6LeaseTime_ = ipv6LeaseTime;
  setParameter(std::string("Ipv6LeaseTime"), ipv6LeaseTime);
}

