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

#include <alibabacloud/vpc/model/CreateSnatEntryRequest.h>

using AlibabaCloud::Vpc::Model::CreateSnatEntryRequest;

CreateSnatEntryRequest::CreateSnatEntryRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "CreateSnatEntry") {
  setMethod(HttpRequest::Method::Post);
}

CreateSnatEntryRequest::~CreateSnatEntryRequest() {}

long CreateSnatEntryRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateSnatEntryRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateSnatEntryRequest::getClientToken() const {
  return clientToken_;
}

void CreateSnatEntryRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateSnatEntryRequest::getSourceCIDR() const {
  return sourceCIDR_;
}

void CreateSnatEntryRequest::setSourceCIDR(const std::string &sourceCIDR) {
  sourceCIDR_ = sourceCIDR;
  setParameter(std::string("SourceCIDR"), sourceCIDR);
}

std::string CreateSnatEntryRequest::getSnatIp() const {
  return snatIp_;
}

void CreateSnatEntryRequest::setSnatIp(const std::string &snatIp) {
  snatIp_ = snatIp;
  setParameter(std::string("SnatIp"), snatIp);
}

std::string CreateSnatEntryRequest::getSourceVSwitchId() const {
  return sourceVSwitchId_;
}

void CreateSnatEntryRequest::setSourceVSwitchId(const std::string &sourceVSwitchId) {
  sourceVSwitchId_ = sourceVSwitchId;
  setParameter(std::string("SourceVSwitchId"), sourceVSwitchId);
}

std::string CreateSnatEntryRequest::getRegionId() const {
  return regionId_;
}

void CreateSnatEntryRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int CreateSnatEntryRequest::getEipAffinity() const {
  return eipAffinity_;
}

void CreateSnatEntryRequest::setEipAffinity(int eipAffinity) {
  eipAffinity_ = eipAffinity;
  setParameter(std::string("EipAffinity"), std::to_string(eipAffinity));
}

bool CreateSnatEntryRequest::getDryRun() const {
  return dryRun_;
}

void CreateSnatEntryRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateSnatEntryRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateSnatEntryRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateSnatEntryRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateSnatEntryRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string CreateSnatEntryRequest::getSnatTableId() const {
  return snatTableId_;
}

void CreateSnatEntryRequest::setSnatTableId(const std::string &snatTableId) {
  snatTableId_ = snatTableId;
  setParameter(std::string("SnatTableId"), snatTableId);
}

long CreateSnatEntryRequest::getOwnerId() const {
  return ownerId_;
}

void CreateSnatEntryRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateSnatEntryRequest::getSnatEntryName() const {
  return snatEntryName_;
}

void CreateSnatEntryRequest::setSnatEntryName(const std::string &snatEntryName) {
  snatEntryName_ = snatEntryName;
  setParameter(std::string("SnatEntryName"), snatEntryName);
}

std::string CreateSnatEntryRequest::getNetworkInterfaceId() const {
  return networkInterfaceId_;
}

void CreateSnatEntryRequest::setNetworkInterfaceId(const std::string &networkInterfaceId) {
  networkInterfaceId_ = networkInterfaceId;
  setParameter(std::string("NetworkInterfaceId"), networkInterfaceId);
}

