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

#include <alibabacloud/vpc/model/CreateFullNatEntryRequest.h>

using AlibabaCloud::Vpc::Model::CreateFullNatEntryRequest;

CreateFullNatEntryRequest::CreateFullNatEntryRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "CreateFullNatEntry") {
  setMethod(HttpRequest::Method::Post);
}

CreateFullNatEntryRequest::~CreateFullNatEntryRequest() {}

std::string CreateFullNatEntryRequest::getFullNatEntryDescription() const {
  return fullNatEntryDescription_;
}

void CreateFullNatEntryRequest::setFullNatEntryDescription(const std::string &fullNatEntryDescription) {
  fullNatEntryDescription_ = fullNatEntryDescription;
  setParameter(std::string("FullNatEntryDescription"), fullNatEntryDescription);
}

long CreateFullNatEntryRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateFullNatEntryRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateFullNatEntryRequest::getAccessIp() const {
  return accessIp_;
}

void CreateFullNatEntryRequest::setAccessIp(const std::string &accessIp) {
  accessIp_ = accessIp;
  setParameter(std::string("AccessIp"), accessIp);
}

std::string CreateFullNatEntryRequest::getClientToken() const {
  return clientToken_;
}

void CreateFullNatEntryRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateFullNatEntryRequest::getNatIpPort() const {
  return natIpPort_;
}

void CreateFullNatEntryRequest::setNatIpPort(const std::string &natIpPort) {
  natIpPort_ = natIpPort;
  setParameter(std::string("NatIpPort"), natIpPort);
}

std::string CreateFullNatEntryRequest::getFullNatTableId() const {
  return fullNatTableId_;
}

void CreateFullNatEntryRequest::setFullNatTableId(const std::string &fullNatTableId) {
  fullNatTableId_ = fullNatTableId;
  setParameter(std::string("FullNatTableId"), fullNatTableId);
}

std::string CreateFullNatEntryRequest::getRegionId() const {
  return regionId_;
}

void CreateFullNatEntryRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateFullNatEntryRequest::getAccessPort() const {
  return accessPort_;
}

void CreateFullNatEntryRequest::setAccessPort(const std::string &accessPort) {
  accessPort_ = accessPort;
  setParameter(std::string("AccessPort"), accessPort);
}

bool CreateFullNatEntryRequest::getDryRun() const {
  return dryRun_;
}

void CreateFullNatEntryRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateFullNatEntryRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateFullNatEntryRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateFullNatEntryRequest::getIpProtocol() const {
  return ipProtocol_;
}

void CreateFullNatEntryRequest::setIpProtocol(const std::string &ipProtocol) {
  ipProtocol_ = ipProtocol;
  setParameter(std::string("IpProtocol"), ipProtocol);
}

std::string CreateFullNatEntryRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateFullNatEntryRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateFullNatEntryRequest::getOwnerId() const {
  return ownerId_;
}

void CreateFullNatEntryRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateFullNatEntryRequest::getFullNatEntryName() const {
  return fullNatEntryName_;
}

void CreateFullNatEntryRequest::setFullNatEntryName(const std::string &fullNatEntryName) {
  fullNatEntryName_ = fullNatEntryName;
  setParameter(std::string("FullNatEntryName"), fullNatEntryName);
}

std::string CreateFullNatEntryRequest::getNatIp() const {
  return natIp_;
}

void CreateFullNatEntryRequest::setNatIp(const std::string &natIp) {
  natIp_ = natIp;
  setParameter(std::string("NatIp"), natIp);
}

std::string CreateFullNatEntryRequest::getNetworkInterfaceId() const {
  return networkInterfaceId_;
}

void CreateFullNatEntryRequest::setNetworkInterfaceId(const std::string &networkInterfaceId) {
  networkInterfaceId_ = networkInterfaceId;
  setParameter(std::string("NetworkInterfaceId"), networkInterfaceId);
}

