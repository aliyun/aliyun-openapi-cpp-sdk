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

#include <alibabacloud/vpc/model/ModifyFullNatEntryAttributeRequest.h>

using AlibabaCloud::Vpc::Model::ModifyFullNatEntryAttributeRequest;

ModifyFullNatEntryAttributeRequest::ModifyFullNatEntryAttributeRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ModifyFullNatEntryAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyFullNatEntryAttributeRequest::~ModifyFullNatEntryAttributeRequest() {}

std::string ModifyFullNatEntryAttributeRequest::getFullNatEntryDescription() const {
  return fullNatEntryDescription_;
}

void ModifyFullNatEntryAttributeRequest::setFullNatEntryDescription(const std::string &fullNatEntryDescription) {
  fullNatEntryDescription_ = fullNatEntryDescription;
  setParameter(std::string("FullNatEntryDescription"), fullNatEntryDescription);
}

long ModifyFullNatEntryAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyFullNatEntryAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyFullNatEntryAttributeRequest::getAccessIp() const {
  return accessIp_;
}

void ModifyFullNatEntryAttributeRequest::setAccessIp(const std::string &accessIp) {
  accessIp_ = accessIp;
  setParameter(std::string("AccessIp"), accessIp);
}

std::string ModifyFullNatEntryAttributeRequest::getClientToken() const {
  return clientToken_;
}

void ModifyFullNatEntryAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyFullNatEntryAttributeRequest::getFullNatEntryId() const {
  return fullNatEntryId_;
}

void ModifyFullNatEntryAttributeRequest::setFullNatEntryId(const std::string &fullNatEntryId) {
  fullNatEntryId_ = fullNatEntryId;
  setParameter(std::string("FullNatEntryId"), fullNatEntryId);
}

std::string ModifyFullNatEntryAttributeRequest::getNatIpPort() const {
  return natIpPort_;
}

void ModifyFullNatEntryAttributeRequest::setNatIpPort(const std::string &natIpPort) {
  natIpPort_ = natIpPort;
  setParameter(std::string("NatIpPort"), natIpPort);
}

std::string ModifyFullNatEntryAttributeRequest::getFullNatTableId() const {
  return fullNatTableId_;
}

void ModifyFullNatEntryAttributeRequest::setFullNatTableId(const std::string &fullNatTableId) {
  fullNatTableId_ = fullNatTableId;
  setParameter(std::string("FullNatTableId"), fullNatTableId);
}

std::string ModifyFullNatEntryAttributeRequest::getRegionId() const {
  return regionId_;
}

void ModifyFullNatEntryAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyFullNatEntryAttributeRequest::getAccessPort() const {
  return accessPort_;
}

void ModifyFullNatEntryAttributeRequest::setAccessPort(const std::string &accessPort) {
  accessPort_ = accessPort;
  setParameter(std::string("AccessPort"), accessPort);
}

bool ModifyFullNatEntryAttributeRequest::getDryRun() const {
  return dryRun_;
}

void ModifyFullNatEntryAttributeRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string ModifyFullNatEntryAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyFullNatEntryAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyFullNatEntryAttributeRequest::getIpProtocol() const {
  return ipProtocol_;
}

void ModifyFullNatEntryAttributeRequest::setIpProtocol(const std::string &ipProtocol) {
  ipProtocol_ = ipProtocol;
  setParameter(std::string("IpProtocol"), ipProtocol);
}

std::string ModifyFullNatEntryAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyFullNatEntryAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyFullNatEntryAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyFullNatEntryAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyFullNatEntryAttributeRequest::getFullNatEntryName() const {
  return fullNatEntryName_;
}

void ModifyFullNatEntryAttributeRequest::setFullNatEntryName(const std::string &fullNatEntryName) {
  fullNatEntryName_ = fullNatEntryName;
  setParameter(std::string("FullNatEntryName"), fullNatEntryName);
}

std::string ModifyFullNatEntryAttributeRequest::getNatIp() const {
  return natIp_;
}

void ModifyFullNatEntryAttributeRequest::setNatIp(const std::string &natIp) {
  natIp_ = natIp;
  setParameter(std::string("NatIp"), natIp);
}

std::string ModifyFullNatEntryAttributeRequest::getNetworkInterfaceId() const {
  return networkInterfaceId_;
}

void ModifyFullNatEntryAttributeRequest::setNetworkInterfaceId(const std::string &networkInterfaceId) {
  networkInterfaceId_ = networkInterfaceId;
  setParameter(std::string("NetworkInterfaceId"), networkInterfaceId);
}

